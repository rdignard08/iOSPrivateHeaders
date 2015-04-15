
@interface _UITableViewCellBadge : UIView {

    BOOL _isSelected;
    NSString _text;
    {CGSize="width"d"height"d} _textSize;
}

 - (void) setText:(id)a;
 - (void) setHighlighted:(BOOL)a;
 - (BOOL) isHighlighted;
 - (BOOL) isSelected;
 - (void) setSelected:(BOOL)a;
 - (void) _sizeToFit;
 - (void) setIsSelected:(BOOL)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) text;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
