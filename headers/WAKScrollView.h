
@protocol WebCoreFrameScrollView;
@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {

    @"WAKView" _documentView;
    @"WAKClipView" _contentView;
    id _delegate;
    {CGPoint="x"d"y"d} _scrollOrigin;
}

 - (id) description;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) delegate;
 - (id) contentView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) drawsBackground;
 - (void) setDrawsBackground:(BOOL)a;
 - (f) verticalLineScroll;
 - (void) setDocumentView:(id)a;
 - (void) setHasVerticalScroller:(BOOL)a;
 - (void) setHasHorizontalScroller:(BOOL)a;
 - (void) setLineScroll:(f)a;
 - (f) horizontalLineScroll;
 - (BOOL) hasHorizontalScroller;
 - (BOOL) hasVerticalScroller;
 - (BOOL) inProgrammaticScroll;
 - (void) scrollWheel:(id)a;
 - (id) documentView;
 - (void) setScrollingModes:(i)avertical:(i)bandLock:(BOOL)c;
 - (void) scrollingModes:(^i)avertical:(^i)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) unobscuredContentRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) exposedContentRect;
 - (void) setActualScrollPosition:({CGPoint=dd})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) documentVisibleRect;
 - (void) setScrollBarsSuppressed:(BOOL)arepaintOnUnsuppress:(BOOL)b;
 - ({CGPoint=dd}) scrollOrigin;
 - (void) scrollPoint:({CGPoint=dd})a;
 - (void) setScrollOrigin:({CGPoint=dd})aupdatePositionAtAll:(BOOL)bimmediately:(BOOL)c;
 - (BOOL) _selfHandleEvent:(id)a;
 - (void) reflectScrolledClipView:(id)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setHorizontalScrollingMode:(i)a;
 - (void) setVerticalScrollingMode:(i)a;
 - (void) setScrollingMode:(i)a;
 - (i) horizontalScrollingMode;
 - (i) verticalScrollingMode;
 - (void) _adjustScrollers;


@end