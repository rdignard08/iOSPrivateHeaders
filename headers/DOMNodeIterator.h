
@interface DOMNodeIterator : DOMObject {

}

 - (void) dealloc;
 - (void) finalize;
 - (id) nextNode;
 - (id) filter;
 - (void) detach;
 - (id) root;
 - (unsigned int) whatToShow;
 - (BOOL) expandEntityReferences;
 - (id) referenceNode;
 - (BOOL) pointerBeforeReferenceNode;
 - (id) previousNode;


@end
