
@interface DOMElement : DOMNode {

}
 + (id) _DOMElementFromJSContext:(^{OpaqueJSContext=})avalue:(^{OpaqueJSValue=})b;

 - (BOOL) selectable;
 - (BOOL) hasCustomLineHeight;
 - (BOOL) exceedsStructuralComplexity:(i)a;
 - (BOOL) inDocument;
 - (BOOL) isHidden;
 - (BOOL) touchCalloutEnabled;
 - (id) tapHighlightColor;
 - (void) getTextWritingDirection:(^q)aoverride:(^B)b;
 - (BOOL) matches:(id)a;
 - (BOOL) isFocused;
 - (id) innerText;
 - (i) scrollLeft;
 - (i) scrollTop;
 - (i) scrollWidth;
 - (i) scrollHeight;
 - (void) setScrollLeft:(i)a;
 - (void) setScrollTop:(i)a;
 - (id) className;
 - (id) getElementsByTagName:(id)a;
 - (i) offsetWidth;
 - (i) offsetHeight;
 - (i) structuralComplexityContribution;
 - (id) firstElementChild;
 - (id) nextElementSibling;
 - (void) remove;
 - (void) blur;
 - (void) focus;
 - (id) style;
 - (id) tagName;
 - (i) clientWidth;
 - (i) clientHeight;
 - (id) getAttribute:(id)a;
 - (^{__CTFont=}) _font;
 - (void) setAttribute:(id)avalue:(id)b;
 - (id) _getURLAttribute:(id)a;
 - (id) getElementsByTagNameNS:(id)alocalName:(id)b;
 - (id) getElementsByTagNameNS:(id)a;
 - (id) getElementsByClassName:(id)a;
 - (id) querySelector:(id)a;
 - (id) querySelectorAll:(id)a;
 - (i) offsetLeft;
 - (i) offsetTop;
 - (i) clientLeft;
 - (i) clientTop;
 - (id) offsetParent;
 - (void) setClassName:(id)a;
 - (id) classList;
 - (id) lastElementChild;
 - (id) previousElementSibling;
 - (I) childElementCount;
 - (id) webkitRegionOverset;
 - (void) setAttribute:(id)a;
 - (void) removeAttribute:(id)a;
 - (id) getAttributeNode:(id)a;
 - (id) setAttributeNode:(id)a;
 - (id) removeAttributeNode:(id)a;
 - (id) getAttributeNS:(id)alocalName:(id)b;
 - (id) getAttributeNS:(id)a;
 - (void) setAttributeNS:(id)aqualifiedName:(id)bvalue:(id)c;
 - (void) setAttributeNS:(id)a;
 - (void) removeAttributeNS:(id)alocalName:(id)b;
 - (void) removeAttributeNS:(id)a;
 - (id) getAttributeNodeNS:(id)alocalName:(id)b;
 - (id) getAttributeNodeNS:(id)a;
 - (id) setAttributeNodeNS:(id)a;
 - (BOOL) hasAttribute:(id)a;
 - (BOOL) hasAttributeNS:(id)alocalName:(id)b;
 - (BOOL) hasAttributeNS:(id)a;
 - (void) scrollIntoView:(BOOL)a;
 - (void) scrollIntoViewIfNeeded:(BOOL)a;
 - (void) scrollByLines:(i)a;
 - (void) scrollByPages:(i)a;
 - (BOOL) webkitMatchesSelector:(id)a;


@end
