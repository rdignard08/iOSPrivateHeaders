
@protocol WebFormDelegate;
@interface UIWebFormDelegate : NSObject <WebFormDelegate> {

    UIWebBrowserView* _webBrowserView;
    _UIWebFormDelegateEditedFormsMap* _editedForms;
}

 - (void) dealloc;
 - (void) acceptedAutoFillWord:(id)a ;
 - ({?=@Q}) suggestionsForString:(id)a inputIndex:(unsigned int)b ;
 - (BOOL) hasCurrentSuggestions;
 - (BOOL) _shouldIgnoreFormTextChangesInFrame:(id)a ;
 - (void) _didEditFormElement:(id)a inFrame:(id)b ;
 - (void) _clearEditedFormsInFrame:(id)a ;
 - (id) initWithWebBrowserView:(id)a ;
 - (void) dataSourceHasChangedForFrame:(id)a ;
 - (BOOL) formWasEdited;
 - (void) didFocusTextField:(id)a inFrame:(id)b ;
 - (void) textFieldDidBeginEditing:(id)a inFrame:(id)b ;
 - (void) textFieldDidEndEditing:(id)a inFrame:(id)b ;
 - (void) textDidChangeInTextField:(id)a inFrame:(id)b ;
 - (BOOL) textField:(id)a doCommandBySelector:(SEL)b inFrame:(id)c ;
 - (void) textDidChangeInTextArea:(id)a inFrame:(id)b ;
 - (void) frame:(id)a sourceFrame:(id)b willSubmitForm:(id)c withValues:(id)d submissionListener:(id)e ;
 - (void) willSendSubmitEventToForm:(id)a inFrame:(id)b withValues:(id)c ;


@end
