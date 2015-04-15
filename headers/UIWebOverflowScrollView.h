
@interface UIWebOverflowScrollView : UIScrollView {

    @"UIWebBrowserView" _webBrowserView;
    @"UIWebOverflowScrollListener" _scrollListener;
    @"UIWebOverflowContentView" _overflowContentView;
    @"DOMNode" _node;
    BOOL _beingRemoved;
}

 - (void) dealloc;
 - (void) setContentOffset:({CGPoint=dd})a;
 - (id) node;
 - (void) setNode:(id)a;
 - (id) initWithLayer:(id)anode:(id)bwebBrowserView:(id)c;
 - (void) setOverflowContentView:(id)a;
 - (id) overflowContentView;
 - (void) _replaceLayer:(id)a;
 - (void) setBeingRemoved:(BOOL)a;
 - (BOOL) fixUpViewAfterInsertion;
 - (id) webBrowserView;
 - (void) prepareForRemoval;
 - (void) setWebBrowserView:(id)a;
 - (id) scrollListener;
 - (void) setScrollListener:(id)a;
 - (BOOL) isBeingRemoved;
 - (id) superview;


@end
