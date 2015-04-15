
@protocol WebFormDelegate;
@interface WebDefaultFormDelegate : NSObject <WebFormDelegate> {

}
 + (id) sharedFormDelegate;

 - (void) didFocusTextField:(id)a inFrame:(id)b ;
 - (void) textFieldDidBeginEditing:(id)a inFrame:(id)b ;
 - (void) textFieldDidEndEditing:(id)a inFrame:(id)b ;
 - (void) textDidChangeInTextField:(id)a inFrame:(id)b ;
 - (BOOL) textField:(id)a doCommandBySelector:(SEL)b inFrame:(id)c ;
 - (void) textDidChangeInTextArea:(id)a inFrame:(id)b ;
 - (void) frame:(id)a sourceFrame:(id)b willSubmitForm:(id)c withValues:(id)d submissionListener:(id)e ;
 - (void) willSendSubmitEventToForm:(id)a inFrame:(id)b withValues:(id)c ;


@end
