
@protocol UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate;
@interface UIPrintRangeViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {

    @"UIPrintPanelViewController" _printPanelViewController;
    q _pageCount;
    {_NSRange="location"Q"length"Q} _pageRange;
    @"UIPickerView" _fromPicker;
    @"UIPickerView" _toPicker;
    @"UITableView" _tableView;
    d _pickerWidth;
}

 - (void) dealloc;
 - (q) numberOfComponentsInPickerView:(id)a;
 - (q) pickerView:(id)anumberOfRowsInComponent:(q)b;
 - (id) pickerView:(id)atitleForRow:(q)bforComponent:(q)c;
 - (d) pickerView:(id)awidthForComponent:(q)b;
 - (void) pickerView:(id)adidSelectRow:(q)binComponent:(q)c;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (Q) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidLoad;
 - (void) viewDidDisappear:(BOOL)a;
 - (void) willAnimateRotationToInterfaceOrientation:(q)aduration:(d)b;
 - (id) initWithPrintPanelViewController:(id)a;


@end
