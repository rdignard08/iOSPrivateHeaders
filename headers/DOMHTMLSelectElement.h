
@interface DOMHTMLSelectElement : DOMHTMLElement {

}

 - (void) _startAssistingDocumentView:(id)a;
 - (void) _stopAssistingDocumentView:(id)a;
 - (BOOL) _requiresAccessoryView;
 - (BOOL) _requiresInputView;
 - (BOOL) _supportsAutoFill;
 - (BOOL) nodeCanBecomeFirstResponder;
 - (id) createPeripheral;
 - (void) remove:(i)a;
 - (i) size;
 - (id) name;
 - (i) selectedIndex;
 - (void) setSelectedIndex:(i)a;
 - (id) item:(I)a;
 - (id) form;
 - (BOOL) disabled;
 - (void) _activateItemAtIndex:(i)a;
 - (void) _activateItemAtIndex:(i)aallowMultipleSelection:(BOOL)b;
 - (BOOL) multiple;
 - (I) completeLength;
 - (id) listItemAtIndex:(i)a;
 - (i) structuralComplexityContribution;
 - (i) length;
 - (id) type;
 - (id) options;
 - (void) setValue:(id)a;
 - (id) value;
 - (void) setName:(id)a;
 - (void) setSize:(i)a;
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
