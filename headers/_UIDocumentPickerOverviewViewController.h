
@interface _UIDocumentPickerOverviewViewController : UITableViewController {

    <_UIDocumentPickerOverviewDelegate>* _weak_delegate;
    BOOL _manage;
    NSArray* _allPickers;
    NSString* _currentExtensionIdentifier;
    NSArray* _auxiliaryOptions;
    NSArray* _fileTypes;
    unsigned long long _mode;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setMode:(unsigned long long)a;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (unsigned long long) mode;
 - (void) setAuxiliaryOptions:(id)a;
 - (id) auxiliaryOptions;
 - (id) allPickers;
 - (id) initWithFileTypes:(id)amode:(unsigned long long)bauxiliaryOptions:(id)cincludeManagementItem:(BOOL)d;
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
