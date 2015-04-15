
@protocol UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate;
@interface UIWebSelectSinglePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

    @"DOMHTMLSelectElement" _selectNode;
    @"NSArray" _optionItems;
    @"<UIWebSelectedItemPrivate>" _selectedOptionItem;
    q _selectedIndex;
    @"<UIWebSelectedItemPrivate>" _optionToSelectWhenDone;
    q _indexToSelectWhenDone;
}

 - (void) dealloc;
 - (q) numberOfComponentsInPickerView:(id)a;
 - (q) pickerView:(id)anumberOfRowsInComponent:(q)b;
 - (id) pickerView:(id)aattributedTitleForRow:(q)bforComponent:(q)c;
 - (void) pickerView:(id)adidSelectRow:(q)binComponent:(q)c;
 - (id) controlView;
 - (void) controlBeginEditing;
 - (void) controlEndEditing;
 - (id) initWithDOMHTMLSelectElement:(id)aallItems:(id)b;


@end
