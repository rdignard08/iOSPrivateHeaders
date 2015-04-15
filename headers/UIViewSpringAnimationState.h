
@interface UIViewSpringAnimationState : UIViewAnimationState {

    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
}
 + (id) defaultSpringAnimationForKey:(id)amass:(double)bstiffness:(double)cdamping:(double)dvelocity:(double)e;

 - (id) _defaultAnimationForKey:(id)a ;
 - (id) animationForLayer:(id)a forKey:(id)b forView:(id)c ;
 - (void) setupWithDuration:(double)a delay:(double)b view:(id)c options:(unsigned long long)d factory:(id)e parentState:(id)f start:(@?)g completion:(@?)h ;
 - (void) generateSpringPropertiesForDuration:(double)a damping:(double)b velocity:(double)c ;


@end
