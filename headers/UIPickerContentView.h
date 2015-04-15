
@interface UIPickerContentView : UIView {

    @"UILabel" _titleLabel;
    @"UIImageView" _checkView;
    {?="checked"b1"highlighted"b1} _pickerContentViewFlags;
}
 + (d) _checkmarkOffset;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setChecked:(BOOL)a;
 - (void) setHighlighted:(BOOL)a;
 - (id) titleLabel;
 - (BOOL) isHighlighted;
 - (BOOL) _isSelectable;
 - (d) labelWidthForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) isChecked;
 - (id) checkedColor;


@end
