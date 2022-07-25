model = 'HevP4ReferenceApplication';
configs = getActiveConfigSet(model);
mustProp=false;
if isa(configs, 'Simulink.ConfigSetRef')
    configs = eval(configs.SourceName);
    mustProp=true;
end

set_param(configs, 'SystemTargetFile', 'rsim.tlc');
set_param(configs, 'GenerateMakefile', 'off');
set_param(configs, 'GenCodeOnly', 'on');
set_param(configs, 'RTWCAPIParams', 'on');
set_param(configs, 'RTWCAPISignals', 'on');

if mustProp
    Simulink.BlockDiagram.propagateConfigSet(model);
end
slbuild(model);
buildFolder = RTW.getBuildDir(model).BuildDirectory;

cpackNGo(buildFolder, 'packType', 'hierarchical', 'nestedZipFiles', false);