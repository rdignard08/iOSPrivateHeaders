
@protocol EAGLDrawable;
@interface CAEAGLLayer : CALayer <EAGLDrawable> {

    ^{_CAEAGLNativeWindow={_EAGLWindowObject=^?^?^?}^{CAEAGLBuffer}IQ{Atomic={?=i}}{Atomic={?=i}}{SpinLock={?=i}}^{_CAImageQueue}@^{x_list_struct}I^{CAEAGLBuffer}^{CAEAGLBuffer}III^{CAEAGLBuffer}@{Atomic={?=i}}b1b1b1} _win;
}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;

 - (BOOL) isAsynchronous;
 - (void) dealloc;
 - (void) didChangeValueForKey:(id)a ;
 - (^{_EAGLWindowObject=^?^?^?}) nativeWindow;
 - (id) drawableProperties;
 - (BOOL) shouldArchiveValueForKey:(id)a ;
 - (BOOL) _deferrsDidBecomeVisiblePostCommit;
 - (void) layerDidBecomeVisible:(BOOL)a ;
 - (void) _display;
 - (void) _didCommitLayer:(^{Transaction=^{Shared}i^{HashTable<CA::Layer *, unsigned int *>}^{SpinLock}I^{Level}^{List<void (^)()>}^{Command}^{Deleted}^{List<const void *>}^{Context}^{HashTable<CA::Layer *, CA::Layer *>}^{__CFRunLoop}^{__CFRunLoopObserver}^{LayoutList}^{List<CA::Layer *>}b1b1b1b1b1b1})a ;
 - (void) setDrawableProperties:(id)a ;
 - (void) discardContents;
 - (void) setAsynchronous:(BOOL)a ;


@end
