
@interface _UIMotionEffectEngineClient : NSObject {

    UIMotionEffect* _effect;
    UIView* _view;
}

 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithMotionEffect:(id)aview:(id)b;


@end
