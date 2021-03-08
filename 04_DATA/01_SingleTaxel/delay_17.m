clear all
close all

load('data_spect_delay_17.mat')

save_fig = false;
font_size = 15;
font_name = 'Times';
line_width = 2;

t = t-t(1);
tcut = t(cut);
x1 = x1-tcut(1);
x2 = x2-tcut(1);
tcut = tcut-tcut(1);

fig_delay = figure(2);
plot(tcut,z(cut)/max(z(cut)),'b-','LineWidth',line_width)
hold on
plot(tcut,v(cut)/max(v(cut)),'-','Color',[0 0.8 0],'LineWidth',line_width)
ax = gca;
ax.FontSize = font_size;
ax.FontName = font_name;
xlabel('Time [s]','Interpreter','latex')
ylabel('Normalized input and output','Interpreter','latex')
ylim([-0.05 1.05])
hold on
plot([x1 x2],[y y],'r+-','LineWidth',line_width)
grid on
leg=legend('Normalized $z$','Normalized $\Delta v_{17}$','Location','southeast');
leg.Interpreter = 'latex';
t_d = x2-x1;
tx=text(x2+0.05*x2,y,['$t_d = ' num2str(round(t_d,4)) ' s$'],'Color','r');
tx.FontName = font_name;
tx.FontSize = font_size;
tx.Interpreter = 'latex';
set(ax,'TickLabelInterpreter','latex')

if (save_fig)
%     exportgraphics(fig_psd,'psd17.png','Resolution',600)
    exportgraphics(fig_delay,'delay17.png','Resolution',600)    
end