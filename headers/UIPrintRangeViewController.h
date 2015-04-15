
@protocol UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate;
@interface UIPrintRangeViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {

    UIPrintPanelViewController* _printPanelViewController;
    long long _pageCount;
    {_NSRange="location"Q"length"Q} _pageRange;
    UIPickerView* _fromPicker;
    UIPickerView* _toPicker;
    UITableView* _tableView;
    double _pickerWidth;
}

 - (void) dealloc;
 - (long long) numberOfComponentsInPickerView:(id)a ;
 - (long long) pickerView:(id)a numberOfRowsInComponent:(long long)b ;
 - (id) pickerView:(id)a titleForRow:(long long)b forComponent:(long long)c ;
 - (double) pickerView:(id)a widthForComponent:(long long)b ;
 - (void) pickerView:(id)a didSelectRow:(long long)b inComponent:(long long)c ;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) viewWillAppear:(BOOL)a ;
 - (void) viewDidLoad;
 - (void) viewDidDisappear:(BOOL)a ;
 - (void) willAnimateRotationToInterfaceOrientation:(long long)a duration:(double)b ;
 - (id) initWithPrintPanelViewController:(id)a ;


@end
