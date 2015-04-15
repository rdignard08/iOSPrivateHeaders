
@interface CAEmitterLayer : CALayer {

}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) _hasRenderLayerSubclass;

 - (float) scale;
 - (void) didChangeValueForKey:(id)a ;
 - (void) setSeed:(unsigned int)a ;
 - (BOOL) _renderLayerDefinesProperty:(unsigned int)a ;
 - (unsigned int) _renderLayerPropertyAnimationFlags:(unsigned int)a ;
 - (^{Layer=^^?{Atomic={?=i}}{Data=ICCCCb3b3b4b4b4b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b25{Vec2<double>=dd}{Rect=dddd}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::TypedArray<CA::Render::Layer> >=^{TypedArray<CA::Render::Layer>}}^{Layer}{Ref<CA::Render::Layer::Ext>=^{Ext}}{Ref<CA::Render::TypedArray<CA::Render::Animation> >=^{TypedArray<CA::Render::Animation>}}{Ref<CA::Render::Handle>=^{Handle}}}) _copyRenderLayer:(^{Transaction=^{Shared}i^{HashTable<CA::Layer *, unsigned int *>}^{SpinLock}I^{Level}^{List<void (^)()>}^{Command}^{Deleted}^{List<const void *>}^{Context}^{HashTable<CA::Layer *, CA::Layer *>}^{__CFRunLoop}^{__CFRunLoopObserver}^{LayoutList}^{List<CA::Layer *>}b1b1b1b1b1b1})a layerFlags:(unsigned int)b commitFlags:(^I)c ;
 - (id) renderMode;
 - (void) setRenderMode:(id)a ;
 - (float) birthRate;
 - (float) lifetime;
 - (float) spin;
 - (id) emitterCells;
 - (id) emitterBehaviors;
 - (void) setBirthRate:(float)a ;
 - (void) setLifetime:(float)a ;
 - (void) setScale:(float)a ;
 - (void) setSpin:(float)a ;
 - (void) setEmitterCells:(id)a ;
 - (void) setEmitterBehaviors:(id)a ;
 - (void) reloadValueForKeyPath:(id)a ;
 - (id) implicitAnimationForKeyPath:(id)a ;
 - (float) emitterDuration;
 - ({CGPoint=dd}) emitterPosition;
 - (double) emitterZPosition;
 - ({CGSize=dd}) emitterSize;
 - (double) emitterDepth;
 - (float) spinBias;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) cullRect;
 - (double) cullMinZ;
 - (double) cullMaxZ;
 - (^{CGPath=}) emitterPath;
 - (id) emitterShape;
 - (id) emitterMode;
 - (BOOL) preservesDepth;
 - (unsigned int) seed;
 - (void) setEmitterShape:(id)a ;
 - (void) setEmitterMode:(id)a ;
 - (void) setEmitterPosition:({CGPoint=dd})a ;
 - (void) setEmitterZPosition:(double)a ;
 - (void) setEmitterSize:({CGSize=dd})a ;
 - (void) setEmitterDepth:(double)a ;
 - (void) setPreservesDepth:(BOOL)a ;
 - (void) setEmitterPath:(^{CGPath=})a ;
 - (void) setEmitterDuration:(float)a ;
 - (void) setSpinBias:(float)a ;
 - (void) setCullRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setCullMinZ:(double)a ;
 - (void) setCullMaxZ:(double)a ;
 - (float) velocity;
 - (void) setVelocity:(float)a ;


@end
