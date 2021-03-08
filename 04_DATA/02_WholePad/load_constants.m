line_w = 2;
marker_size = 15;

time_str = 'Time [s]';
fz_str = '$f_z\,$[N]';
DV_i_str = '$\Delta v_i\,$[V]';
sum_V_str = '$\sum_{i=1}^{25}  \Delta v_i\,$[V]';
mean_V_str = '$\frac{1}{25}\sum_{i=1}^{25}  \Delta v_i\,$[V]';
sum_V_str_noV = '$\sum_{i=1}^{25}  \Delta v_i$';
mean_V_str_noV = '$\frac{1}{25}\sum_{i=1}^{25}  \Delta v_i$';
font_size = 15;

DV_i_str_builder = @(i)['$\Delta v_{' num2str(i) '}\,$[V]'];
DV_i_str_builder_noV = @(i)['$\Delta v_{' num2str(i) '}$'];