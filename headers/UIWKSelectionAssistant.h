
@interface UIWKSelectionAssistant : UIWebSelectionAssistant {

    @"_UITextServiceSession" _definitionSession;
    @"_UITextServiceSession" _learnSession;
}

 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (void) selectionChanged;
 - (id) initWithView:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionFrame;
 - (void) selectionChangedWithGestureAt:({CGPoint=dd})awithGesture:(q)bwithState:(q)cwithFlags:(q)d;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})awithSelectionTouch:(q)bwithFlags:(q)c;
 - (void) blockSelectionChangedWithTouch:(q)awithFlags:(q)bgrowThreshold:(d)cshrinkThreshold:(d)d;
 - (id) selectionLongPressRecognizer;
 - (BOOL) shouldHandleSingleTapAtPoint:({CGPoint=dd})a;
 - (void) showDictionaryFor:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) selectionChangedWithGestureAt:({CGPoint=dd})awithGesture:(q)bwithState:(q)c;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})awithSelectionTouch:(q)b;
 - (void) showTextServiceFor:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;


@end
