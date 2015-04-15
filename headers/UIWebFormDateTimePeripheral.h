
@protocol UIFormPeripheral;
@interface UIWebFormDateTimePeripheral : NSObject <UIFormPeripheral> {

    DOMHTMLInputElement* _inputElement;
    <UIWebFormControl>* _control;
}
@property (nonatomic, retain, readwrite) DOMHTMLInputElement* _inputElement;
@property (nonatomic, retain, readwrite) NSNumber* _control;
 + (id) createPeripheralWithDOMHTMLInputElement:(id)a;

 - (void) dealloc;
 - (void) beginEditing;
 - (void) endEditing;
 - (id) _control;
 - (id) assistantView;
 - (void) set_inputElement:(id)a;
 - (id) _inputElement;
 - (long long) _datePickerModeForInputType:(id)a;
 - (void) set_control:(id)a;
 - (id) initWithDOMHTMLInputElement:(id)a;


@end
