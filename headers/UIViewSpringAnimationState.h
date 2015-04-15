
@interface UIViewSpringAnimationState : UIViewAnimationState {

    d _mass;
    d _stiffness;
    d _damping;
    d _velocity;
}
 + (id) defaultSpringAnimationForKey:(id)amass:(d)bstiffness:(d)cdamping:(d)dvelocity:(d)e;

 - (id) _defaultAnimationForKey:(id)a;
 - (id) animationForLayer:(id)aforKey:(id)bforView:(id)c;
 - (void) setupWithDuration:(d)adelay:(d)bview:(id)coptions:(Q)dfactory:(id)eparentState:(id)fstart:(@?)gcompletion:(@?)h;
 - (void) generateSpringPropertiesForDuration:(d)adamping:(d)bvelocity:(d)c;


@end
