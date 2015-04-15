
@interface DOMHTMLFieldSetElement : DOMHTMLElement {

}

 - (id) name;
 - (id) form;
 - (BOOL) disabled;
 - (id) type;
 - (void) setName:(id)a;
 - (id) elements;
 - (void) setDisabled:(BOOL)a;
 - (BOOL) willValidate;
 - (id) validity;
 - (id) validationMessage;
 - (BOOL) checkValidity;
 - (void) setCustomValidity:(id)a;


@end
