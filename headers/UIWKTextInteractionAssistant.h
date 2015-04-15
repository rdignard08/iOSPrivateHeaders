
@interface UIWKTextInteractionAssistant : UITextInteractionAssistant {

    long long _selectionOperation;
    _UITextServiceSession* _definitionSession;
    _UITextServiceSession* _learnSession;
    UITextChecker* _textChecker;
    unsigned long long _options;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _caretBeforeTap;
    NSString* _wordBeforeTap;
    UITapGestureRecognizer* _singleTapGesture;
    UILongPressGestureRecognizer* _loupeGesture;
}

 - (void) dealloc;
 - (BOOL) gestureRecognizerShouldBegin:(id)a ;
 - (BOOL) gestureRecognizer:(id)a shouldReceiveTouch:(id)b ;
 - (void) selectionChanged;
 - (id) initWithView:(id)a ;
 - (void) selectAll:(id)a ;
 - (void) selectWord;
 - (void) scheduleReplacementsWithOptions:(unsigned long long)a ;
 - (id) loupeGesture;
 - (id) singleTapGesture;
 - (void) updateSelectionWithPoint:({CGPoint=dd})a ;
 - (BOOL) containerIsBrowserView;
 - (BOOL) containerIsAtom;
 - (BOOL) containerIsPlainStyleAtom;
 - (void) oneFingerDoubleTap:(id)a ;
 - (void) oneFingerTap:(id)a ;
 - (void) oneFingerTripleTap:(id)a ;
 - (void) twoFingerSingleTap:(id)a ;
 - (void) tapAndAHalf:(id)a ;
 - (void) loupeGesture:(id)a ;
 - (void) twoFingerRangedSelectGesture:(id)a ;
 - (id) _asText;
 - (void) scrollSelectionToVisible;
 - (void) updateWithMagnifierTerminalPoint:(BOOL)a ;
 - (BOOL) containerAllowsSelectionTintOnly;
 - (BOOL) requiresImmediateUpdate;
 - (BOOL) containerAllowsSelection;
 - (void) rangeSelectionStarted:({CGPoint=dd})a ;
 - (void) rangeSelectionEnded:({CGPoint=dd})a ;
 - (void) rangeSelectionCanceled;
 - (void) rangeSelectionMoved:({CGPoint=dd})a withTouchPoint:({CGPoint=dd})b ;
 - (void) selectionChangedWithGestureAt:({CGPoint=dd})a withGesture:(long long)b withState:(long long)c withFlags:(long long)d ;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})a withSelectionTouch:(long long)b withFlags:(long long)c ;
 - (void) showDictionaryFor:(id)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) selectionChangedWithGestureAt:({CGPoint=dd})a withGesture:(long long)b withState:(long long)c ;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})a withSelectionTouch:(long long)b ;
 - (void) showTextServiceFor:(id)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) scheduleReplacementsForText:(id)a withOptions:(unsigned long long)b ;
 - (BOOL) shouldTryReplacementsForText:(id)a withOptions:(unsigned long long)b ;
 - (void) showReplacementsForText:(id)a withOptions:(unsigned long long)b ;
 - (void) selectTextForReplacement:(id)a withOptions:(unsigned long long)b ;
 - (void) selectWithTapGestureAt:({CGPoint=dd})a withGesture:(long long)b withState:(long long)c ;
 - (void) scheduleChineseTransliterationForText:(id)a ;
 - (void) scheduleReplacementsForText:(id)a ;
 - (void) showTextStyleOptions;
 - (void) hideTextStyleOptions;


@end
