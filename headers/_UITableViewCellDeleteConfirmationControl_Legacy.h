
@interface _UITableViewCellDeleteConfirmationControl_Legacy : UIControl {

    NSString* _title;
}
 + (id) _backgroundImage;
 + (id) _highlightedBackgroundImage;
 + ({CGSize=dd}) defaultSizeForTitle:(id)a;

 - (id) title;
 - ({CGSize=dd}) size;
 - (void) dealloc;
 - (id) initWithTitle:(id)a;
 - (void) drawBackgroundInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBackgroundColor:(id)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
