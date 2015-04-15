
@interface UIPickerTableViewTitledCell : UIPickerTableViewCell {

    UILabel* _titleLabel;
    BOOL _isAttributed;
    BOOL _usesModernStyle;
    UIColor* _textColor;
}

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (BOOL) _canBeReusedInPickerView;
 - (id) initWithStyle:(long long)areuseIdentifier:(id)bisModern:(BOOL)ctextColor:(id)d;
 - (void) setAttributedTitle:(id)a;
 - (void) prepareForReuse;
 - (id) _titleLabel;
 - (id) attributedTitle;
 - (void) _setIsCenterCell:(BOOL)ashouldModifyAlphaOfView:(BOOL)b;
 - (BOOL) _isAttributed;


@end
