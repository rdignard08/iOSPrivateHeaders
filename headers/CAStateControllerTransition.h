
@interface CAStateControllerTransition : NSObject {

    @"CAStateController" _controller;
    @"CALayer" _layer;
    @"CAStateTransition" _transition;
    double _beginTime;
    double _duration;
    float _speed;
    @"NSString" _masterKey;
    @"NSMutableArray" _animations;
}
@property (nonatomic, assign, readonly) CALayer* layer;
@property (nonatomic, assign, readonly) CAStateTransition* transition;
@property (nonatomic, assign, readonly) NSNumber* beginTime;
@property (nonatomic, assign, readonly) NSNumber* duration;
@property (nonatomic, assign, readonly) NSNumber* speed;

 - (double) duration;
 - (void) dealloc;
 - (void) invalidate;
 - (id) transition;
 - (id) init;
 - (void) addAnimation:(id)a;
 - (double) beginTime;
 - (id) layer;
 - (void) removeAnimationFromLayer:(id)aforKey:(id)b;
 - (void) animationDidStop:(id)afinished:(BOOL)b;
 - (float) speed;


@end
