
@protocol UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate;
@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

    DOMHTMLSelectElement* _selectionNode;
    NSArray* _cachedItems;
    <UIWebSelectedItemPrivate>* _singleSelectionItem;
    unsigned long long _singleSelectionIndex;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    double _layoutWidth;
}

 - (void) dealloc;
 - (void) pickerView:(id)a row:(int)b column:(int)c checked:(BOOL)d ;
 - (long long) numberOfComponentsInPickerView:(id)a ;
 - (long long) pickerView:(id)a numberOfRowsInComponent:(long long)b ;
 - (void) layoutSubviews;
 - (id) pickerView:(id)a viewForRow:(long long)b forComponent:(long long)c reusingView:(id)d ;
 - (id) controlView;
 - (void) controlBeginEditing;
 - (void) controlEndEditing;
 - (void) set_selectionNode:(id)a ;
 - (void) set_cachedItems:(id)a ;
 - (void) set_singleSelectionItem:(id)a ;
 - (id) _selectionNode;
 - (int) _itemIndexForRowIndex:(int)a ;
 - (id) initWithDOMHTMLSelectElement:(id)a cachedItems:(id)b singleSelectionItem:(id)c singleSelectionIndex:(unsigned long long)d multipleSelection:(BOOL)e ;
 - (id) _cachedItems;
 - (id) _singleSelectionItem;


@end
