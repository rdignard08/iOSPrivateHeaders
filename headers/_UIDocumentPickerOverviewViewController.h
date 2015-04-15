
@interface _UIDocumentPickerOverviewViewController : UITableViewController {

    @"<_UIDocumentPickerOverviewDelegate>" _weak_delegate;
    BOOL _manage;
    @"NSArray" _allPickers;
    @"NSString" _currentExtensionIdentifier;
    @"NSArray" _auxiliaryOptions;
    @"NSArray" _fileTypes;
    Q _mode;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setMode:(Q)a;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (Q) mode;
 - (void) setAuxiliaryOptions:(id)a;
 - (id) auxiliaryOptions;
 - (id) allPickers;
 - (id) initWithFileTypes:(id)amode:(Q)bauxiliaryOptions:(id)cincludeManagementItem:(BOOL)d;
 - (void) updateContents;
 - (void) setFileTypes:(id)a;
 - (void) setManage:(BOOL)a;
 - (id) fileTypes;
 - (BOOL) manage;
 - (void) setAllPickers:(id)a;
 - (void) updatePreferredContentSize;
 - (void) setCurrentExtensionIdentifier:(id)a;
 - (id) currentExtensionIdentifier;
 - (id) delegate;


@end
