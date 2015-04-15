
@interface UITableViewCellContentMirror : UIView {

    b1 _selected;
}

 - (BOOL) isSelected;
 - (void) setSelected:(BOOL)a ;
 - (id) cell;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
