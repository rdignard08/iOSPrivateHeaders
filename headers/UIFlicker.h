
@interface UIFlicker : NSObject {

    UIView* _target;
    {CGPoint="x"d"y"d} _startLocation;
    int _throwIterations;
    id _delegate;
    int _mouseUpCount;
    int _mouseDraggedCount;
    float _delay;
    {CGPoint="x"d"y"d} _offset;
}

 - (void) setDelegate:(id)a;
 - (void) setTarget:(id)a;
 - (void) setDelay:(float)a;
 - (void) setIterations:(int)a;
 - (void) setStartLocation:({CGPoint=dd})a;
 - (id) init;
 - (void) run;
 - ({CGPoint=dd}) offset;
 - (void) setOffset:({CGPoint=dd})a;


@end
