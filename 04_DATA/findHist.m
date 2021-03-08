function [metric, fz_hist, hist_points] = findHist(t,fz,v, t_interval, t_mid)

if nargin < 5
    t_mid = mean(t_interval);
end

fz_rise = fz(t>t_interval(1) & t<t_mid);
v_rise = v(t>t_interval(1) & t<t_mid);

fz_fall = fz(t<t_interval(2) & t>t_mid);
v_fall = v(t<t_interval(2) & t>t_mid);

fz_ax = max([min(fz_rise),min(fz_fall)]) : max(mean(diff(fz_rise)),mean(diff(fz_fall))) : min([max(fz_rise),max(fz_fall)]);

v_rise = interp1(fz_rise,v_rise,fz_ax);
v_fall = interp1(fz_fall,v_fall,fz_ax);

[metric, index] = max(abs(v_rise-v_fall));
fz_hist = fz_ax(index);
hist_points = [v_rise(index), v_fall(index)];

end

