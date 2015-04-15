
@interface UISelectionTapRecognizer : UITextTapRecognizer {

    @"UIResponder<UITextInput>" _textView;
}

 - (void) setTextView:(id)a;
 - (BOOL) isCloseToSelection;
 - (void) setState:(q)a;
 - (id) textView;


@end
