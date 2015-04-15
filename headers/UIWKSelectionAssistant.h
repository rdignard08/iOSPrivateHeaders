
@interface UIWKSelectionAssistant : UIWebSelectionAssistant {

    _UITextServiceSession* _definitionSession;
    _UITextServiceSession* _learnSession;
}

 - (BOOL) gestureRecognizerShouldBegin:(id)a ;
 - (BOOL) gestureRecognizer:(id)a shouldReceiveTouch:(id)b ;
 - (void) selectionChanged;
 - (id) initWithView:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionFrame;
 - (void) selectionChangedWithGestureAt:({CGPoint=dd})a withGesture:(long long)b withState:(long long)c withFlags:(long long)d ;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})a withSelectionTouch:(long long)b withFlags:(long long)c ;
 - (void) blockSelectionChangedWithTouch:(long long)a withFlags:(long long)b growThreshold:(double)c shrinkThreshold:(double)d ;
 - (id) selectionLongPressRecognizer;
 - (BOOL) shouldHandleSingleTapAtPoint:({CGPoint=dd})a ;
 - (void) showDictionaryFor:(id)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) selectionChangedWithGestureAt:({CGPoint=dd})a withGesture:(long long)b withState:(long long)c ;
 - (void) selectionChangedWithTouchAt:({CGPoint=dd})a withSelectionTouch:(long long)b ;
 - (void) showTextServiceFor:(id)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;


@end
