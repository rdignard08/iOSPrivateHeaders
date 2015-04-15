
@interface _UIScreenEdgePanRecognizerSettings : _UISettings {

    BOOL _analysisLoggingEnabled;
    BOOL _analysisFailureOverlayVisible;
    BOOL _analysisLoggingOverlayVisible;
    NSString* _multitaskingGestureMode;
    NSString* _navigationGestureMode;
    _UIScreenEdgePanRecognizerEdgeSettings* _edgeSettings;
    _UIScreenEdgePanRecognizerDwellSettings* _dwellSettings;
    _UIScreenEdgePanRecognizerCornerSettings* _cornerSettings;
}
 + (id) settingsControllerModule;

 - (void) setDefaultValues;
 - (void) setAnalysisLoggingEnabled:(BOOL)a ;
 - (void) setAnalysisFailureOverlayVisible:(BOOL)a ;
 - (void) setAnalysisLoggingOverlayVisible:(BOOL)a ;
 - (void) setMultitaskingGestureModePost351:(id)a ;
 - (id) multitaskingGestureModePost351;
 - (void) setNavigationGestureModePost351:(id)a ;
 - (id) navigationGestureModePost351;
 - (id) multitaskingGestureMode;
 - (void) setMultitaskingGestureMode:(id)a ;
 - (id) navigationGestureMode;
 - (void) setNavigationGestureMode:(id)a ;
 - (id) edgeSettings;
 - (void) setEdgeSettings:(id)a ;
 - (id) dwellSettings;
 - (void) setDwellSettings:(id)a ;
 - (id) cornerSettings;
 - (void) setCornerSettings:(id)a ;
 - (BOOL) analysisLoggingEnabled;
 - (BOOL) analysisFailureOverlayVisible;
 - (BOOL) analysisLoggingOverlayVisible;


@end
