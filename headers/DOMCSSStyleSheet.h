
@interface DOMCSSStyleSheet : DOMStyleSheet {

}

 - (id) cssRules;
 - (unsigned int) insertRule:(id)aindex:(unsigned int)b;
 - (unsigned int) insertRule:(id)a;
 - (void) deleteRule:(unsigned int)a;
 - (id) ownerRule;
 - (id) rules;
 - (int) addRule:(id)astyle:(id)bindex:(unsigned int)c;
 - (void) removeRule:(unsigned int)a;


@end
