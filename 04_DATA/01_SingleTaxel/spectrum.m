clear all
close all

save_fig = false;
font_size = 15;
font_name = 'Times';
line_width = 1;

load('center[13]_step_01sec.mat')
v13 = volt(13,:); v13(:,1:1000) = []; v13(:,16000:end) = [];
load('down_left[17]_step_01sec.mat')
v17 = volt(17,:); v17(:,1:1000) = []; v17(:,16000:end) = [];
load('up_right[5]_step_01sec.mat')
v5 = volt(5,:); v5(:,1:1000) = []; v5(:,16000:end) = [];
t = t_volt; t(:,1:1000) = []; t(:,16000:end) = [];

fig_spect = figure(1);
pspectrum(v5,500,'Leakage',0.9,'FrequencyResolution',3)
hold on
pspectrum(v13,500,'Leakage',0.9,'FrequencyResolution',3)
pspectrum(v17,500,'Leakage',0.9,'FrequencyResolution',3)

ax = gca;
lines = ax.get('Children');
set(lines,'LineWidth',line_width)
ax.FontSize = font_size;
ax.FontName = font_name;
axis([0 250 -90 0]);
title('')
xlabel('Frequency [Hz]','Interpreter','latex')
ylabel('Power Spectrum [dB]','Interpreter','latex')
yticklabels(ax, strrep(yticklabels(ax),'-','$-$'))
set(ax,'TickLabelInterpreter','latex')
leg = legend('$\Delta v_5$','$\Delta v_{13}$','$\Delta v_{17}$');
leg.Interpreter = 'latex';

if (save_fig)
    exportgraphics(fig_spect,'power_spectrum_single.png','Resolution',600)
    close all
end
