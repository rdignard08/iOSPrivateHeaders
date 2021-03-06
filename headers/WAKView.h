
@interface WAKView : WAKResponder {

    {_WKViewContext="notificationCallback"^?"notificationUserInfo"^v"responderCallback"^?"responderUserInfo"^v"willRemoveSubviewCallback"^?"invalidateGStateCallback"^?} viewContext;
    ^{_WKView={_WKObject=I^{_WKClassInfo}}^{_WKViewContext}@^{_WKView}^{__CFArray}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}If^v} viewRef;
    NSMutableSet* subviewReferences;
    BOOL _isHidden;
    BOOL _drawsOwnDescendants;
}
 + (void) _setInterpolationQuality:(int)a;
 + (id) _wrapperForViewRef:(^{_WKView={_WKObject=I^{_WKClassInfo}}^{_WKViewContext}@^{_WKView}^{__CFArray}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}If^v})a;
 + (id) focusView;

 - (Vv) release;
 - (Vv) _webcore_releaseWithWebThreadLock;
 - (id) _frame;
 - (id) _webView;
 - (id) _web_parentWebFrameView;
 - (id) _web_superviewOfClass:(Class)a ;
 - (BOOL) _web_firstResponderIsSelfOrDescendantView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _web_convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a toView:(id)b ;
 - (void) _web_addDescendantWebHTMLViewsToArray:(id)a ;
 - (float) scale;
 - (id) description;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (unsigned int) autoresizingMask;
 - ({CGSize=dd}) convertSize:({CGSize=dd})a toView:(id)b ;
 - (id) lastScrollableAncestor;
 - (id) init;
 - (id) window;
 - (id) superview;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a toView:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (void) layout;
 - (void) removeFromSuperview;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setScale:(float)a ;
 - (void) display;
 - (id) hitTest:({CGPoint=dd})a ;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) needsDisplay;
 - (void) layoutIfNeeded;
 - (void) displayIfNeeded;
 - (BOOL) isDescendantOf:(id)a ;
 - (void) setNeedsLayout:(BOOL)a ;
 - (BOOL) scrollRectToVisible:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setAutoresizingMask:(unsigned int)a ;
 - (void) setNextKeyView:(id)a ;
 - (id) previousValidKeyView;
 - (BOOL) mouse:({CGPoint=dd})a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) _setDrawsOwnDescendants:(BOOL)a ;
 - (id) nextKeyView;
 - (id) previousKeyView;
 - (BOOL) accessibilityIsIgnored;
 - (void) setHidden:(BOOL)a ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a fromView:(id)b ;
 - (BOOL) needsPanelToBecomeKey;
 - (id) subviews;
 - (void) handleEvent:(id)a ;
 - (void) setBoundsSize:({CGSize=dd})a ;
 - (void) scrollPoint:({CGPoint=dd})a ;
 - (void) displayRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) viewWillDraw;
 - (id) _initWithViewRef:(^{_WKView={_WKObject=I^{_WKClassInfo}}^{_WKViewContext}@^{_WKView}^{__CFArray}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}If^v})a ;
 - (void) addSubview:(id)a ;
 - (^{_WKView={_WKObject=I^{_WKClassInfo}}^{_WKViewContext}@^{_WKView}^{__CFArray}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}If^v}) _viewRef;
 - (id) nextResponder;
 - (void) setBoundsOrigin:({CGPoint=dd})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fromView:(id)b ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a toView:(id)b ;
 - (void) setFrameSize:({CGSize=dd})a ;
 - (BOOL) _selfHandleEvent:(id)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrameOrigin:({CGPoint=dd})a ;
 - (void) setNeedsDisplay:(BOOL)a ;
 - (id) _subviewReferences;
 - (void) _lockFocusViewInContext:(^{CGContext=})a ;
 - (void) _drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a context:(^{CGContext=})b lockFocus:(BOOL)c ;
 - (void) _unlockFocusViewInContext:(^{CGContext=})a ;
 - (BOOL) isHiddenOrHasHiddenAncestor;
 - (void) _appendDescriptionToString:(id)a atLevel:(int)b ;
 - (BOOL) _handleResponderCall:(int)a ;
 - (void) willRemoveSubview:(id)a ;
 - (void) viewDidMoveToWindow;
 - (void) frameSizeChanged;
 - (void) displayRectIgnoringOpacity:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) displayRectIgnoringOpacity:({CGRect={CGPoint=dd}{CGSize=dd}})a inContext:(^{CGContext=})b ;
 - (void) lockFocus;
 - (void) unlockFocus;
 - (id) nextValidKeyView;
 - (void) invalidateGState;
 - (void) releaseGState;
 - (BOOL) inLiveResize;


@end
