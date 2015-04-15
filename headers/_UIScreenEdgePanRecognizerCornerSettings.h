
@interface _UIScreenEdgePanRecognizerCornerSettings : _UISettings {

    d _cornerSize;
    d _cornerAngleWindow;
}
 + (id) settingsControllerModule;
 + (id) keyPathsForValuesAffectingCornerAngleWindowDegreees;

 - (void) setDefaultValues;
 - (void) setCornerSize:(d)a;
 - (void) setCornerAngleWindow:(d)a;
 - (d) cornerAngleWindow;
 - (d) cornerAngleWindowDegreees;
 - (void) setCornerAngleWindowDegreees:(d)a;
 - (d) cornerSize;


@end
