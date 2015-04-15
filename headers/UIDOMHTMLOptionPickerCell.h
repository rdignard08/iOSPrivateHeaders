
@interface UIDOMHTMLOptionPickerCell : UIPickerContentView {

    BOOL _disabled;
}

 - (id) initWithHTMLOptionNode:(id)a;
 - (BOOL) disabled;
 - (id) initCommon;
 - (BOOL) _isSelectable;
 - (void) setDisabled:(BOOL)a;


@end
