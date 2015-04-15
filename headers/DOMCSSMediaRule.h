
@interface DOMCSSMediaRule : DOMCSSRule {

}

 - (id) media;
 - (id) cssRules;
 - (unsigned int) insertRule:(id)a index:(unsigned int)b ;
 - (unsigned int) insertRule:(id)a ;
 - (void) deleteRule:(unsigned int)a ;


@end
