clearvars
close all

load OK_v0.2_0.4_0.8_2.0-2020-10-06-10-01-05.mat

t0 = t_tactile(1)+100;
exp_to_same_t

line_w = 3;

t_lim = [0 600];

Dtactile = tactile-tactile(:,find(t_tactile>0,1));

meanDtactile = mean(Dtactile,1);

figure(1)
plot(t_wrench,-wrench(3,:),'LineWidth',line_w)
xlim(t_lim)
xlabel('time [s]','Interpreter','latex')
ylabel('$f_z\,$[N]','Interpreter','latex')
grid on

figure(2)
plot(t_tactile,Dtactile,'LineWidth',line_w)
xlim(t_lim)
xlabel('time [s]','Interpreter','latex')
ylabel('$\Delta v_i\,$[V]','Interpreter','latex')
grid on

figure(3)
plot(t_tactile,meanDtactile,'LineWidth',line_w)
xlim(t_lim)
xlabel('time [s]','Interpreter','latex')
ylabel('$\frac{1}{25}\sum_{i=1}^{25}  \Delta v_i\,$[V]','Interpreter','latex')
grid on

figure(4)
intervals = [t_lim(1) 220 380 510 t_lim(end)];
hold on
for i=1:numel(intervals)-1
    cut = t>intervals(i) & t<intervals(i+1);
    plot(-wrench(3,cut),meanDtactile(cut),'LineWidth',line_w)
end
hold off
xlim([0 15])
xlabel('$f_z\,$[N]','Interpreter','latex')
ylabel('$\frac{1}{25}\sum_{i=1}^{25}  \Delta v_i\,$[V]','Interpreter','latex')
grid on