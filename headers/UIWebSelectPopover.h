
@protocol UIWebFormControl;
@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

    UIWebSelectTableViewController _tableViewController;
    UIKeyboard _keyboard;
}

 - (void) dealloc;
 - (id) _tableViewController;
 - (id) controlView;
 - (void) controlBeginEditing;
 - (void) controlEndEditing;
 - (id) initWithDOMHTMLSelectElement:(id)acachedItems:(id)bsingleSelectionItem:(id)csingleSelectionIndex:(unsigned long long)dmultipleSelection:(BOOL)e;
 - (void) _userActionDismissedPopover:(id)a;
 - (void) set_tableViewController:(id)a;


@end
