
@interface UIViewSpringAnimationState : UIViewAnimationState {

    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
}
 + (id) defaultSpringAnimationForKey:(id)amass:(double)bstiffness:(double)cdamping:(double)dvelocity:(double)e;

 - (id) _defaultAnimationForKey:(id)a;
 - (id) animationForLayer:(id)aforKey:(id)bforView:(id)c;
 - (void) setupWithDuration:(double)adelay:(double)bview:(id)coptions:(unsigned long long)dfactory:(id)eparentState:(id)fstart:(@?)gcompletion:(@?)h;
 - (void) generateSpringPropertiesForDuration:(double)adamping:(double)bvelocity:(double)c;


@end
