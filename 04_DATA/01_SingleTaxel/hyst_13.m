clear all
close all

save_fig = false; % true if you want to save figures
font_size = 15;
font_name = 'Times';
line_width = 2;

load('data_hyst_13.mat')

cut = t>x1 & t<x2;
f_f = f_f-f_f(find(cut,1,'first'));

fig_fv = figure(1);
fcut = f_f(cut);
vcut = v_f(cut);
plot(fcut(1:end/2),vcut(1:end/2),'b-','LineWidth',line_width)
hold on
plot(fcut(end/2:end),vcut(end/2:end),'-','LineWidth',line_width,'Color',[0 0.8 0])
plot(fcut(1:end/2),vcut(1:end/2),'b.','MarkerSize',4)
plot(fcut(end/2:end),vcut(end/2:end),'.','MarkerSize',4,'Color',[0 0.8 0])
set(gca,'FontName',font_name)
ylabel('$\Delta v_{13}\,$[V]', 'Interpreter', 'latex')  
xlabel('$f_z\,$[N]', 'Interpreter', 'latex')
axis([0 inf 0 inf])
ax = gca;
ax.FontSize = font_size;
grid on
x = 1.073801420755683;
y_1 = 0.188465628604857;
y_2 = 0.206287538979695;
err_hyst = (y_2-y_1)*100/max(v_f(cut));
hold on
plot([x x],[y_1 y_2],'r+-','LineWidth',line_width)
tx=text(x+x*0.1,y_1+(y_2-y_1)/2,['$e_{hyst} = ' num2str(err_hyst,'%1.2f') '\%$'],'Color','r');
tx.FontName = font_name;
tx.FontSize = font_size;
tx.Interpreter = 'latex';
legend('Increasing Force','Decreasing Force','Location','southeast')
set(ax,'TickLabelInterpreter','latex')

if (save_fig)
    exportgraphics(fig_fv,'hyst_f_vs_v13.png','Resolution',600)  
    close all
end