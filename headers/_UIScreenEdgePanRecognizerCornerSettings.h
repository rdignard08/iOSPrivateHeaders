
@interface _UIScreenEdgePanRecognizerCornerSettings : _UISettings {

    double _cornerSize;
    double _cornerAngleWindow;
}
 + (id) settingsControllerModule;
 + (id) keyPathsForValuesAffectingCornerAngleWindowDegreees;

 - (void) setDefaultValues;
 - (void) setCornerSize:(double)a;
 - (void) setCornerAngleWindow:(double)a;
 - (double) cornerAngleWindow;
 - (double) cornerAngleWindowDegreees;
 - (void) setCornerAngleWindowDegreees:(double)a;
 - (double) cornerSize;


@end
