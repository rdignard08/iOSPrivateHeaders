
@protocol UIGestureRecognizerDelegate;
@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate> {

    UIResponder<UITextInput>* _view;
    UITextSelectionView* _selectionView;
    NSMutableArray* _recognizers;
    NSMutableSet* _linkGestures;
    UILongPressGestureRecognizer* _loupeGesture;
    UITapGestureRecognizer* _singleTapGesture;
    UIGestureRecognizer* _doubleTapGesture;
    int _autoscrollRamp;
    double _autoscrollFactor;
    {CGPoint="x"d"y"d} _autoscrollBasePoint;
    {CGPoint="x"d"y"d} _autoscrollUntransformedExtentPoint;
    {CGPoint="x"d"y"d} _loupeGestureEndPoint;
    UITextChecker* _textChecker;
    BOOL _inGesture;
    BOOL _autoscrolled;
    BOOL _isTryingToHighlightLink;
    BOOL _externalTextInput;
    NSHashTable* _gestureRecognizerViews;
}
@property (nonatomic, assign, readonly) NSNumber* view;
@property (nonatomic, assign, readonly) UITextSelectionView* selectionView;
@property (nonatomic, assign, readonly) NSNumber* textDocument;
@property (nonatomic, retain, readonly) UITapGestureRecognizer* singleTapGesture;
@property (nonatomic, retain, readwrite) UILongPressGestureRecognizer* loupeGesture;
@property (nonatomic, retain, readwrite) UIGestureRecognizer* doubleTapGesture;
@property (nonatomic, assign, readwrite) NSNumber* inGesture;
@property (nonatomic, assign, readonly) UIView* scrollView;
@property (nonatomic, assign, readwrite) NSNumber* autoscrolled;
@property (nonatomic, assign, readwrite) NSNumber* autoscrollUntransformedExtentPoint;
@property (nonatomic, assign, readonly) NSNumber* externalTextInput;
@property (nonatomic, assign, readwrite) NSNumber* loupeGestureEndPoint;
@property (nonatomic, assign, readonly) UIFieldEditor* fieldEditor;
@property (nonatomic, retain, readwrite) UITapGestureRecognizer* singleTapGesture;
@property (nonatomic, assign, readonly, getter=isExperimentalUIEnabled) NSNumber* experimentalUIEnabled;

 - (void) dealloc;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (BOOL) gestureRecognizer:(id)ashouldRecognizeSimultaneouslyWithGestureRecognizer:(id)b;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (id) fieldEditor;
 - (id) selectionView;
 - (void) autoscrollWillNotStart;
 - (void) cancelAutoscroll;
 - (void) setAutoscrolled:(BOOL)a;
 - ({CGPoint=dd}) autoscrollUntransformedExtentPoint;
 - (void) setSelectionWithPoint:({CGPoint=dd})a;
 - (void) selectionChanged;
 - (id) rangeWithTextAlternatives:(^@)aatPosition:(id)b;
 - (void) startAutoscroll:({CGPoint=dd})a;
 - (void) updateAutoscroll:(id)a;
 - (id) scrollView;
 - (id) initWithView:(id)a;
 - (void) selectAll:(id)a;
 - (void) setGestureRecognizers;
 - (void) resignedFirstResponder;
 - (void) selectWord;
 - (void) scheduleReplacements;
 - (void) scheduleChineseTransliteration;
 - (BOOL) isInteractingWithLink;
 - (void) cancelInteractionWithLink;
 - ({CGPoint=dd}) constrainedPoint:({CGPoint=dd})a;
 - (void) disableClearsOnInsertion;
 - (void) clearSelection;
 - (void) scheduleReplacementsWithOptions:(unsigned long long)a;
 - (void) confirmMarkedText:(id)a;
 - (void) layoutChangedByScrolling:(BOOL)a;
 - (void) willStartScrollingOverflow;
 - (void) didEndScrollingOverflow;
 - (void) setInGesture:(BOOL)a;
 - (BOOL) swallowsDoubleTapWithScale:(double)aatPoint:({CGPoint=dd})b;
 - (id) textDocument;
 - (id) loupeGesture;
 - (id) singleTapGesture;
 - (id) _selectionView;
 - (void) updateSelectionWithPoint:({CGPoint=dd})a;
 - (void) clearGestureRecognizers:(BOOL)a;
 - (id) initWithResponder:(id)a;
 - (void) clearGestureRecognizers;
 - (id) textSelectionView;
 - (BOOL) isExperimentalUIEnabled;
 - (void) detach:(BOOL)a;
 - (BOOL) containerIsBrowserView;
 - (BOOL) containerIsAtom;
 - (BOOL) containerIsPlainStyleAtom;
 - (BOOL) inGesture;
 - (void) setLoupeGesture:(id)a;
 - (void) setSingleTapGesture:(id)a;
 - (void) setDoubleTapGesture:(id)a;
 - (id) oneFingerDoubleTapRecognizer:(SEL)a;
 - (void) oneFingerDoubleTap:(id)a;
 - (id) addOneFingerDoubleTapRecognizer:(SEL)atoView:(id)b;
 - (id) oneFingerTapRecognizer:(SEL)a;
 - (void) oneFingerTap:(id)a;
 - (id) addOneFingerTapRecognizer:(SEL)atoView:(id)b;
 - (void) oneFingerTripleTap:(id)a;
 - (id) oneFingerTripleTapRecognizer;
 - (id) selectionTapRecognizer:(SEL)a;
 - (id) addSelectionTapRecognizer:(SEL)atoView:(id)b;
 - (void) twoFingerSingleTap:(id)a;
 - (id) twoFingerSingleTapRecognizer;
 - (void) tapAndAHalf:(id)a;
 - (id) tapAndAHalfRecognizer;
 - (void) loupeGesture:(id)a;
 - (id) loupeGestureRecognizer:(BOOL)a;
 - (void) twoFingerRangedSelectGesture:(id)a;
 - (id) twoFingerRangedSelectRecognizer;
 - (void) smallDelayRecognizer:(id)a;
 - (void) longDelayRecognizer:(id)a;
 - (id) _asText;
 - (id) phraseBoundaryGestureRecognizer;
 - (void) canBeginDragCursor:(id)a;
 - (void) addGestureRecognizersToView:(id)a;
 - (id) linkInteractionView;
 - (BOOL) viewCouldBecomeEditable:(id)a;
 - (BOOL) useGesturesForEditableContent;
 - (void) oneFingerTapSelectsAll:(id)a;
 - (id) addPhraseBoundaryGestureRecognizerToView:(id)a;
 - (id) addOneFingerTripleTapRecognizerToView:(id)a;
 - (id) addOneFingerDoubleTapRecognizerToView:(id)a;
 - (id) addTwoFingerSingleTapRecognizerToView:(id)a;
 - (id) addTapAndAHalfRecognizerToView:(id)a;
 - (id) addTwoFingerRangedSelectRecognizerToView:(id)a;
 - (id) addOneFingerTapRecognizerToView:(id)a;
 - (id) addLoupeGestureRecognizer:(BOOL)atoView:(id)b;
 - (id) addDragRecognizer;
 - (id) addHighlightLinkRecognizerToView:(id)awithHighlightDelay:(BOOL)b;
 - (id) addTapAndHoldOnLinkRecognizerToView:(id)a;
 - (void) oneFingerTapInUneditable:(id)a;
 - (void) doubleTapInUneditable:(id)a;
 - (void) scrollSelectionToVisible;
 - (void) setFirstResponderIfNecessary;
 - (void) turnOffDrawsAsAtomIfPlainStyleAtom;
 - (BOOL) autoscrolled;
 - (void) notifyKeyboardSelectionChanged;
 - (void) updateWithMagnifierTerminalPoint:(BOOL)a;
 - (BOOL) shouldHandleFormGestureAtLocation:({CGPoint=dd})a;
 - (BOOL) shouldHandleOneFingerTapInUneditable:(id)a;
 - (BOOL) shouldIgnoreLinkGestures;
 - (BOOL) noCalloutBarAndTouchInSelection:({CGPoint=dd})a;
 - (BOOL) containerChangesSelectionOnOneFingerTap;
 - (id) rangeForTextReplacement:(id)a;
 - (double) distanceBetweenPoint:({CGPoint=dd})aandRange:(id)b;
 - (void) selectWordWithoutShowingCommands;
 - (BOOL) containerIsTextField;
 - (void) scheduleDictationReplacementsForAlternatives:(id)arange:(id)b;
 - (void) scheduleReplacementsForRange:(id)awithOptions:(unsigned long long)b;
 - (BOOL) tapOnLinkWithGesture:(id)a;
 - (BOOL) containerAllowsSelectionTintOnly;
 - (void) selectionAnimationDidStop:(id)afinished:(id)b;
 - (id) _scrollable;
 - (void) setAutoscrollUntransformedExtentPoint:({CGPoint=dd})a;
 - (void) activateSelection;
 - (void) deactivateSelection;
 - (BOOL) requiresImmediateUpdate;
 - (id) doubleTapGesture;
 - (void) setLoupeGestureEndPoint:({CGPoint=dd})a;
 - ({CGPoint=dd}) loupeGestureEndPoint;
 - (BOOL) externalTextInput;
 - (BOOL) containerAllowsSelection;
 - (id) addSelectionTapRecognizerToView:(id)a;
 - (void) removeGestureRecognizersFromView:(id)a;
 - (void) rangeSelectionStarted:({CGPoint=dd})a;
 - (void) rangeSelectionEnded:({CGPoint=dd})a;
 - (void) rangeSelectionCanceled;
 - (void) rangeSelectionMoved:({CGPoint=dd})awithTouchPoint:({CGPoint=dd})b;
 - (void) attach;
 - (void) detach;
 - (id) view;


@end
