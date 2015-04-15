
@interface PKPhysicsFieldNoise : PKPhysicsField {

}
 + (id) field;

 - (id) init;
 - (id) initWithField:({shared_ptr<PKCField>=^{PKCField}^{__shared_weak_count}})a;
 - (f) smoothness;
 - (void) setSmoothness:(f)a;
 - (f) animationSpeed;
 - (void) setAnimationSpeed:(f)a;


@end
