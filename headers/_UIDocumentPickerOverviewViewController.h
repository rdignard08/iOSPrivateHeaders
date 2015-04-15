
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
 - (void) setDelegate:(id)a ;
 - (void) setMode:(unsigned long long)a ;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (void) viewWillAppear:(BOOL)a ;
 - (void) viewDidAppear:(BOOL)a ;
 - (void) viewWillDisappear:(BOOL)a ;
 - (unsigned long long) mode;
 - (void) setAuxiliaryOptions:(id)a ;
 - (id) auxiliaryOptions;
 - (id) allPickers;
 - (id) initWithFileTypes:(id)a mode:(unsigned long long)b auxiliaryOptions:(id)c includeManagementItem:(BOOL)d ;
 - (void) updateContents;
 - (void) setFileTypes:(id)a ;
 - (void) setManage:(BOOL)a ;
 - (id) fileTypes;
 - (BOOL) manage;
 - (void) setAllPickers:(id)a ;
 - (void) updatePreferredContentSize;
 - (void) setCurrentExtensionIdentifier:(id)a ;
 - (id) currentExtensionIdentifier;
 - (id) delegate;


@end
