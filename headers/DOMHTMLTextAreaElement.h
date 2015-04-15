
@interface DOMHTMLTextAreaElement : DOMHTMLElement {

}

 - (void) _startAssistingDocumentView:(id)a ;
 - (void) _stopAssistingDocumentView:(id)a ;
 - (BOOL) _requiresAccessoryView;
 - (BOOL) _requiresInputView;
 - (BOOL) _supportsAutoFill;
 - (id) _textFormElement;
 - (BOOL) nodeCanBecomeFirstResponder;
 - (BOOL) isEditing;
 - (void) setSelectionWithPoint:({CGPoint=dd})a ;
 - (BOOL) isTextControl;
 - (id) textInputTraits;
 - (id) startPosition;
 - (id) endPosition;
 - (void) setRows:(int)a ;
 - (id) name;
 - (void) select;
 - (void) setPlaceholder:(id)a ;
 - (id) form;
 - (int) _autocapitalizeType;
 - (BOOL) autocorrect;
 - (id) placeholder;
 - (int) rows;
 - (BOOL) disabled;
 - (BOOL) readOnly;
 - (BOOL) _isEdited;
 - (int) structuralComplexityContribution;
 - (id) type;
 - (void) setValue:(id)a ;
 - (id) value;
 - (void) setName:(id)a ;
 - (void) setReadOnly:(BOOL)a ;
 - (void) setDisabled:(BOOL)a ;
 - (id) accessKey;
 - (void) setAccessKey:(id)a ;
 - (BOOL) autofocus;
 - (void) setAutofocus:(BOOL)a ;
 - (BOOL) willValidate;
 - (id) validity;
 - (id) validationMessage;
 - (id) labels;
 - (BOOL) checkValidity;
 - (void) setCustomValidity:(id)a ;
 - (void) setAutocorrect:(BOOL)a ;
 - (id) autocapitalize;
 - (void) setAutocapitalize:(id)a ;
 - (int) cols;
 - (void) setCols:(int)a ;
 - (id) dirName;
 - (void) setDirName:(id)a ;
 - (BOOL) required;
 - (void) setRequired:(BOOL)a ;
 - (id) defaultValue;
 - (void) setDefaultValue:(id)a ;
 - (int) selectionStart;
 - (void) setSelectionStart:(int)a ;
 - (int) selectionEnd;
 - (void) setSelectionEnd:(int)a ;
 - (id) selectionDirection;
 - (void) setSelectionDirection:(id)a ;
 - (void) setRangeText:(id)a ;
 - (void) setRangeText:(id)a start:(unsigned int)b end:(unsigned int)c selectionMode:(id)d ;
 - (void) setSelectionRange:(int)a end:(int)b ;
 - (id) wrap;
 - (void) setWrap:(id)a ;
 - (unsigned int) textLength;
 - (int) maxLength;
 - (void) setMaxLength:(int)a ;


@end
