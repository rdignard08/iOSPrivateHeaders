
@interface UIKeyboardSyntheticTouch : NSObject {

    double timestamp;
    long long phase;
    unsigned long long tapCount;
    @"UIWindow" window;
    {CGPoint="x"d"y"d} locationInWindow;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
}
@property (nonatomic, assign, readwrite) NSNumber* timestamp;
@property (nonatomic, assign, readwrite) NSNumber* phase;
@property (nonatomic, assign, readwrite) NSNumber* tapCount;
@property (nonatomic, retain, readwrite) UIWindow* window;
@property (nonatomic, assign, readwrite) NSNumber* locationInWindow;
@property (nonatomic, assign, readonly) NSNumber* _pathIndex;
@property (nonatomic, assign, readonly) NSNumber* _pathIdentity;
@property (nonatomic, assign, readwrite) NSNumber* _pathMajorRadius;
 + (id) syntheticTouchWithPoint:({CGPoint=dd})atimestamp:(double)bwindow:(id)c;

 - ({CGPoint=dd}) locationInView:(id)a;
 - (void) setWindow:(id)a;
 - (long long) phase;
 - (void) setTapCount:(unsigned long long)a;
 - (void) setPhase:(long long)a;
 - (unsigned char) _pathIndex;
 - (void) _setLocationInWindow:({CGPoint=dd})aresetPrevious:(BOOL)b;
 - ({CGPoint=dd}) previousLocationInView:(id)a;
 - (unsigned long long) tapCount;
 - (float) _pathMajorRadius;
 - (unsigned char) _pathIdentity;
 - (id) initWithPoint:({CGPoint=dd})atimestamp:(double)bwindow:(id)c;
 - (void) setLocationInWindow:({CGPoint=dd})a;
 - ({CGPoint=dd}) getLocationInWindow;
 - (void) set_pathMajorRadius:(float)a;
 - (id) window;
 - (double) timestamp;
 - (void) setTimestamp:(double)a;
 - ({CGPoint=dd}) locationInWindow;


@end
