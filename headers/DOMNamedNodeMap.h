
@interface DOMNamedNodeMap : DOMObject {

}

 - (void) dealloc;
 - (void) finalize;
 - (id) item:(unsigned int)a;
 - (unsigned int) length;
 - (id) getNamedItem:(id)a;
 - (id) setNamedItem:(id)a;
 - (id) removeNamedItem:(id)a;
 - (id) getNamedItemNS:(id)alocalName:(id)b;
 - (id) getNamedItemNS:(id)a;
 - (id) setNamedItemNS:(id)a;
 - (id) removeNamedItemNS:(id)alocalName:(id)b;
 - (id) removeNamedItemNS:(id)a;


@end
