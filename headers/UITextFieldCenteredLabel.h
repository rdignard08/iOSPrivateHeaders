
@interface UITextFieldCenteredLabel : UITextFieldLabel {

    double _textXPosition;
    double _textWidth;
}

 - (BOOL) _isTextFieldCenteredLabel;
 - (void) setTextXPosition:(double)a;
 - (void) setTextWidth:(double)a;
 - (double) textXPosition;
 - (double) textWidth;


@end
