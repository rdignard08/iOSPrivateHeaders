
@interface DOMHTMLInputElement : DOMHTMLElement {

}

 - (void) _startAssistingDocumentView:(id)a;
 - (void) _stopAssistingDocumentView:(id)a;
 - (BOOL) _requiresAccessoryView;
 - (BOOL) _requiresInputView;
 - (BOOL) _supportsAutoFill;
 - (BOOL) _supportsAccessoryClear;
 - (void) _accessoryClear;
 - (id) _textFormElement;
 - (BOOL) isAssistedDateType;
 - (BOOL) nodeCanBecomeFirstResponder;
 - (BOOL) isLikelyToBeginPageLoad;
 - (BOOL) isEditing;
 - (void) setSelectionWithPoint:({CGPoint=dd})a;
 - (BOOL) isTextControl;
 - (BOOL) isSecure;
 - (long long) keyboardType;
 - (id) textInputTraits;
 - (id) text;
 - (id) createPeripheral;
 - (void) _setAutofilled:(BOOL)a;
 - (id) startPosition;
 - (id) endPosition;
 - (void) setMax:(id)a;
 - (id) max;
 - (id) pattern;
 - (id) size;
 - (void) setType:(id)a;
 - (id) name;
 - (void) select;
 - (void) setChecked:(BOOL)a;
 - (void) setPlaceholder:(id)a;
 - (id) form;
 - (int) _autocapitalizeType;
 - (BOOL) autocorrect;
 - (BOOL) _isTextField;
 - (id) absoluteImageURL;
 - (id) placeholder;
 - (BOOL) disabled;
 - (BOOL) multiple;
 - (BOOL) readOnly;
 - (BOOL) _isEdited;
 - (int) structuralComplexityContribution;
 - (void) setIndeterminate:(BOOL)a;
 - (void) setValueWithChangeEvent:(id)a;
 - (void) setValueAsNumberWithChangeEvent:(double)a;
 - (double) valueAsNumber;
 - (id) type;
 - (void) setValue:(id)a;
 - (id) value;
 - (void) setName:(id)a;
 - (void) setSize:(id)a;
 - (void) setReadOnly:(BOOL)a;
 - (void) setDisabled:(BOOL)a;
 - (id) step;
 - (BOOL) _isAutofilled;
 - (void) _setAutofilled:(BOOL)a;
 - (id) accessKey;
 - (void) setAccessKey:(id)a;
 - (id) align;
 - (void) setAlign:(id)a;
 - (id) alt;
 - (void) setAlt:(id)a;
 - (BOOL) autofocus;
 - (void) setAutofocus:(BOOL)a;
 - (id) formAction;
 - (void) setFormAction:(id)a;
 - (id) formEnctype;
 - (void) setFormEnctype:(id)a;
 - (id) formMethod;
 - (void) setFormMethod:(id)a;
 - (BOOL) formNoValidate;
 - (void) setFormNoValidate:(BOOL)a;
 - (id) formTarget;
 - (void) setFormTarget:(id)a;
 - (BOOL) willValidate;
 - (id) validity;
 - (id) validationMessage;
 - (id) labels;
 - (BOOL) checkValidity;
 - (void) setCustomValidity:(id)a;
 - (void) click;
 - (id) src;
 - (void) setSrc:(id)a;
 - (id) autocomplete;
 - (void) setAutocomplete:(id)a;
 - (void) setAutocorrect:(BOOL)a;
 - (id) autocapitalize;
 - (void) setAutocapitalize:(id)a;
 - (id) useMap;
 - (void) setUseMap:(id)a;
 - (id) altDisplayString;
 - (id) accept;
 - (void) setAccept:(id)a;
 - (BOOL) defaultChecked;
 - (void) setDefaultChecked:(BOOL)a;
 - (BOOL) checked;
 - (id) dirName;
 - (void) setDirName:(id)a;
 - (id) files;
 - (void) setFiles:(id)a;
 - (BOOL) indeterminate;
 - (id) min;
 - (void) setMin:(id)a;
 - (void) setMultiple:(BOOL)a;
 - (void) setPattern:(id)a;
 - (BOOL) required;
 - (void) setRequired:(BOOL)a;
 - (void) setStep:(id)a;
 - (id) defaultValue;
 - (void) setDefaultValue:(id)a;
 - (double) valueAsDate;
 - (void) setValueAsDate:(double)a;
 - (void) setValueAsNumber:(double)a;
 - (int) selectionStart;
 - (void) setSelectionStart:(int)a;
 - (int) selectionEnd;
 - (void) setSelectionEnd:(int)a;
 - (id) selectionDirection;
 - (void) setSelectionDirection:(id)a;
 - (BOOL) incremental;
 - (void) setIncremental:(BOOL)a;
 - (void) stepUp:(int)a;
 - (void) stepDown:(int)a;
 - (void) setRangeText:(id)a;
 - (void) setRangeText:(id)astart:(unsigned int)bend:(unsigned int)cselectionMode:(id)d;
 - (void) setSelectionRange:(int)aend:(int)b;
 - (void) setValueForUser:(id)a;
 - (int) maxLength;
 - (void) setMaxLength:(int)a;
 - (unsigned int) width;
 - (unsigned int) height;
 - (void) setWidth:(unsigned int)a;
 - (void) setHeight:(unsigned int)a;


@end
