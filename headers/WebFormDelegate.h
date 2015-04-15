
@protocol WebFormDelegate;
@interface WebFormDelegate : NSObject <WebFormDelegate> {

}
 + (id) _sharedWebFormDelegate;

 - (void) didFocusTextField:(id)ainFrame:(id)b;
 - (void) textFieldDidBeginEditing:(id)ainFrame:(id)b;
 - (void) textFieldDidEndEditing:(id)ainFrame:(id)b;
 - (void) textDidChangeInTextField:(id)ainFrame:(id)b;
 - (BOOL) textField:(id)adoCommandBySelector:(SEL)binFrame:(id)c;
 - (void) textDidChangeInTextArea:(id)ainFrame:(id)b;
 - (void) frame:(id)asourceFrame:(id)bwillSubmitForm:(id)cwithValues:(id)dsubmissionListener:(id)e;
 - (void) willSendSubmitEventToForm:(id)ainFrame:(id)bwithValues:(id)c;


@end
