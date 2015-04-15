
@protocol UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate;
@interface UIPrintRangeViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {

    @"UIPrintPanelViewController" _printPanelViewController;
    long long _pageCount;
    {_NSRange="location"Q"length"Q} _pageRange;
    @"UIPickerView" _fromPicker;
    @"UIPickerView" _toPicker;
    @"UITableView" _tableView;
    double _pickerWidth;
}

 - (void) dealloc;
 - (long long) numberOfComponentsInPickerView:(id)a;
 - (long long) pickerView:(id)anumberOfRowsInComponent:(long long)b;
 - (id) pickerView:(id)atitleForRow:(long long)bforComponent:(long long)c;
 - (double) pickerView:(id)awidthForComponent:(long long)b;
 - (void) pickerView:(id)adidSelectRow:(long long)binComponent:(long long)c;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidLoad;
 - (void) viewDidDisappear:(BOOL)a;
 - (void) willAnimateRotationToInterfaceOrientation:(long long)aduration:(double)b;
 - (id) initWithPrintPanelViewController:(id)a;


@end
