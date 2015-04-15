
@interface DOMHTMLAreaElement : DOMHTMLElement {

}

 - (id) absoluteQuadsAtPoint:({CGPoint=dd})a;
 - (id) target;
 - (id) host;
 - (id) port;
 - (void) setTarget:(id)a;
 - (void) setShape:(id)a;
 - (id) absoluteLinkURL;
 - (id) href;
 - (void) setHref:(id)a;
 - (id) shape;
 - (id) absoluteQuadsWithOwner:(id)a;
 - (id) protocol;
 - (id) hostname;
 - (id) coords;
 - (void) setCoords:(id)a;
 - (id) ping;
 - (void) setPing:(id)a;
 - (id) accessKey;
 - (void) setAccessKey:(id)a;
 - (id) hashName;
 - (id) pathname;
 - (id) search;
 - (id) alt;
 - (void) setAlt:(id)a;
 - (BOOL) noHref;
 - (void) setNoHref:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingBoxWithOwner:(id)a;
 - ({_WKQuad={CGPoint=dd}{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}) absoluteQuadWithOwner:(id)a;
 - (id) boundingBoxesWithOwner:(id)a;


@end
