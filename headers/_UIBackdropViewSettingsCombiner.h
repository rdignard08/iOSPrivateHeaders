
@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings {

    _UIBackdropViewSettings* _inputSettingsA;
    _UIBackdropViewSettings* _inputSettingsB;
    double _weighting;
    _UIBackdropViewSettings* _outputSettingsA;
    _UIBackdropViewSettings* _outputSettingsB;
}

 - (void) dealloc;
 - (void) computeOutputSettingsUsingModel:(id)a ;
 - (void) setInputSettingsA:(id)a ;
 - (void) setInputSettingsB:(id)a ;
 - (void) setOutputSettingsA:(id)a ;
 - (void) setOutputSettingsB:(id)a ;
 - (id) outputSettingsA;
 - (id) inputSettingsA;
 - (id) outputSettingsB;
 - (id) inputSettingsB;
 - (double) weighting;
 - (void) setWeighting:(double)a ;


@end
