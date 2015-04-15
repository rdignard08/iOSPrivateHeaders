
@interface DOMCSSStyleSheet : DOMStyleSheet {

}

 - (id) cssRules;
 - (unsigned int) insertRule:(id)a index:(unsigned int)b ;
 - (unsigned int) insertRule:(id)a ;
 - (void) deleteRule:(unsigned int)a ;
 - (id) ownerRule;
 - (id) rules;
 - (int) addRule:(id)a style:(id)b index:(unsigned int)c ;
 - (void) removeRule:(unsigned int)a ;


@end
