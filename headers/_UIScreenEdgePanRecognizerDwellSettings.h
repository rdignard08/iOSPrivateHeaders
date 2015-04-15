
@interface _UIScreenEdgePanRecognizerDwellSettings : _UISettings {

    double _longPressFlatPermittedHorizontalMovement;
    double _longPressFlatPermittedVerticalMovement;
    double _longPressTipPermittedHorizontalMovement;
    double _longPressTipPermittedVerticalMovement;
    double _longPressPermittedHorizontalMovement;
    double _longPressPermittedVerticalMovement;
    double _longPressRequiredDuration;
}
 + (id) settingsControllerModule;

 - (void) setDefaultValues;
 - (void) setLongPressPermittedHorizontalMovement:(double)a;
 - (void) setLongPressPermittedVerticalMovement:(double)a;
 - (void) setLongPressFlatPermittedHorizontalMovement:(double)a;
 - (void) setLongPressFlatPermittedVerticalMovement:(double)a;
 - (void) setLongPressTipPermittedHorizontalMovement:(double)a;
 - (void) setLongPressTipPermittedVerticalMovement:(double)a;
 - (void) setLongPressRequiredDuration:(double)a;
 - (double) longPressFlatPermittedHorizontalMovement;
 - (double) longPressFlatPermittedVerticalMovement;
 - (double) longPressTipPermittedHorizontalMovement;
 - (double) longPressTipPermittedVerticalMovement;
 - (double) longPressPermittedHorizontalMovement;
 - (double) longPressPermittedVerticalMovement;
 - (double) longPressRequiredDuration;


@end
