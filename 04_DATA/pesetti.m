clearvars
close all

load_constants

load 2020-10-01-15-33-04_pesetti.mat

t0 = t_tactile(1);
exp_to_same_t

Dtactile = tactile-tactile(:,find(t_tactile>0,1));
meanDtactile = mean(Dtactile,1);

measures_intervals = ...
[
%2.5 4
7 9
14 15
17 18
20 21.5
23 24
25.5 26.5
28 29
30.5 31.5
32.5 33.5
35 36
41 42
44 45
46.5 47
48.5 49
50.5 51
52 52.5
54.5 55
56 56.5
58 58.5
60 60.5
61.5 62.5 %
63.5 64.5
65.5 66.5
67.5 68.5
69.5 70.5
71.5 72
73.5 74
75 76
77 77.5
79 79.5
81 81.5
];

fz_ = zeros(1,size(measures_intervals,1));
v_ = fz_;
for i=1:size(measures_intervals,1)
    cut = t>measures_intervals(i,1) & t<measures_intervals(i,2);
    fz_(i) = mean(fz(cut));
    v_(i) = mean(meanDtactile(cut));
end

P = polyfitZero(fz_,v_,1);

%% sens
figure(1)
hold on
plot([0 max(fz_)],polyval(P,[0 max(fz_)]),'LineWidth',line_w, 'DisplayName',['Sensitivity ' num2str(P(1),'%10.3f') '\,[V/N]'])
plot(fz_,v_,'.','LineWidth',line_w, 'MarkerSize', marker_size, 'DisplayName','Samples')
xlabel(fz_str)
ylabel(mean_V_str)
set_ax_props
l = legend('show');
l.Location = 'northwest';
l.Interpreter = 'latex';
l.FontSize = font_size;
l.FontName = 'Times';

saveAsPDF('pesetti_sensitivity',true);

%% snr
figure(2)
pspectrum([tactile([5 13 17],cut)' 25*meanDtactile(cut)' meanDtactile(cut)'],t(cut), 'Leakage', 0.9, 'FrequencyResolution', 2.6)
ax = gca;
ax.Children(1).LineWidth = line_w;
ax.Children(2).LineWidth = line_w;
ax.Children(3).LineWidth = line_w;
ax.Children(4).LineWidth = line_w;
ax.Children(5).LineWidth = line_w;
title('')
ylabel('Power Spectrum [dB]')
xlabel('Frequency [Hz]')
set_ax_props
l = legend(DV_i_str_builder_noV(5), DV_i_str_builder_noV(13), DV_i_str_builder_noV(17), sum_V_str_noV, mean_V_str_noV);
l.Location = 'northeast';
l.Interpreter = 'latex';
l.FontSize = font_size;
l.FontName = 'Times';

saveAsPDF('pesetti_snr',true);