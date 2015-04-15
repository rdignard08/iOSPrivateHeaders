
@protocol _UIScrollToTopView, _UIRemoteViewFocusProxy;
@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy> {

    @"_UIRemoteViewController" _remoteViewController;
    id _viewControllerOperatorProxy;
    id _textEffectsOperatorProxy;
    BOOL _hasIntrinsicContentSize;
    {CGSize="width"d"height"d} _intrinsicContentSize;
}
 + (id) viewWithRemoteViewController:(id)aviewControllerOperatorProxy:(id)btextEffectsOperatorProxy:(id)c;

 - (void) dealloc;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (BOOL) isScrollEnabled;
 - (void) _scrollToTopFromTouchAtScreenLocation:({CGPoint=dd})aresultHandler:(@?)b;
 - (void) _geometryChanges:(id)aforAncestor:(id)b;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) _updateTextEffectsGeometries:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) remoteViewController;
 - (void) updateIntrinsicContentSize:({CGSize=dd})a;


@end
