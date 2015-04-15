
@interface CAEmitterLayer : CALayer {

}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) _hasRenderLayerSubclass;

 - (f) scale;
 - (void) didChangeValueForKey:(id)a;
 - (void) setSeed:(I)a;
 - (BOOL) _renderLayerDefinesProperty:(I)a;
 - (I) _renderLayerPropertyAnimationFlags:(I)a;
 - (^{Layer=^^?{Atomic={?=i}}{Data=ICCCCb3b3b4b4b4b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b25{Vec2<double>=dd}{Rect=dddd}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::TypedArray<CA::Render::Layer> >=^{TypedArray<CA::Render::Layer>}}^{Layer}{Ref<CA::Render::Layer::Ext>=^{Ext}}{Ref<CA::Render::TypedArray<CA::Render::Animation> >=^{TypedArray<CA::Render::Animation>}}{Ref<CA::Render::Handle>=^{Handle}}}) _copyRenderLayer:(^{Transaction=^{Shared}i^{HashTable<CA::Layer *, unsigned int *>}^{SpinLock}I^{Level}^{List<void (^)()>}^{Command}^{Deleted}^{List<const void *>}^{Context}^{HashTable<CA::Layer *, CA::Layer *>}^{__CFRunLoop}^{__CFRunLoopObserver}^{LayoutList}^{List<CA::Layer *>}b1b1b1b1b1b1})alayerFlags:(I)bcommitFlags:(^I)c;
 - (id) renderMode;
 - (void) setRenderMode:(id)a;
 - (f) birthRate;
 - (f) lifetime;
 - (f) spin;
 - (id) emitterCells;
 - (id) emitterBehaviors;
 - (void) setBirthRate:(f)a;
 - (void) setLifetime:(f)a;
 - (void) setScale:(f)a;
 - (void) setSpin:(f)a;
 - (void) setEmitterCells:(id)a;
 - (void) setEmitterBehaviors:(id)a;
 - (void) reloadValueForKeyPath:(id)a;
 - (id) implicitAnimationForKeyPath:(id)a;
 - (f) emitterDuration;
 - ({CGPoint=dd}) emitterPosition;
 - (d) emitterZPosition;
 - ({CGSize=dd}) emitterSize;
 - (d) emitterDepth;
 - (f) spinBias;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) cullRect;
 - (d) cullMinZ;
 - (d) cullMaxZ;
 - (^{CGPath=}) emitterPath;
 - (id) emitterShape;
 - (id) emitterMode;
 - (BOOL) preservesDepth;
 - (I) seed;
 - (void) setEmitterShape:(id)a;
 - (void) setEmitterMode:(id)a;
 - (void) setEmitterPosition:({CGPoint=dd})a;
 - (void) setEmitterZPosition:(d)a;
 - (void) setEmitterSize:({CGSize=dd})a;
 - (void) setEmitterDepth:(d)a;
 - (void) setPreservesDepth:(BOOL)a;
 - (void) setEmitterPath:(^{CGPath=})a;
 - (void) setEmitterDuration:(f)a;
 - (void) setSpinBias:(f)a;
 - (void) setCullRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setCullMinZ:(d)a;
 - (void) setCullMaxZ:(d)a;
 - (f) velocity;
 - (void) setVelocity:(f)a;


@end
