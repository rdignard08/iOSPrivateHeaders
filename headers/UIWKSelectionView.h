
@interface UIWKSelectionView : UIWebSelectionView {

    @"UIView<UIWKInteractionViewProtocol>" _interactionView;
    @"UIWebSelectionHandle" _handle;
    BOOL _selectionIsBlock;
    BOOL _thresholdIsValid;
    BOOL _usingGesture;
    {CGPoint="x"d"y"d} _lastTouchPoint;
}

 - (void) updateSelectionRects;
 - (void) selectionChanged;
 - (id) initWithView:(id)a;
 - (void) clearSelection;
 - (void) showControls;
 - (id) scroller;
 - (id) selectionRects;
 - (void) startSelectionCreationWithPoint:({CGPoint=dd})a;
 - (void) updateSelectionCreationWithPoint:({CGPoint=dd})a;
 - (void) endSelectionCreationWithPoint:({CGPoint=dd})a;
 - (id) tintView;
 - (BOOL) updateRectForCalloutBar:(id)ainWindow:(id)b;
 - (void) onBeforeScrollOrZoomHidingSelection:(BOOL)a;
 - (void) onAfterScrollOrZoomShowingSelection:(BOOL)a;
 - (void) updateTextRangeViewSelectionRects;
 - (void) showCopyCalloutWithAnimation:(BOOL)a;
 - (void) setHandleCenters;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fetchSelectionBoundingRect;
 - (BOOL) shouldExpandForActiveHandle;
 - (BOOL) shouldContractForActiveHandle;
 - (void) switchToTextModeForHandle:(id)a;
 - (BOOL) shouldSwitchToBlockModeForHandle:(id)a;
 - (BOOL) isHorizontalWritingMode;
 - (void) touchChanged:(id)aforHandle:(id)b;
 - (void) touchChanged:(id)aforHandleInText:(id)b;
 - (void) setSelectionMode:(BOOL)a;
 - (void) selectionCreationStartedWithPoint:({CGPoint=dd})a;
 - (void) selectionCreationUpdatedWithPoint:({CGPoint=dd})a;
 - (void) selectionCreationEndedWithPoint:({CGPoint=dd})a;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})awithSelectionTouch:(long long)bwithFlags:(long long)c;
 - (void) blockSelectionChangedWithTouch:(long long)awithFlags:(long long)bgrowThreshold:(double)cshrinkThreshold:(double)d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) unobscuredRect;
 - (void) switchToBlockModeForHandle:(id)awithPoint:({CGPoint=dd})b;
 - (double) handleOffsetForPoint:({CGPoint=dd})ahandlePosition:(int)b;
 - (void) updateRangedSelectionData;
 - (void) updateFrameAndHandlesWithAnimation:(BOOL)ashowHandles:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;


@end
