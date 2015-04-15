
@interface PKPhysicsFieldNoise : PKPhysicsField {

}
 + (id) field;

 - (id) init;
 - (id) initWithField:({shared_ptr<PKCField>=^{PKCField}^{__shared_weak_count}})a;
 - (float) smoothness;
 - (void) setSmoothness:(float)a;
 - (float) animationSpeed;
 - (void) setAnimationSpeed:(float)a;


@end
