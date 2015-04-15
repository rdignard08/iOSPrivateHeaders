
@protocol UITableViewDataSource, UITextFieldDelegate;
@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate> {

    BOOL _addToNetwork;
    BOOL _directPrinting;
    PKPrinter* _printer;
    NSString* _directPasscode;
    UIButton* _finishButton;
    UIPrinterSetupConnectingView* _connectingView;
}

 - (void) dealloc;
 - (void) tableView:(id)a willDisplayCell:(id)b forRowAtIndexPath:(id)c ;
 - (void) tableView:(id)a willDisplayHeaderView:(id)b forSection:(long long)c ;
 - (void) tableView:(id)a willDisplayFooterView:(id)b forSection:(long long)c ;
 - (BOOL) tableView:(id)a shouldHighlightRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (id) tableView:(id)a titleForHeaderInSection:(long long)b ;
 - (id) tableView:(id)a titleForFooterInSection:(long long)b ;
 - (unsigned long long) supportedInterfaceOrientations;
 - (void) loadView;
 - (void) textDidChange:(id)a ;
 - (BOOL) textFieldShouldReturn:(id)a ;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) viewWillAppear:(BOOL)a ;
 - (id) printer;
 - (void) setPrinter:(id)a ;
 - (id) initWithPrinter:(id)a ;
 - (void) setConnectingView:(id)a ;
 - (id) connectingView;
 - (void) setAddToNetwork:(BOOL)a ;
 - (void) setDirectPrinting:(BOOL)a ;
 - (void) setDirectPasscode:(id)a ;
 - (void) setFinishButton:(id)a ;
 - (void) finish;
 - (void) finished:(BOOL)a ;
 - (void) toggleAddToNetwork:(id)a ;
 - (void) toggleDirectPrinting:(id)a ;
 - (BOOL) addToNetwork;
 - (BOOL) directPrinting;
 - (id) directPasscode;
 - (id) finishButton;


@end
