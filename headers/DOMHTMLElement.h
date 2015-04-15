
@interface DOMHTMLElement : DOMElement {

}

 - (id) title;
 - (void) setTitle:(id)a ;
 - (int) scrollXOffset;
 - (int) scrollYOffset;
 - (void) setScrollXOffset:(int)a scrollYOffset:(int)b ;
 - (void) setContentEditable:(id)a ;
 - (id) innerHTML;
 - (id) innerText;
 - (BOOL) isContentEditable;
 - (id) idName;
 - (int) structuralComplexityContribution;
 - (void) setInnerHTML:(id)a ;
 - (BOOL) hidden;
 - (void) setScrollXOffset:(int)a scrollYOffset:(int)b adjustForIOSCaret:(BOOL)c ;
 - (void) absolutePosition:(^i)a ;
 - (id) accessKey;
 - (void) setAccessKey:(id)a ;
 - (void) click;
 - (id) dir;
 - (void) setDir:(id)a ;
 - (void) setIdName:(id)a ;
 - (id) lang;
 - (void) setLang:(id)a ;
 - (BOOL) translate;
 - (void) setTranslate:(BOOL)a ;
 - (int) tabIndex;
 - (void) setTabIndex:(int)a ;
 - (BOOL) draggable;
 - (void) setDraggable:(BOOL)a ;
 - (id) webkitdropzone;
 - (void) setWebkitdropzone:(id)a ;
 - (void) setHidden:(BOOL)a ;
 - (void) setInnerText:(id)a ;
 - (id) outerHTML;
 - (void) setOuterHTML:(id)a ;
 - (id) outerText;
 - (void) setOuterText:(id)a ;
 - (id) children;
 - (id) contentEditable;
 - (BOOL) spellcheck;
 - (void) setSpellcheck:(BOOL)a ;
 - (id) titleDisplayString;
 - (id) insertAdjacentElement:(id)a element:(id)b ;
 - (void) insertAdjacentHTML:(id)a html:(id)b ;
 - (void) insertAdjacentText:(id)a text:(id)b ;


@end
