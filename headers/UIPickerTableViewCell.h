
@interface UIPickerTableViewCell : UITableViewCell {

    UITapGestureRecognizer* _tap;
    UIPickerTableView* pickerTable;
}

 - (void) dealloc;
 - (id) initWithStyle:(long long)a reuseIdentifier:(id)b ;
 - (void) _tapAction:(id)a ;
 - (void) _setIsCenterCell:(BOOL)a shouldModifyAlphaOfView:(BOOL)b ;
 - (id) pickerTable;
 - (void) setPickerTable:(id)a ;


@end
