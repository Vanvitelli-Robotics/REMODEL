
if exist('t_pose','var')
    t0_ = max([t_tactile(1),t_wrench(1),t_pose(1)]);
    tend_ = min([t_tactile(end),t_wrench(end),t_pose(end)]);
    Dt_ = max([mean(diff(t_tactile)),mean(diff(t_wrench)),mean(diff(t_pose))]);
else
    t0_ = max([t_tactile(1),t_wrench(1)]);
    tend_ = min([t_tactile(end),t_wrench(end)]);
    Dt_ = max([mean(diff(t_tactile)),mean(diff(t_wrench))]);
end

t = t0_:Dt_:tend_;

tactile = interp1(t_tactile,tactile',t)';
t_tactile = t;
wrench = interp1(t_wrench,wrench',t)';
fz = -wrench(3,:);
t_wrench = t;
if exist('t_pose','var')
    pose = interp1(t_pose,pose',t)';
    t_pose = t;
end

if exist('t0','var')
    t = t-t0;
    t_tactile = t_tactile-t0;
    t_wrench = t_wrench-t0;
    if exist('t_pose','var')
        t_pose = t-t0;
    end
end
