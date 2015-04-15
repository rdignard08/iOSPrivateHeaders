
@interface UIPickerTableViewCell : UITableViewCell {

    UITapGestureRecognizer* _tap;
    UIPickerTableView* pickerTable;
}

 - (void) dealloc;
 - (id) initWithStyle:(long long)areuseIdentifier:(id)b;
 - (void) _tapAction:(id)a;
 - (void) _setIsCenterCell:(BOOL)ashouldModifyAlphaOfView:(BOOL)b;
 - (id) pickerTable;
 - (void) setPickerTable:(id)a;


@end
