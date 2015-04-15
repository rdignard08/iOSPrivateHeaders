
@protocol UITableViewDataSource, UITextFieldDelegate;
@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate> {

    BOOL _addToNetwork;
    BOOL _directPrinting;
    PKPrinter _printer;
    NSString _directPasscode;
    UIButton _finishButton;
    UIPrinterSetupConnectingView _connectingView;
}

 - (void) dealloc;
 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (void) tableView:(id)awillDisplayHeaderView:(id)bforSection:(long long)c;
 - (void) tableView:(id)awillDisplayFooterView:(id)bforSection:(long long)c;
 - (BOOL) tableView:(id)ashouldHighlightRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (id) tableView:(id)atitleForHeaderInSection:(long long)b;
 - (id) tableView:(id)atitleForFooterInSection:(long long)b;
 - (unsigned long long) supportedInterfaceOrientations;
 - (void) loadView;
 - (void) textDidChange:(id)a;
 - (BOOL) textFieldShouldReturn:(id)a;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) viewWillAppear:(BOOL)a;
 - (id) printer;
 - (void) setPrinter:(id)a;
 - (id) initWithPrinter:(id)a;
 - (void) setConnectingView:(id)a;
 - (id) connectingView;
 - (void) setAddToNetwork:(BOOL)a;
 - (void) setDirectPrinting:(BOOL)a;
 - (void) setDirectPasscode:(id)a;
 - (void) setFinishButton:(id)a;
 - (void) finish;
 - (void) finished:(BOOL)a;
 - (void) toggleAddToNetwork:(id)a;
 - (void) toggleDirectPrinting:(id)a;
 - (BOOL) addToNetwork;
 - (BOOL) directPrinting;
 - (id) directPasscode;
 - (id) finishButton;


@end
