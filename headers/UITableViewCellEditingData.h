
@interface UITableViewCellEditingData : NSObject {

    @"UITableViewCell" _cell;
    q _editingStyle;
    @"UITableViewCellEditControl" _editControl;
    @"UITableViewCellReorderControl" _reorderControl;
    @"UITableViewCellDeleteConfirmationControl_Legacy" _deleteConfirmationControl;
    @"UIView" _reorderSeparatorView;
}
@property (nonatomic, assign, readonly, isDataRequired) NSNumber* dataRequired;

 - (void) dealloc;
 - (id) editControl:(BOOL)a;
 - (id) deleteConfirmationControl:(BOOL)a;
 - (id) initWithTableViewCell:(id)aeditingStyle:(q)b;
 - (id) reorderControl:(BOOL)a;
 - (id) reorderSeparatorView:(BOOL)a;
 - (BOOL) isDataRequired;


@end
