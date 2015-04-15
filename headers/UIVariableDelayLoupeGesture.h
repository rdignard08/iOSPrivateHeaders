
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {

    UIResponder<UITextInput> _textView;
}

 - (void) invalidate;
 - (void) setTextView:(id)a;
 - (void) startTimer;
 - (BOOL) isCloseToCaret;
 - (id) textView;


@end
