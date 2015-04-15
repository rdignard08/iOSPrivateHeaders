
@interface DOMHTMLKeygenElement : DOMHTMLElement {

}

 - (id) name;
 - (id) form;
 - (BOOL) disabled;
 - (id) challenge;
 - (id) type;
 - (void) setName:(id)a ;
 - (void) setDisabled:(BOOL)a ;
 - (BOOL) autofocus;
 - (void) setAutofocus:(BOOL)a ;
 - (BOOL) willValidate;
 - (id) validity;
 - (id) validationMessage;
 - (id) labels;
 - (BOOL) checkValidity;
 - (void) setCustomValidity:(id)a ;
 - (void) setChallenge:(id)a ;
 - (id) keytype;
 - (void) setKeytype:(id)a ;


@end
