
@protocol UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate;
@interface UIWebSelectSinglePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

    DOMHTMLSelectElement* _selectNode;
    NSArray* _optionItems;
    <UIWebSelectedItemPrivate>* _selectedOptionItem;
    long long _selectedIndex;
    <UIWebSelectedItemPrivate>* _optionToSelectWhenDone;
    long long _indexToSelectWhenDone;
}

 - (void) dealloc;
 - (long long) numberOfComponentsInPickerView:(id)a;
 - (long long) pickerView:(id)anumberOfRowsInComponent:(long long)b;
 - (id) pickerView:(id)aattributedTitleForRow:(long long)bforComponent:(long long)c;
 - (void) pickerView:(id)adidSelectRow:(long long)binComponent:(long long)c;
 - (id) controlView;
 - (void) controlBeginEditing;
 - (void) controlEndEditing;
 - (id) initWithDOMHTMLSelectElement:(id)aallItems:(id)b;


@end
