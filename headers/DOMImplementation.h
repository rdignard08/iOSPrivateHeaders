
@interface DOMImplementation : DOMObject {

}

 - (void) dealloc;
 - (void) finalize;
 - (BOOL) hasFeature:(id)a version:(id)b ;
 - (BOOL) hasFeature:(id)a ;
 - (id) createDocumentType:(id)a publicId:(id)b systemId:(id)c ;
 - (id) createDocumentType:(id)a ;
 - (id) createDocument:(id)a qualifiedName:(id)b doctype:(id)c ;
 - (id) createDocument:(id)a ;
 - (id) createCSSStyleSheet:(id)a media:(id)b ;
 - (id) createCSSStyleSheet:(id)a ;
 - (id) createHTMLDocument:(id)a ;


@end
