
@interface DOMNodeIterator : DOMObject {

}

 - (void) dealloc;
 - (void) finalize;
 - (id) nextNode;
 - (id) filter;
 - (void) detach;
 - (id) root;
 - (I) whatToShow;
 - (BOOL) expandEntityReferences;
 - (id) referenceNode;
 - (BOOL) pointerBeforeReferenceNode;
 - (id) previousNode;


@end
