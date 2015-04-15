
@interface CAShapeLayer : CALayer {

}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) _hasRenderLayerSubclass;

 - (void) didChangeValueForKey:(id)a;
 - (void) setLineWidth:(d)a;
 - (void) setMiterLimit:(d)a;
 - (void) setStrokeColor:(^{CGColor=})a;
 - (void) setFillRule:(id)a;
 - (void) setLineCap:(id)a;
 - (void) setLineJoin:(id)a;
 - (void) setLineDashPattern:(id)a;
 - (void) setPath:(^{CGPath=})a;
 - (^{CGPath=}) path;
 - (BOOL) _renderLayerDefinesProperty:(I)a;
 - (I) _renderLayerPropertyAnimationFlags:(I)a;
 - (^{Layer=^^?{Atomic={?=i}}{Data=ICCCCb3b3b4b4b4b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b25{Vec2<double>=dd}{Rect=dddd}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::TypedArray<CA::Render::Layer> >=^{TypedArray<CA::Render::Layer>}}^{Layer}{Ref<CA::Render::Layer::Ext>=^{Ext}}{Ref<CA::Render::TypedArray<CA::Render::Animation> >=^{TypedArray<CA::Render::Animation>}}{Ref<CA::Render::Handle>=^{Handle}}}) _copyRenderLayer:(^{Transaction=^{Shared}i^{HashTable<CA::Layer *, unsigned int *>}^{SpinLock}I^{Level}^{List<void (^)()>}^{Command}^{Deleted}^{List<const void *>}^{Context}^{HashTable<CA::Layer *, CA::Layer *>}^{__CFRunLoop}^{__CFRunLoopObserver}^{LayoutList}^{List<CA::Layer *>}b1b1b1b1b1b1})alayerFlags:(I)bcommitFlags:(^I)c;
 - (d) lineWidth;
 - (id) implicitAnimationForKeyPath:(id)a;
 - (void) _renderForegroundInContext:(^{CGContext=})a;
 - (^{CGColor=}) fillColor;
 - (id) fillRule;
 - (^{CGColor=}) strokeColor;
 - (id) lineCap;
 - (id) lineJoin;
 - (d) miterLimit;
 - (id) lineDashPattern;
 - (d) lineDashPhase;
 - (d) strokeStart;
 - (d) strokeEnd;
 - (void) setStrokeStart:(d)a;
 - (void) setStrokeEnd:(d)a;
 - (void) setLineDashPhase:(d)a;
 - (void) setFillColor:(^{CGColor=})a;


@end
