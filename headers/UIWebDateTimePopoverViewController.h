
@interface UIWebDateTimePopoverViewController : UIViewController {

    <UIWebFormControl> _innerWebDateTimeControl;
}

 - (void) dealloc;
 - (void) loadView;
 - (id) initWithDOMHTMLInputElement:(id)adatePickerMode:(long long)b;
 - (void) set_innerWebDateTimeControl:(id)a;
 - (id) _innerWebDateTimeControl;


@end
