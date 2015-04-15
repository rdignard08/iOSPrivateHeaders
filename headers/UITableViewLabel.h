
@interface UITableViewLabel : UILabel {

    UITableViewCell _tableCell;
}

 - (void) setText:(id)a;
 - (void) setTableCell:(id)a;
 - (id) tableCell;


@end
