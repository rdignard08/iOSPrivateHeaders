
@interface _UIDynamicAnimationState : NSObject {

    @"UIScreen" _screen;
    @"CADisplayLink" _displayLink;
    @"NSTimer" _timer;
    @"NSMutableArray" _activeAnimations;
    d _lastUpdateTime;
    BOOL _shouldSchedYield;
}



@end
