clear all
close all

save_fig = false; % true if you want to save figures
font_size = 15;
font_name = 'Times';
line_width = 1;

file_name = 'center[13]';

load([file_name '.mat'])

t0 = max([t_z_force_rft(1) t_z_pos(1) t_volt(1) t_raw_volt(1)]);
t_end = min([t_z_force_rft(end) t_z_pos(end) t_volt(end) t_raw_volt(end)]);
Dt = 0.03;
t = t0:Dt:t_end;

z = interp1(t_z_pos,z_pos,t); z = -(z-mean(z(1:500)));
f = -interp1(t_z_force_rft,z_force_rft,t); f = f-mean(f(1:500));
v = interp1(t_volt,volt(13,:),t);

t = t-t0;

[b,a] = butter(2,0.01);
f_f = filtfilt(b,a,f); f_f=detrend(f_f); f_f=f_f-mean(f_f(1:500));
v_f = medfilt2(v,[1 300]);

fig_repeat = figure(1);
cut1 = t>0 & t<100;
cut2 = t>180 & t<280;
newf = linspace(0,2,120);
v1 = interp1(f_f(cut1),v_f(cut1),newf);
v2 = interp1(f_f(cut2),v_f(cut2),newf);
v1(1) = 0.0;
v2(1) = 0.0;
plot(newf,v1,'.-',newf,v2,'.-','LineWidth',line_width)
hold on
[m,i] = max(abs(v2-v1));
x = newf(i);
y = min([v1(i) v2(i)])+m/2;
err = m*100/max([v1 v2]);
plot([x x],[v1(i) v2(i)],'r+-','LineWidth',line_width)
tx = text(x-x*0.05,y,['$e_{repeat} = ' num2str(round(err,2)) '\%$'],'Color','r');
tx.HorizontalAlignment = 'right';
tx.FontName = font_name;
tx.FontSize = font_size;
tx.Interpreter = 'latex';
ax = gca;
ax.FontName = font_name;
ax.FontSize = font_size;
ylabel('$\Delta v_{13}\,$[V]', 'Interpreter', 'latex')
xlabel('$f_z\,$[N]', 'Interpreter', 'latex')
set(ax,'TickLabelInterpreter','latex')
grid on

if (save_fig)
    exportgraphics(fig_repeat,'repeat13.png','Resolution',600)
    close all
end