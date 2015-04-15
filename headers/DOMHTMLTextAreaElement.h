
@interface DOMHTMLTextAreaElement : DOMHTMLElement {

}

 - (void) _startAssistingDocumentView:(id)a;
 - (void) _stopAssistingDocumentView:(id)a;
 - (BOOL) _requiresAccessoryView;
 - (BOOL) _requiresInputView;
 - (BOOL) _supportsAutoFill;
 - (id) _textFormElement;
 - (BOOL) nodeCanBecomeFirstResponder;
 - (BOOL) isEditing;
 - (void) setSelectionWithPoint:({CGPoint=dd})a;
 - (BOOL) isTextControl;
 - (id) textInputTraits;
 - (id) startPosition;
 - (id) endPosition;
 - (void) setRows:(i)a;
 - (id) name;
 - (void) select;
 - (void) setPlaceholder:(id)a;
 - (id) form;
 - (i) _autocapitalizeType;
 - (BOOL) autocorrect;
 - (id) placeholder;
 - (i) rows;
 - (BOOL) disabled;
 - (BOOL) readOnly;
 - (BOOL) _isEdited;
 - (i) structuralComplexityContribution;
 - (id) type;
 - (void) setValue:(id)a;
 - (id) value;
 - (void) setName:(id)a;
 - (void) setReadOnly:(BOOL)a;
 - (void) setDisabled:(BOOL)a;
 - (id) accessKey;
 - (void) setAccessKey:(id)a;
 - (BOOL) autofocus;
 - (void) setAutofocus:(BOOL)a;
 - (BOOL) willValidate;
 - (id) validity;
 - (id) validationMessage;
 - (id) labels;
 - (BOOL) checkValidity;
 - (void) setCustomValidity:(id)a;
 - (void) setAutocorrect:(BOOL)a;
 - (id) autocapitalize;
 - (void) setAutocapitalize:(id)a;
 - (i) cols;
 - (void) setCols:(i)a;
 - (id) dirName;
 - (void) setDirName:(id)a;
 - (BOOL) required;
 - (void) setRequired:(BOOL)a;
 - (id) defaultValue;
 - (void) setDefaultValue:(id)a;
 - (i) selectionStart;
 - (void) setSelectionStart:(i)a;
 - (i) selectionEnd;
 - (void) setSelectionEnd:(i)a;
 - (id) selectionDirection;
 - (void) setSelectionDirection:(id)a;
 - (void) setRangeText:(id)a;
 - (void) setRangeText:(id)astart:(I)bend:(I)cselectionMode:(id)d;
 - (void) setSelectionRange:(i)aend:(i)b;
 - (id) wrap;
 - (void) setWrap:(id)a;
 - (I) textLength;
 - (i) maxLength;
 - (void) setMaxLength:(i)a;


@end
