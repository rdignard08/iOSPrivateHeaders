
@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings {

    @"_UIBackdropViewSettings" _inputSettingsA;
    @"_UIBackdropViewSettings" _inputSettingsB;
    d _weighting;
    @"_UIBackdropViewSettings" _outputSettingsA;
    @"_UIBackdropViewSettings" _outputSettingsB;
}

 - (void) dealloc;
 - (void) computeOutputSettingsUsingModel:(id)a;
 - (void) setInputSettingsA:(id)a;
 - (void) setInputSettingsB:(id)a;
 - (void) setOutputSettingsA:(id)a;
 - (void) setOutputSettingsB:(id)a;
 - (id) outputSettingsA;
 - (id) inputSettingsA;
 - (id) outputSettingsB;
 - (id) inputSettingsB;
 - (d) weighting;
 - (void) setWeighting:(d)a;


@end
