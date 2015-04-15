
@interface UIPickerTableViewTitledCell : UIPickerTableViewCell {

    UILabel* _titleLabel;
    BOOL _isAttributed;
    BOOL _usesModernStyle;
    UIColor* _textColor;
}

 - (id) title;
 - (void) setTitle:(id)a ;
 - (void) dealloc;
 - (BOOL) _canBeReusedInPickerView;
 - (id) initWithStyle:(long long)a reuseIdentifier:(id)b isModern:(BOOL)c textColor:(id)d ;
 - (void) setAttributedTitle:(id)a ;
 - (void) prepareForReuse;
 - (id) _titleLabel;
 - (id) attributedTitle;
 - (void) _setIsCenterCell:(BOOL)a shouldModifyAlphaOfView:(BOOL)b ;
 - (BOOL) _isAttributed;


@end
