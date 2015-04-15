
@interface UIWKSelectionView : UIWebSelectionView {

    UIView<UIWKInteractionViewProtocol>* _interactionView;
    UIWebSelectionHandle* _handle;
    BOOL _selectionIsBlock;
    BOOL _thresholdIsValid;
    BOOL _usingGesture;
    {CGPoint="x"d"y"d} _lastTouchPoint;
}

 - (void) updateSelectionRects;
 - (void) selectionChanged;
 - (id) initWithView:(id)a ;
 - (void) clearSelection;
 - (void) showControls;
 - (id) scroller;
 - (id) selectionRects;
 - (void) startSelectionCreationWithPoint:({CGPoint=dd})a ;
 - (void) updateSelectionCreationWithPoint:({CGPoint=dd})a ;
 - (void) endSelectionCreationWithPoint:({CGPoint=dd})a ;
 - (id) tintView;
 - (BOOL) updateRectForCalloutBar:(id)a inWindow:(id)b ;
 - (void) onBeforeScrollOrZoomHidingSelection:(BOOL)a ;
 - (void) onAfterScrollOrZoomShowingSelection:(BOOL)a ;
 - (void) updateTextRangeViewSelectionRects;
 - (void) showCopyCalloutWithAnimation:(BOOL)a ;
 - (void) setHandleCenters;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fetchSelectionBoundingRect;
 - (BOOL) shouldExpandForActiveHandle;
 - (BOOL) shouldContractForActiveHandle;
 - (void) switchToTextModeForHandle:(id)a ;
 - (BOOL) shouldSwitchToBlockModeForHandle:(id)a ;
 - (BOOL) isHorizontalWritingMode;
 - (void) touchChanged:(id)a forHandle:(id)b ;
 - (void) touchChanged:(id)a forHandleInText:(id)b ;
 - (void) setSelectionMode:(BOOL)a ;
 - (void) selectionCreationStartedWithPoint:({CGPoint=dd})a ;
 - (void) selectionCreationUpdatedWithPoint:({CGPoint=dd})a ;
 - (void) selectionCreationEndedWithPoint:({CGPoint=dd})a ;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})a withSelectionTouch:(long long)b withFlags:(long long)c ;
 - (void) blockSelectionChangedWithTouch:(long long)a withFlags:(long long)b growThreshold:(double)c shrinkThreshold:(double)d ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) unobscuredRect;
 - (void) switchToBlockModeForHandle:(id)a withPoint:({CGPoint=dd})b ;
 - (double) handleOffsetForPoint:({CGPoint=dd})a handlePosition:(int)b ;
 - (void) updateRangedSelectionData;
 - (void) updateFrameAndHandlesWithAnimation:(BOOL)a showHandles:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;


@end
