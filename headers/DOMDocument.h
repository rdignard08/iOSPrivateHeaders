
@interface DOMDocument : DOMNode {

}

 - (id) _documentRange;
 - (id) webFrame;
 - (id) URLWithAttributeString:(id)a ;
 - (id) title;
 - (void) setTitle:(id)a ;
 - (id) domain;
 - (id) images;
 - (id) origin;
 - (id) links;
 - (id) forms;
 - (id) getElementsByTagName:(id)a ;
 - (id) createNodeIterator:(id)a whatToShow:(unsigned int)b filter:(id)c expandEntityReferences:(BOOL)d ;
 - (id) URL;
 - (void) setCookie:(id)a ;
 - (id) getComputedStyle:(id)a pseudoElement:(id)b ;
 - (id) getComputedStyle:(id)a ;
 - (id) createElement:(id)a ;
 - (id) createElementNS:(id)a qualifiedName:(id)b ;
 - (id) createElementNS:(id)a ;
 - (id) createDocumentFragment;
 - (BOOL) hidden;
 - (void) setBody:(id)a ;
 - (id) body;
 - (id) characterSet;
 - (id) createRange;
 - (id) documentElement;
 - (id) createCSSStyleDeclaration;
 - (id) doctype;
 - (id) implementation;
 - (id) inputEncoding;
 - (id) xmlEncoding;
 - (id) xmlVersion;
 - (void) setXmlVersion:(id)a ;
 - (BOOL) xmlStandalone;
 - (void) setXmlStandalone:(BOOL)a ;
 - (id) documentURI;
 - (void) setDocumentURI:(id)a ;
 - (id) defaultView;
 - (id) styleSheets;
 - (id) referrer;
 - (id) cookie;
 - (id) head;
 - (id) applets;
 - (id) anchors;
 - (id) lastModified;
 - (id) charset;
 - (void) setCharset:(id)a ;
 - (id) defaultCharset;
 - (id) readyState;
 - (id) preferredStylesheetSet;
 - (id) selectedStylesheetSet;
 - (void) setSelectedStylesheetSet:(id)a ;
 - (id) activeElement;
 - (id) compatMode;
 - (id) visibilityState;
 - (id) currentScript;
 - (id) createTextNode:(id)a ;
 - (id) createComment:(id)a ;
 - (id) createCDATASection:(id)a ;
 - (id) createProcessingInstruction:(id)a data:(id)b ;
 - (id) createProcessingInstruction:(id)a ;
 - (id) createAttribute:(id)a ;
 - (id) createEntityReference:(id)a ;
 - (id) importNode:(id)a deep:(BOOL)b ;
 - (id) importNode:(id)a ;
 - (id) createAttributeNS:(id)a qualifiedName:(id)b ;
 - (id) createAttributeNS:(id)a ;
 - (id) getElementsByTagNameNS:(id)a localName:(id)b ;
 - (id) getElementsByTagNameNS:(id)a ;
 - (id) getElementById:(id)a ;
 - (id) adoptNode:(id)a ;
 - (id) createEvent:(id)a ;
 - (id) createNodeIterator:(id)a ;
 - (id) createTreeWalker:(id)a whatToShow:(unsigned int)b filter:(id)c expandEntityReferences:(BOOL)d ;
 - (id) createTreeWalker:(id)a ;
 - (id) getOverrideStyle:(id)a pseudoElement:(id)b ;
 - (id) getOverrideStyle:(id)a ;
 - (id) createExpression:(id)a resolver:(id)b ;
 - (id) createExpression:(id)a ;
 - (id) createNSResolver:(id)a ;
 - (id) evaluate:(id)a contextNode:(id)b resolver:(id)c type:(unsigned short)d inResult:(id)e ;
 - (id) evaluate:(id)a ;
 - (BOOL) execCommand:(id)a userInterface:(BOOL)b value:(id)c ;
 - (BOOL) execCommand:(id)a userInterface:(BOOL)b ;
 - (BOOL) execCommand:(id)a ;
 - (BOOL) queryCommandEnabled:(id)a ;
 - (BOOL) queryCommandIndeterm:(id)a ;
 - (BOOL) queryCommandState:(id)a ;
 - (BOOL) queryCommandSupported:(id)a ;
 - (id) queryCommandValue:(id)a ;
 - (id) getElementsByName:(id)a ;
 - (id) elementFromPoint:(int)a y:(int)b ;
 - (id) caretRangeFromPoint:(int)a y:(int)b ;
 - (id) getMatchedCSSRules:(id)a pseudoElement:(id)b ;
 - (id) getMatchedCSSRules:(id)a pseudoElement:(id)b authorOnly:(BOOL)c ;
 - (id) getElementsByClassName:(id)a ;
 - (BOOL) hasFocus;
 - (id) querySelector:(id)a ;
 - (id) querySelectorAll:(id)a ;
 - (id) webkitGetNamedFlows;
 - (id) createTouch:(id)a target:(id)b identifier:(int)c pageX:(int)d pageY:(int)e screenX:(int)f screenY:(int)g ;
 - (id) createTouchList;


@end
