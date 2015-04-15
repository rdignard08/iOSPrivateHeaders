
@interface DOMHTMLSelectElement : DOMHTMLElement {

}

 - (void) _startAssistingDocumentView:(id)a;
 - (void) _stopAssistingDocumentView:(id)a;
 - (BOOL) _requiresAccessoryView;
 - (BOOL) _requiresInputView;
 - (BOOL) _supportsAutoFill;
 - (BOOL) nodeCanBecomeFirstResponder;
 - (id) createPeripheral;
 - (void) remove:(int)a;
 - (int) size;
 - (id) name;
 - (int) selectedIndex;
 - (void) setSelectedIndex:(int)a;
 - (id) item:(unsigned int)a;
 - (id) form;
 - (BOOL) disabled;
 - (void) _activateItemAtIndex:(int)a;
 - (void) _activateItemAtIndex:(int)aallowMultipleSelection:(BOOL)b;
 - (BOOL) multiple;
 - (unsigned int) completeLength;
 - (id) listItemAtIndex:(int)a;
 - (int) structuralComplexityContribution;
 - (int) length;
 - (id) type;
 - (id) options;
 - (void) setValue:(id)a;
 - (id) value;
 - (void) setName:(id)a;
 - (void) setSize:(int)a;
 - (void) setDisabled:(BOOL)a;
 - (id) namedItem:(id)a;
 - (BOOL) autofocus;
 - (void) setAutofocus:(BOOL)a;
 - (BOOL) willValidate;
 - (id) validity;
 - (id) validationMessage;
 - (id) labels;
 - (BOOL) checkValidity;
 - (void) setCustomValidity:(id)a;
 - (void) setMultiple:(BOOL)a;
 - (BOOL) required;
 - (void) setRequired:(BOOL)a;
 - (id) selectedOptions;
 - (void) add:(id)abefore:(id)b;
 - (void) add:(id)a;


@end
