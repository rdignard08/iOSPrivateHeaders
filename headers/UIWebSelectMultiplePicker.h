
@protocol UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate;
@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

    @"DOMHTMLSelectElement" _selectionNode;
    @"NSArray" _cachedItems;
    @"<UIWebSelectedItemPrivate>" _singleSelectionItem;
    Q _singleSelectionIndex;
    d _fontSize;
    d _maximumTextWidth;
    q _textAlignment;
    d _layoutWidth;
}

 - (void) dealloc;
 - (void) pickerView:(id)arow:(i)bcolumn:(i)cchecked:(BOOL)d;
 - (q) numberOfComponentsInPickerView:(id)a;
 - (q) pickerView:(id)anumberOfRowsInComponent:(q)b;
 - (void) layoutSubviews;
 - (id) pickerView:(id)aviewForRow:(q)bforComponent:(q)creusingView:(id)d;
 - (id) controlView;
 - (void) controlBeginEditing;
 - (void) controlEndEditing;
 - (void) set_selectionNode:(id)a;
 - (void) set_cachedItems:(id)a;
 - (void) set_singleSelectionItem:(id)a;
 - (id) _selectionNode;
 - (i) _itemIndexForRowIndex:(i)a;
 - (id) initWithDOMHTMLSelectElement:(id)acachedItems:(id)bsingleSelectionItem:(id)csingleSelectionIndex:(Q)dmultipleSelection:(BOOL)e;
 - (id) _cachedItems;
 - (id) _singleSelectionItem;


@end
