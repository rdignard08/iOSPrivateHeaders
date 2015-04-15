
@interface _UITableViewCellOldEditingData : NSObject {

    UIRemoveControl _removeControl;
    UIControl _grabber;
    UIView _separator;
}
@property (nonatomic, retain, readwrite) UIControl* reorderControl;
@property (nonatomic, retain, readwrite) UIView* separatorView;

 - (void) dealloc;
 - (BOOL) dataRequired;
 - (id) reorderControl;
 - (void) setReorderControl:(id)a;
 - (id) separatorView;
 - (void) setSeparatorView:(id)a;


@end
