
@interface UIFlicker : NSObject {

    @"UIView" _target;
    {CGPoint="x"d"y"d} _startLocation;
    i _throwIterations;
    id _delegate;
    i _mouseUpCount;
    i _mouseDraggedCount;
    f _delay;
    {CGPoint="x"d"y"d} _offset;
}

 - (void) setDelegate:(id)a;
 - (void) setTarget:(id)a;
 - (void) setDelay:(f)a;
 - (void) setIterations:(i)a;
 - (void) setStartLocation:({CGPoint=dd})a;
 - (id) init;
 - (void) run;
 - ({CGPoint=dd}) offset;
 - (void) setOffset:({CGPoint=dd})a;


@end
