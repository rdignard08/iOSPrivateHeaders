
@protocol UIWebFormControl;
@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl> {

    DOMHTMLInputElement* _inputElement;
    UIDatePicker* _datePicker;
    NSString* _formatString;
    BOOL _shouldRemoveTimeZoneInformation;
    BOOL _isTimeInput;
}
@property (nonatomic, retain, readwrite) DOMHTMLInputElement* _inputElement;
@property (nonatomic, retain, readwrite) UIDatePicker* _datePicker;

 - (void) dealloc;
 - (id) controlView;
 - (void) controlBeginEditing;
 - (void) controlEndEditing;
 - (long long) _timeZoneOffsetFromGMT:(id)a ;
 - (void) _dateChangedSetAsString;
 - (void) _dateChangedSetAsNumber;
 - (void) _dateChanged;
 - (void) set_inputElement:(id)a ;
 - (void) set_datePicker:(id)a ;
 - (void) _dateChangeHandler:(id)a ;
 - (id) _sanitizeInputValueForFormatter:(id)a ;
 - (id) initWithDOMHTMLInputElement:(id)a datePickerMode:(long long)b ;
 - (id) _inputElement;
 - (id) _datePicker;


@end
