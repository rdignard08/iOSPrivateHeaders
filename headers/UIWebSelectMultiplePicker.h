
@protocol UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate;
@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

    DOMHTMLSelectElement _selectionNode;
    NSArray _cachedItems;
    <UIWebSelectedItemPrivate> _singleSelectionItem;
    unsigned long long _singleSelectionIndex;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    double _layoutWidth;
}

 - (void) dealloc;
 - (void) pickerView:(id)arow:(int)bcolumn:(int)cchecked:(BOOL)d;
 - (long long) numberOfComponentsInPickerView:(id)a;
 - (long long) pickerView:(id)anumberOfRowsInComponent:(long long)b;
 - (void) layoutSubviews;
 - (id) pickerView:(id)aviewForRow:(long long)bforComponent:(long long)creusingView:(id)d;
 - (id) controlView;
 - (void) controlBeginEditing;
 - (void) controlEndEditing;
 - (void) set_selectionNode:(id)a;
 - (void) set_cachedItems:(id)a;
 - (void) set_singleSelectionItem:(id)a;
 - (id) _selectionNode;
 - (int) _itemIndexForRowIndex:(int)a;
 - (id) initWithDOMHTMLSelectElement:(id)acachedItems:(id)bsingleSelectionItem:(id)csingleSelectionIndex:(unsigned long long)dmultipleSelection:(BOOL)e;
 - (id) _cachedItems;
 - (id) _singleSelectionItem;


@end
