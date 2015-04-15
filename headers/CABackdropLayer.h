
@interface CABackdropLayer : CALayer {

}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) _hasRenderLayerSubclass;

 - (double) scale;
 - (void) didChangeValueForKey:(id)a;
 - (void) setDisablesOccludedBackdropBlurs:(BOOL)a;
 - (void) setStatisticsType:(id)a;
 - (void) setStatisticsInterval:(double)a;
 - (id) statisticsValues;
 - (BOOL) _renderLayerDefinesProperty:(unsigned int)a;
 - (unsigned int) _renderLayerPropertyAnimationFlags:(unsigned int)a;
 - (^{Layer=^^?{Atomic={?=i}}{Data=ICCCCb3b3b4b4b4b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b25{Vec2<double>=dd}{Rect=dddd}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::TypedArray<CA::Render::Layer> >=^{TypedArray<CA::Render::Layer>}}^{Layer}{Ref<CA::Render::Layer::Ext>=^{Ext}}{Ref<CA::Render::TypedArray<CA::Render::Animation> >=^{TypedArray<CA::Render::Animation>}}{Ref<CA::Render::Handle>=^{Handle}}}) _copyRenderLayer:(^{Transaction=^{Shared}i^{HashTable<CA::Layer *, unsigned int *>}^{SpinLock}I^{Level}^{List<void (^)()>}^{Command}^{Deleted}^{List<const void *>}^{Context}^{HashTable<CA::Layer *, CA::Layer *>}^{__CFRunLoop}^{__CFRunLoopObserver}^{LayoutList}^{List<CA::Layer *>}b1b1b1b1b1b1})alayerFlags:(unsigned int)bcommitFlags:(^I)c;
 - (void) setScale:(double)a;
 - (void) layerDidBecomeVisible:(BOOL)a;
 - (id) statisticsType;
 - (id) groupName;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) backdropRect;
 - (double) marginWidth;
 - (BOOL) disablesOccludedBackdropBlurs;
 - (double) statisticsInterval;
 - (void) setBackdropRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setMarginWidth:(double)a;
 - (void) setGroupName:(id)a;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end
