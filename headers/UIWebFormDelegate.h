
@protocol WebFormDelegate;
@interface UIWebFormDelegate : NSObject <WebFormDelegate> {

    UIWebBrowserView _webBrowserView;
    _UIWebFormDelegateEditedFormsMap _editedForms;
}

 - (void) dealloc;
 - (void) acceptedAutoFillWord:(id)a;
 - ({?=@Q}) suggestionsForString:(id)ainputIndex:(unsigned int)b;
 - (BOOL) hasCurrentSuggestions;
 - (BOOL) _shouldIgnoreFormTextChangesInFrame:(id)a;
 - (void) _didEditFormElement:(id)ainFrame:(id)b;
 - (void) _clearEditedFormsInFrame:(id)a;
 - (id) initWithWebBrowserView:(id)a;
 - (void) dataSourceHasChangedForFrame:(id)a;
 - (BOOL) formWasEdited;
 - (void) didFocusTextField:(id)ainFrame:(id)b;
 - (void) textFieldDidBeginEditing:(id)ainFrame:(id)b;
 - (void) textFieldDidEndEditing:(id)ainFrame:(id)b;
 - (void) textDidChangeInTextField:(id)ainFrame:(id)b;
 - (BOOL) textField:(id)adoCommandBySelector:(SEL)binFrame:(id)c;
 - (void) textDidChangeInTextArea:(id)ainFrame:(id)b;
 - (void) frame:(id)asourceFrame:(id)bwillSubmitForm:(id)cwithValues:(id)dsubmissionListener:(id)e;
 - (void) willSendSubmitEventToForm:(id)ainFrame:(id)bwithValues:(id)c;


@end
