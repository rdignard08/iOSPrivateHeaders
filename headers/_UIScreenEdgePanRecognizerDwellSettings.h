
@interface _UIScreenEdgePanRecognizerDwellSettings : _UISettings {

    d _longPressFlatPermittedHorizontalMovement;
    d _longPressFlatPermittedVerticalMovement;
    d _longPressTipPermittedHorizontalMovement;
    d _longPressTipPermittedVerticalMovement;
    d _longPressPermittedHorizontalMovement;
    d _longPressPermittedVerticalMovement;
    d _longPressRequiredDuration;
}
 + (id) settingsControllerModule;

 - (void) setDefaultValues;
 - (void) setLongPressPermittedHorizontalMovement:(d)a;
 - (void) setLongPressPermittedVerticalMovement:(d)a;
 - (void) setLongPressFlatPermittedHorizontalMovement:(d)a;
 - (void) setLongPressFlatPermittedVerticalMovement:(d)a;
 - (void) setLongPressTipPermittedHorizontalMovement:(d)a;
 - (void) setLongPressTipPermittedVerticalMovement:(d)a;
 - (void) setLongPressRequiredDuration:(d)a;
 - (d) longPressFlatPermittedHorizontalMovement;
 - (d) longPressFlatPermittedVerticalMovement;
 - (d) longPressTipPermittedHorizontalMovement;
 - (d) longPressTipPermittedVerticalMovement;
 - (d) longPressPermittedHorizontalMovement;
 - (d) longPressPermittedVerticalMovement;
 - (d) longPressRequiredDuration;


@end
