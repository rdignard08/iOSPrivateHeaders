
@interface _UIDocumentPickerSortOrderView : UIControl {

    <_UIDocumentPickerViewServiceViewController> _serviceViewController;
    long long _listMode;
    UISegmentedControl _sortOrder;
    UIButton _listModeToggle;
    NSArray _compactConstraints;
    NSArray _regularConstraints;
}

 - (void) dealloc;
 - (void) traitCollectionDidChange:(id)a;
 - (void) setSortOrder:(id)a;
 - (id) sortOrder;
 - (void) setListModeToggle:(id)a;
 - (id) listModeToggle;
 - (void) valueChanged:(id)a;
 - (void) _toggleListMode:(id)a;
 - (void) updateForListMode;
 - (id) regularConstraints;
 - (id) compactConstraints;
 - (void) setCompactConstraints:(id)a;
 - (void) setRegularConstraints:(id)a;
 - (void) setListMode:(long long)a;
 - (id) serviceViewController;
 - (void) setServiceViewController:(id)a;
 - (long long) listMode;
 - (void) setValue:(int)a;
 - (int) value;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
