
@interface DOMXPathResult : DOMObject {

}

 - (void) dealloc;
 - (void) finalize;
 - (id) stringValue;
 - (double) numberValue;
 - (BOOL) booleanValue;
 - (id) singleNodeValue;
 - (BOOL) invalidIteratorState;
 - (unsigned int) snapshotLength;
 - (id) iterateNext;
 - (id) snapshotItem:(unsigned int)a ;
 - (unsigned short) resultType;


@end
