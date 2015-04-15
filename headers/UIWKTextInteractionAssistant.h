
@interface UIWKTextInteractionAssistant : UITextInteractionAssistant {

    q _selectionOperation;
    @"_UITextServiceSession" _definitionSession;
    @"_UITextServiceSession" _learnSession;
    @"UITextChecker" _textChecker;
    Q _options;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _caretBeforeTap;
    @"NSString" _wordBeforeTap;
    @"UITapGestureRecognizer" _singleTapGesture;
    @"UILongPressGestureRecognizer" _loupeGesture;
}

 - (void) dealloc;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (void) selectionChanged;
 - (id) initWithView:(id)a;
 - (void) selectAll:(id)a;
 - (void) selectWord;
 - (void) scheduleReplacementsWithOptions:(Q)a;
 - (id) loupeGesture;
 - (id) singleTapGesture;
 - (void) updateSelectionWithPoint:({CGPoint=dd})a;
 - (BOOL) containerIsBrowserView;
 - (BOOL) containerIsAtom;
 - (BOOL) containerIsPlainStyleAtom;
 - (void) oneFingerDoubleTap:(id)a;
 - (void) oneFingerTap:(id)a;
 - (void) oneFingerTripleTap:(id)a;
 - (void) twoFingerSingleTap:(id)a;
 - (void) tapAndAHalf:(id)a;
 - (void) loupeGesture:(id)a;
 - (void) twoFingerRangedSelectGesture:(id)a;
 - (id) _asText;
 - (void) scrollSelectionToVisible;
 - (void) updateWithMagnifierTerminalPoint:(BOOL)a;
 - (BOOL) containerAllowsSelectionTintOnly;
 - (BOOL) requiresImmediateUpdate;
 - (BOOL) containerAllowsSelection;
 - (void) rangeSelectionStarted:({CGPoint=dd})a;
 - (void) rangeSelectionEnded:({CGPoint=dd})a;
 - (void) rangeSelectionCanceled;
 - (void) rangeSelectionMoved:({CGPoint=dd})awithTouchPoint:({CGPoint=dd})b;
 - (void) selectionChangedWithGestureAt:({CGPoint=dd})awithGesture:(q)bwithState:(q)cwithFlags:(q)d;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})awithSelectionTouch:(q)bwithFlags:(q)c;
 - (void) showDictionaryFor:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) selectionChangedWithGestureAt:({CGPoint=dd})awithGesture:(q)bwithState:(q)c;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})awithSelectionTouch:(q)b;
 - (void) showTextServiceFor:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) scheduleReplacementsForText:(id)awithOptions:(Q)b;
 - (BOOL) shouldTryReplacementsForText:(id)awithOptions:(Q)b;
 - (void) showReplacementsForText:(id)awithOptions:(Q)b;
 - (void) selectTextForReplacement:(id)awithOptions:(Q)b;
 - (void) selectWithTapGestureAt:({CGPoint=dd})awithGesture:(q)bwithState:(q)c;
 - (void) scheduleChineseTransliterationForText:(id)a;
 - (void) scheduleReplacementsForText:(id)a;
 - (void) showTextStyleOptions;
 - (void) hideTextStyleOptions;


@end
