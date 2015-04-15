
@interface DOMTreeWalker : DOMObject {

}

 - (id) currentNode;
 - (void) setCurrentNode:(id)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) previousSibling;
 - (id) nextNode;
 - (id) firstChild;
 - (id) nextSibling;
 - (id) parentNode;
 - (id) filter;
 - (id) lastChild;
 - (id) root;
 - (unsigned int) whatToShow;
 - (BOOL) expandEntityReferences;
 - (id) previousNode;


@end
