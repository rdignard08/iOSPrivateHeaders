
@interface UIWKSelectionAssistant : UIWebSelectionAssistant {

    _UITextServiceSession* _definitionSession;
    _UITextServiceSession* _learnSession;
}

 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (void) selectionChanged;
 - (id) initWithView:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionFrame;
 - (void) selectionChangedWithGestureAt:({CGPoint=dd})awithGesture:(long long)bwithState:(long long)cwithFlags:(long long)d;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})awithSelectionTouch:(long long)bwithFlags:(long long)c;
 - (void) blockSelectionChangedWithTouch:(long long)awithFlags:(long long)bgrowThreshold:(double)cshrinkThreshold:(double)d;
 - (id) selectionLongPressRecognizer;
 - (BOOL) shouldHandleSingleTapAtPoint:({CGPoint=dd})a;
 - (void) showDictionaryFor:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) selectionChangedWithGestureAt:({CGPoint=dd})awithGesture:(long long)bwithState:(long long)c;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})awithSelectionTouch:(long long)b;
 - (void) showTextServiceFor:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;


@end
