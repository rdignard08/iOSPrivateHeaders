
@interface UISelectionTapRecognizer : UITextTapRecognizer {

    UIResponder<UITextInput>* _textView;
}

 - (void) setTextView:(id)a ;
 - (BOOL) isCloseToSelection;
 - (void) setState:(long long)a ;
 - (id) textView;


@end
