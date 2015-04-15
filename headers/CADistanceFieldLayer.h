
@interface CADistanceFieldLayer : CALayer {

}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) _hasRenderLayerSubclass;

 - (void) didChangeValueForKey:(id)a;
 - (void) setLineWidth:(d)a;
 - (void) setForegroundColor:(^{CGColor=})a;
 - (BOOL) _renderLayerDefinesProperty:(I)a;
 - (I) _renderLayerPropertyAnimationFlags:(I)a;
 - (^{Layer=^^?{Atomic={?=i}}{Data=ICCCCb3b3b4b4b4b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b25{Vec2<double>=dd}{Rect=dddd}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::TypedArray<CA::Render::Layer> >=^{TypedArray<CA::Render::Layer>}}^{Layer}{Ref<CA::Render::Layer::Ext>=^{Ext}}{Ref<CA::Render::TypedArray<CA::Render::Animation> >=^{TypedArray<CA::Render::Animation>}}{Ref<CA::Render::Handle>=^{Handle}}}) _copyRenderLayer:(^{Transaction=^{Shared}i^{HashTable<CA::Layer *, unsigned int *>}^{SpinLock}I^{Level}^{List<void (^)()>}^{Command}^{Deleted}^{List<const void *>}^{Context}^{HashTable<CA::Layer *, CA::Layer *>}^{__CFRunLoop}^{__CFRunLoopObserver}^{LayoutList}^{List<CA::Layer *>}b1b1b1b1b1b1})alayerFlags:(I)bcommitFlags:(^I)c;
 - (id) renderMode;
 - (^{CGColor=}) foregroundColor;
 - (d) lineWidth;
 - (d) sharpness;
 - (BOOL) invertsShape;
 - (I) _renderImageCopyFlags;
 - (void) setRenderMode:(id)a;
 - (void) setInvertsShape:(BOOL)a;
 - (void) setSharpness:(d)a;
 - (d) offset;
 - (void) setOffset:(d)a;


@end
