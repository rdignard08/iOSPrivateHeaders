
@interface CAReplicatorLayer : CALayer {

}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) _hasRenderLayerSubclass;

 - (void) didChangeValueForKey:(id)a;
 - (void) setInstanceCount:(long long)a;
 - (void) setInstanceTransform:({CATransform3D=dddddddddddddddd})a;
 - (void) setInstanceAlphaOffset:(float)a;
 - (void) setInstanceColor:(^{CGColor=})a;
 - (id) init;
 - (BOOL) _renderLayerDefinesProperty:(unsigned int)a;
 - (unsigned int) _renderLayerPropertyAnimationFlags:(unsigned int)a;
 - (^{Layer=^^?{Atomic={?=i}}{Data=ICCCCb3b3b4b4b4b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b25{Vec2<double>=dd}{Rect=dddd}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::TypedArray<CA::Render::Layer> >=^{TypedArray<CA::Render::Layer>}}^{Layer}{Ref<CA::Render::Layer::Ext>=^{Ext}}{Ref<CA::Render::TypedArray<CA::Render::Animation> >=^{TypedArray<CA::Render::Animation>}}{Ref<CA::Render::Handle>=^{Handle}}}) _copyRenderLayer:(^{Transaction=^{Shared}i^{HashTable<CA::Layer *, unsigned int *>}^{SpinLock}I^{Level}^{List<void (^)()>}^{Command}^{Deleted}^{List<const void *>}^{Context}^{HashTable<CA::Layer *, CA::Layer *>}^{__CFRunLoop}^{__CFRunLoopObserver}^{LayoutList}^{List<CA::Layer *>}b1b1b1b1b1b1})alayerFlags:(unsigned int)bcommitFlags:(^I)c;
 - (id) implicitAnimationForKeyPath:(id)a;
 - (BOOL) preservesDepth;
 - (void) setPreservesDepth:(BOOL)a;
 - (void) _renderSublayersInContext:(^{CGContext=})a;
 - (long long) instanceCount;
 - ({CATransform3D=dddddddddddddddd}) instanceTransform;
 - (double) instanceDelay;
 - (^{CGColor=}) instanceColor;
 - (float) instanceRedOffset;
 - (float) instanceGreenOffset;
 - (float) instanceBlueOffset;
 - (float) instanceAlphaOffset;
 - (void) setInstanceDelay:(double)a;
 - (void) setInstanceRedOffset:(float)a;
 - (void) setInstanceGreenOffset:(float)a;
 - (void) setInstanceBlueOffset:(float)a;


@end
