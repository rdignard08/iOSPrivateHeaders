
@interface UIWebSelectionView : UIView {

    UIView* _center;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _selectionFrame;
    UIWebSelectionHandle* _top;
    UIWebSelectionHandle* _right;
    UIWebSelectionHandle* _bottom;
    UIWebSelectionHandle* _left;
    UIWebSelectionOutline* _outline;
    UIWebTextRangeView* _textRangeView;
    UIWebDocumentView* _documentView;
    UIWebSelectionNode* _selectionNode;
    UIWebSelectionGraph* _selectionGraph;
    double _growThreshold;
    double _shrinkThreshold;
    {?="scrollingHandle"@"UIWebSelectionHandle""startTime"d"direction"i"timer"@"NSTimer"} _autoscrollData;
    {?="activeHandle"@"UIWebSelectionHandle""handleCenterStart"{CGPoint="x"d"y"d}"handleOffset"d} _blockSelectionData;
    {?="start"@"UIWebSelectionHandle""end"@"UIWebSelectionHandle""startingOffset"{CGSize="width"d"height"d}"anchorAtStart"B"flipData"{?="flipPossible"B"rectsChanged"B"originalSelectionRect"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}}} _rangedSelectionData;
    BOOL _creatingSelection;
    int _nestedLayoutCalls;
    BOOL _calloutBarIsHiddenBeforeRotation;
    BOOL _rotating;
    int _selectionInFixedPosition;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (void) _subscribeToScrollNotificationsIfNecessary:(id)a ;
 - (void) _didScroll;
 - (id) selection;
 - (void) updateSelectionRects;
 - (void) selectionChanged;
 - (void) clearSelection;
 - (void) layoutChangedByScrolling:(BOOL)a ;
 - (void) willStartScrollingOverflow;
 - (void) didEndScrollingOverflow;
 - (void) scaleChanged;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionFrame;
 - (void) willStartScrollingOrZoomingPage;
 - (void) didEndScrollingOrZoomingPage;
 - (void) showControls;
 - (id) scroller;
 - (id) initWithWebDocumentView:(id)a ;
 - (void) hideControls;
 - (void) startSelectionCreationWithPoint:({CGPoint=dd})a ;
 - (void) updateSelectionCreationWithPoint:({CGPoint=dd})a ;
 - (void) endSelectionCreationWithPoint:({CGPoint=dd})a ;
 - (void) hideControlsBeforeRotation;
 - (void) showControlsAfterRotation;
 - (id) tintView;
 - (id) handleWithPosition:(int)a ;
 - (BOOL) updateRectForCalloutBar:(id)a inWindow:(id)b ;
 - (void) onBeforeScrollOrZoomHidingSelection:(BOOL)a ;
 - (void) onAfterScrollOrZoomShowingSelection:(BOOL)a ;
 - (void) updateTextRangeViewSelectionRects;
 - (void) showCopyCalloutWithAnimation:(BOOL)a ;
 - (id) handles;
 - (void) hideCopyCallout;
 - (void) setHandleCenters;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fetchSelectionBoundingTextSelectionRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fetchSelectionBoundingRect;
 - (void) setSelectionFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setSelectionNode:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) desiredBox;
 - (void) computeExpandAndContractThresholdsForActiveHandle;
 - (BOOL) shouldExpandForActiveHandle;
 - (void) expandForActiveHandle;
 - (BOOL) shouldContractForActiveHandle;
 - (void) contractForActiveHandle;
 - (void) switchToTextModeForHandle:(id)a ;
 - (void) updateAutoscrollForHandle:(id)a ;
 - (void) stopAnyAutoscrolling;
 - (void) considerFlipping;
 - (void) setOrientationOfMagnifier:(id)a forHandleInText:(id)b ;
 - (BOOL) shouldSwitchToBlockModeForHandle:(id)a ;
 - (void) switchToBlockModeForHandle:(id)a ;
 - (void) animateSloppyReleaseOfHandleInText:(id)a withMagnifier:(id)b ;
 - (BOOL) isHorizontalWritingMode;
 - (id) selectionNode;
 - (int) autoscrollDirectionsForHandle:(id)a ;
 - (void) autoscrollTimerFired:(id)a ;
 - (void) touchChanged:(id)a forHandle:(id)b ;
 - (void) shiftWebRangeSelectionAnimationDidStop:(id)a finished:(id)b ;
 - (void) resetSelection;
 - (id) nodeInPristineGraphAtPoint:({CGPoint=dd})a ;
 - (void) updateFrameAndHandlesWithAnimation:(BOOL)a ;
 - (id) activeHandle;
 - (BOOL) activelyManipulatingTextSelectionHandle;
 - (void) updateForChangedLayoutWhileManipulatingTextSelectionHandle;
 - (BOOL) activelyManipulatingBlockSelectionHandle;
 - (void) updateForChangedLayoutWhileManipulatingBlockSelectionHandle;
 - (void) calloutBar:(id)a selectedCommand:(id)b ;
 - (void) setSelectionFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a animated:(BOOL)b ;
 - (void) touchChanged:(id)a forHandleInText:(id)b ;
 - (BOOL) canFlip;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (void) removeFromSuperview;


@end
