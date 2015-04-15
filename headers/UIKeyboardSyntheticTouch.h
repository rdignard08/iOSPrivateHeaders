
@interface UIKeyboardSyntheticTouch : NSObject {

    d timestamp;
    q phase;
    Q tapCount;
    @"UIWindow" window;
    {CGPoint="x"d"y"d} locationInWindow;
    C _pathIndex;
    C _pathIdentity;
    f _pathMajorRadius;
}
@property (nonatomic, assign, readwrite) NSNumber* timestamp;
@property (nonatomic, assign, readwrite) NSNumber* phase;
@property (nonatomic, assign, readwrite) NSNumber* tapCount;
@property (nonatomic, retain, readwrite) UIWindow* window;
@property (nonatomic, assign, readwrite) NSNumber* locationInWindow;
@property (nonatomic, assign, readonly) NSNumber* _pathIndex;
@property (nonatomic, assign, readonly) NSNumber* _pathIdentity;
@property (nonatomic, assign, readwrite) NSNumber* _pathMajorRadius;
 + (id) syntheticTouchWithPoint:({CGPoint=dd})atimestamp:(d)bwindow:(id)c;

 - ({CGPoint=dd}) locationInView:(id)a;
 - (void) setWindow:(id)a;
 - (q) phase;
 - (void) setTapCount:(Q)a;
 - (void) setPhase:(q)a;
 - (C) _pathIndex;
 - (void) _setLocationInWindow:({CGPoint=dd})aresetPrevious:(BOOL)b;
 - ({CGPoint=dd}) previousLocationInView:(id)a;
 - (Q) tapCount;
 - (f) _pathMajorRadius;
 - (C) _pathIdentity;
 - (id) initWithPoint:({CGPoint=dd})atimestamp:(d)bwindow:(id)c;
 - (void) setLocationInWindow:({CGPoint=dd})a;
 - ({CGPoint=dd}) getLocationInWindow;
 - (void) set_pathMajorRadius:(f)a;
 - (id) window;
 - (d) timestamp;
 - (void) setTimestamp:(d)a;
 - ({CGPoint=dd}) locationInWindow;


@end
