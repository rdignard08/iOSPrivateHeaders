
@interface UIKeyboardCandidateGridHeader : UIView {

    @"UILabel" _inlineTextLabel;
    double _inlineTextRightMargin;
    @"UIButton" _toggleButton;
    @"UIKBBackdropView" _backdropView;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setInlineText:(id)a;
 - (id) inlineText;
 - (void) setBackdropView:(id)a;
 - (id) backdropView;
 - (void) setInlineTextLabel:(id)a;
 - (void) setToggleButton:(id)a;
 - (id) inlineTextLabel;
 - (double) inlineTextRightMargin;
 - (id) toggleButton;
 - (void) setInlineTextRightMargin:(double)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
