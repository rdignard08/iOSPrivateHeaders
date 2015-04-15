
@interface DOMElement : DOMNode {

}
 + (id) _DOMElementFromJSContext:(^{OpaqueJSContext=})avalue:(^{OpaqueJSValue=})b;

 - (BOOL) selectable;
 - (BOOL) hasCustomLineHeight;
 - (BOOL) exceedsStructuralComplexity:(int)a ;
 - (BOOL) inDocument;
 - (BOOL) isHidden;
 - (BOOL) touchCalloutEnabled;
 - (id) tapHighlightColor;
 - (void) getTextWritingDirection:(^q)a override:(^B)b ;
 - (BOOL) matches:(id)a ;
 - (BOOL) isFocused;
 - (id) innerText;
 - (int) scrollLeft;
 - (int) scrollTop;
 - (int) scrollWidth;
 - (int) scrollHeight;
 - (void) setScrollLeft:(int)a ;
 - (void) setScrollTop:(int)a ;
 - (id) className;
 - (id) getElementsByTagName:(id)a ;
 - (int) offsetWidth;
 - (int) offsetHeight;
 - (int) structuralComplexityContribution;
 - (id) firstElementChild;
 - (id) nextElementSibling;
 - (void) remove;
 - (void) blur;
 - (void) focus;
 - (id) style;
 - (id) tagName;
 - (int) clientWidth;
 - (int) clientHeight;
 - (id) getAttribute:(id)a ;
 - (^{__CTFont=}) _font;
 - (void) setAttribute:(id)a value:(id)b ;
 - (id) _getURLAttribute:(id)a ;
 - (id) getElementsByTagNameNS:(id)a localName:(id)b ;
 - (id) getElementsByTagNameNS:(id)a ;
 - (id) getElementsByClassName:(id)a ;
 - (id) querySelector:(id)a ;
 - (id) querySelectorAll:(id)a ;
 - (int) offsetLeft;
 - (int) offsetTop;
 - (int) clientLeft;
 - (int) clientTop;
 - (id) offsetParent;
 - (void) setClassName:(id)a ;
 - (id) classList;
 - (id) lastElementChild;
 - (id) previousElementSibling;
 - (unsigned int) childElementCount;
 - (id) webkitRegionOverset;
 - (void) setAttribute:(id)a ;
 - (void) removeAttribute:(id)a ;
 - (id) getAttributeNode:(id)a ;
 - (id) setAttributeNode:(id)a ;
 - (id) removeAttributeNode:(id)a ;
 - (id) getAttributeNS:(id)a localName:(id)b ;
 - (id) getAttributeNS:(id)a ;
 - (void) setAttributeNS:(id)a qualifiedName:(id)b value:(id)c ;
 - (void) setAttributeNS:(id)a ;
 - (void) removeAttributeNS:(id)a localName:(id)b ;
 - (void) removeAttributeNS:(id)a ;
 - (id) getAttributeNodeNS:(id)a localName:(id)b ;
 - (id) getAttributeNodeNS:(id)a ;
 - (id) setAttributeNodeNS:(id)a ;
 - (BOOL) hasAttribute:(id)a ;
 - (BOOL) hasAttributeNS:(id)a localName:(id)b ;
 - (BOOL) hasAttributeNS:(id)a ;
 - (void) scrollIntoView:(BOOL)a ;
 - (void) scrollIntoViewIfNeeded:(BOOL)a ;
 - (void) scrollByLines:(int)a ;
 - (void) scrollByPages:(int)a ;
 - (BOOL) webkitMatchesSelector:(id)a ;


@end
