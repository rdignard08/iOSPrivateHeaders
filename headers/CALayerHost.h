
@interface CALayerHost : CALayer {

}
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) _hasRenderLayerSubclass;

 - (void) didChangeValueForKey:(id)a ;
 - (void) setInheritsSecurity:(BOOL)a ;
 - (BOOL) _renderLayerDefinesProperty:(unsigned int)a ;
 - (unsigned int) contextId;
 - (^{Layer=^^?{Atomic={?=i}}{Data=ICCCCb3b3b4b4b4b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b25{Vec2<double>=dd}{Rect=dddd}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::TypedArray<CA::Render::Layer> >=^{TypedArray<CA::Render::Layer>}}^{Layer}{Ref<CA::Render::Layer::Ext>=^{Ext}}{Ref<CA::Render::TypedArray<CA::Render::Animation> >=^{TypedArray<CA::Render::Animation>}}{Ref<CA::Render::Handle>=^{Handle}}}) _copyRenderLayer:(^{Transaction=^{Shared}i^{HashTable<CA::Layer *, unsigned int *>}^{SpinLock}I^{Level}^{List<void (^)()>}^{Command}^{Deleted}^{List<const void *>}^{Context}^{HashTable<CA::Layer *, CA::Layer *>}^{__CFRunLoop}^{__CFRunLoopObserver}^{LayoutList}^{List<CA::Layer *>}b1b1b1b1b1b1})a layerFlags:(unsigned int)b commitFlags:(^I)c ;
 - (void) layerDidBecomeVisible:(BOOL)a ;
 - (BOOL) inheritsSecurity;
 - (void) setContextId:(unsigned int)a ;


@end
