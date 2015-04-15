
@interface DOMImplementation : DOMObject {

}

 - (void) dealloc;
 - (void) finalize;
 - (BOOL) hasFeature:(id)aversion:(id)b;
 - (BOOL) hasFeature:(id)a;
 - (id) createDocumentType:(id)apublicId:(id)bsystemId:(id)c;
 - (id) createDocumentType:(id)a;
 - (id) createDocument:(id)aqualifiedName:(id)bdoctype:(id)c;
 - (id) createDocument:(id)a;
 - (id) createCSSStyleSheet:(id)amedia:(id)b;
 - (id) createCSSStyleSheet:(id)a;
 - (id) createHTMLDocument:(id)a;


@end
