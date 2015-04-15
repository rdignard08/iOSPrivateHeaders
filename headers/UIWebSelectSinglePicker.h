
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
 - (long long) numberOfComponentsInPickerView:(id)a ;
 - (long long) pickerView:(id)a numberOfRowsInComponent:(long long)b ;
 - (id) pickerView:(id)a attributedTitleForRow:(long long)b forComponent:(long long)c ;
 - (void) pickerView:(id)a didSelectRow:(long long)b inComponent:(long long)c ;
 - (id) controlView;
 - (void) controlBeginEditing;
 - (void) controlEndEditing;
 - (id) initWithDOMHTMLSelectElement:(id)a allItems:(id)b ;


@end
