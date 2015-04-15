
@protocol UITextFieldDelegate;
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate> {

}

 - (BOOL) textFieldShouldBeginEditing:(id)a;
 - (void) textFieldDidBeginEditing:(id)a;
 - (void) textFieldDidEndEditing:(id)a;
 - (BOOL) textFieldShouldReturn:(id)a;
 - (void) layoutSubviewsOfCell:(id)a;
 - (id) detailTextLabelForCell:(id)a;
 - (id) editableTextFieldForCell:(id)a;
 - (id) defaultTextLabelFontForCell:(id)a;
 - (d) defaultTextFieldFontSizeForCell:(id)a;
 - (void) _textFieldStartEditing:(id)a;
 - (void) _textFieldEndEditing:(id)a;
 - (void) _textFieldEndEditingOnReturn:(id)a;
 - (void) _textValueChanged:(id)a;


@end
