
@interface UIAlertButton : UIButton {

    d _imageOffset;
    BOOL _isNewStyle;
    @"UIImageView" _highlightView;
}

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) focusedViewDidChange;
 - (BOOL) canBecomeFocused;
 - (void) setImage:(id)aforState:(Q)b;
 - (id) initWithTitle:(id)a;
 - (void) setHighlighted:(BOOL)a;
 - (void) _transitionHighlightViewToHighlighted:(BOOL)a;
 - (void) setHighlightImage:(id)a;
 - (id) highlightImage;
 - (void) setIsNewStyle:(BOOL)a;
 - (d) imageOffset;
 - (void) setImageOffset:(d)a;
 - (BOOL) isNewStyle;
 - (id) image;
 - (id) highlightView;
 - (void) setEnabled:(BOOL)a;


@end
