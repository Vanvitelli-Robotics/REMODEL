clearvars
close all

load_constants

load OK_v0.2_0.4_0.8_2.0-2020-10-06-10-01-05.mat

t0 = t_tactile(1)+100;
exp_to_same_t

t_lim = [0 600];
Dy_annotation_h = [
    -0.031 0 -0.007 -0.015
    -0.02 -0.015 -0.032 0
    0 -0.03 -0.042 -0.065
    -0.02 0 -0.001 -0.022];

intervals = [t_lim(1) 220 380 510 t_lim(end)];
intervals_tx = {'0.2\,[N/s]', '0.4\,[N/s]', '0.8\,[N/s]', '2.0\,[N/s]'};

Dtactile = tactile-tactile(:,find(t_tactile>0,1));
meanDtactile = mean(Dtactile,1);
meanDtactile_max = max(meanDtactile(:));

%find max hists
toBePlotted = [0, 5 13 17];
hist_y_ax_tx = {mean_V_str};
fz_hist = zeros(numel(toBePlotted),numel(intervals)-1);
vpoints_hist = zeros(numel(toBePlotted),2,numel(intervals)-1);
metric_hist = zeros(numel(toBePlotted),numel(intervals)-1);
for j=1:numel(toBePlotted)
    if j==1
        v_ = meanDtactile;
    else
        v_ = Dtactile(toBePlotted(j),:);
        hist_y_ax_tx{j} = DV_i_str_builder(toBePlotted(j));
    end
    for i=1:numel(intervals)-1
        [metric_, fz_hist_, hist_points_] = findHist(t,fz,v_,[intervals(i) intervals(i+1)]);
        fz_hist(j,i) = fz_hist_;
        vpoints_hist(j,:,i) = hist_points_(:);
        metric_hist(j,i) = metric_/max(v_(:));
    end
end

%% plot fz and voltages
figure(1)
plot(t_wrench,fz,'LineWidth',line_w)
xlim(t_lim)
xlabel(time_str)
ylabel(fz_str)
set_ax_props
saveAsPDF('robot_updown_fz',true);

figure(2)
plot(t_tactile(1:20:end),Dtactile(:,1:20:end),'LineWidth',line_w)
xlim(t_lim)
xlabel(time_str)
ylabel(DV_i_str)
set_ax_props
saveAsPDF('robot_updown_Dv',true);

%% Plot hist
indx_fig = 2;
for j = 1:numel(toBePlotted)
	indx_fig = indx_fig+1;
    if j==1
        v_ = meanDtactile;
    else
        v_ = Dtactile(toBePlotted(j),:);
    end
    figure(indx_fig)
    hold on
    clear lh
    for i=1:numel(intervals)-1
        cut = t>intervals(i) & t<intervals(i+1);
        lh(i) = plot(fz(cut),v_(cut),'LineWidth',line_w, 'DisplayName',intervals_tx{i});
    end
    for i=1:numel(lh)
        plot(fz_hist(j,i)*ones(1,2),vpoints_hist(j,:,i),'-+','Color',lh(i).Color,'LineWidth',line_w/2);
        tx = text(fz_hist(j,i), vpoints_hist(j,1,i)+Dy_annotation_h(j,i), ['$e_{hyst} = ' num2str(metric_hist(j,i)*100,'%1.2f') '\%$']);
        tx.FontSize = font_size;
        tx.Color = lh(i).Color;
        tx.Interpreter = 'latex';
        tx.FontName = 'Times';
        tx.VerticalAlignment = 'top';
        tx.HorizontalAlignment = 'left';
    end
    hold off
    xlim([0 15])
    xlabel(fz_str)
    ylabel(hist_y_ax_tx{j})
    set_ax_props
    l = legend(lh);
    l.Location = 'northwest';
    l.Interpreter = 'latex';
    l.FontSize = font_size;
    l.FontName = 'Times';
    
    saveAsPDF(['robot_updown_hyst' num2str(toBePlotted(j))],true);
end

%% ripetibility

t1_end = 79.2;
t2_end = 265;
fz_rip = zeros(1,numel(toBePlotted));
vpoints_rip = zeros(2,numel(toBePlotted));
metric_rip = zeros(1,numel(toBePlotted));
for j=1:numel(toBePlotted)
    if j==1
        v_ = meanDtactile;
    else
        v_ = Dtactile(toBePlotted(j),:);
    end
    cut = (t>intervals(1) & t<t1_end) | (t>intervals(2) & t<t2_end);

    [metric_, fz_hist_, hist_points_] = findHist(t(cut),fz(cut),v_(cut),[intervals(1) intervals(3)], intervals(2));
    
    fz_rip(j) = fz_hist_;
    vpoints_rip(:,j) = hist_points_(:);
    metric_rip(j) = metric_/max(v_(cut));
    
end

%% Plot rip

for j = 1:numel(toBePlotted)
	indx_fig = indx_fig+1;
    if j==1
        v_ = meanDtactile;
    else
        v_ = Dtactile(toBePlotted(j),:);
    end
    figure(indx_fig)
    hold on
    clear lh
    cut1 = (t>intervals(1) & t<t1_end);
    cut2 = (t>intervals(2) & t<t2_end);
    lh(1) = plot(fz(cut1),v_(cut1),'LineWidth',line_w, 'DisplayName','rip 1');
    lh(2) = plot(fz(cut2),v_(cut2),'LineWidth',line_w, 'DisplayName','rip 2');
    plot(fz_rip(j)*ones(1,2),vpoints_rip(:,j),'-+','Color','k','LineWidth',line_w/2);
    tx = text(fz_rip(j), vpoints_rip(1,j), ['$e_{repeat} = ' num2str(metric_rip(j)*100,'%1.2f') '\%$']);
    tx.FontSize = font_size;
    tx.Color = 'k';
    tx.Interpreter = 'latex';
    tx.FontName = 'Times';
    tx.VerticalAlignment = 'baseline';
    tx.HorizontalAlignment = 'right';
       
    hold off
    xlim([0 15])
    xlabel(fz_str)
    ylabel(hist_y_ax_tx{j})
    set_ax_props
%     l = legend(lh);
%     l.Location = 'northwest';
%     l.Interpreter = 'latex';
%     l.FontSize = font_size;
%     l.FontName = 'Times';
    
    saveAsPDF(['robot_updown_repeat' num2str(toBePlotted(j))],true);
end

