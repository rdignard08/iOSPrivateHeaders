
@protocol UIWebFormControl;
@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

    @"UIWebDateTimePopoverViewController" _webDateTimeViewController;
}

 - (void) dealloc;
 - (id) controlView;
 - (void) controlBeginEditing;
 - (void) controlEndEditing;
 - (void) clear:(id)a;
 - (id) initWithDOMHTMLInputElement:(id)adatePickerMode:(q)b;
 - (void) set_webDateTimeViewController:(id)a;
 - (id) _webDateTimeViewController;


@end
