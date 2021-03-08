grid on
box on
ax__ = gca;
ax__.XLabel.Interpreter = 'latex';
ax__.YLabel.Interpreter = 'latex';
ax__.FontSize = font_size;
ax__.FontName = 'Times';

% yticklabels(ax__, strrep(yticklabels(ax__),'-','−'));
yticklabels(ax__, strrep(yticklabels(ax__),'-','$-$'));
set(ax__,'TickLabelInterpreter','latex');


clear ax__