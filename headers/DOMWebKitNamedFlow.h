
@interface DOMWebKitNamedFlow : DOMObject {

}

 - (void) dealloc;
 - (void) finalize;
 - (id) name;
 - (void) addEventListener:(id)a listener:(id)b useCapture:(BOOL)c ;
 - (void) removeEventListener:(id)a listener:(id)b useCapture:(BOOL)c ;
 - (BOOL) dispatchEvent:(id)a ;
 - (BOOL) overset;
 - (int) firstEmptyRegionIndex;
 - (id) getRegionsByContent:(id)a ;
 - (id) getRegions;
 - (id) getContent;


@end
