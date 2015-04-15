
@protocol UIWebFormControl;
@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

    UIWebSelectTableViewController* _tableViewController;
    UIKeyboard* _keyboard;
}

 - (void) dealloc;
 - (id) _tableViewController;
 - (id) controlView;
 - (void) controlBeginEditing;
 - (void) controlEndEditing;
 - (id) initWithDOMHTMLSelectElement:(id)a cachedItems:(id)b singleSelectionItem:(id)c singleSelectionIndex:(unsigned long long)d multipleSelection:(BOOL)e ;
 - (void) _userActionDismissedPopover:(id)a ;
 - (void) set_tableViewController:(id)a ;


@end
