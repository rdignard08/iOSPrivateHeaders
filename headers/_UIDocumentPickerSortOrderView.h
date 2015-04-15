
@interface _UIDocumentPickerSortOrderView : UIControl {

    @"<_UIDocumentPickerViewServiceViewController>" _serviceViewController;
    q _listMode;
    @"UISegmentedControl" _sortOrder;
    @"UIButton" _listModeToggle;
    @"NSArray" _compactConstraints;
    @"NSArray" _regularConstraints;
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
 - (void) setListMode:(q)a;
 - (id) serviceViewController;
 - (void) setServiceViewController:(id)a;
 - (q) listMode;
 - (void) setValue:(i)a;
 - (i) value;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
