
@interface UITableViewIndexOverlayIndicatorView : UIView {

    UILabel _label;
    UITapGestureRecognizer _tapGestureRecognizer;
    UITableView _table;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) _tapGestureChanged:(id)a;
 - (id) initWithTable:(id)a;
 - (void) _invalidateTable;
 - (void) _willChangeToIdiom:(long long)aonScreen:(id)b;
 - (void) setCurrentText:(id)a;
 - (id) currentText;


@end
