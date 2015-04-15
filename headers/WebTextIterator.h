
@interface WebTextIterator : NSObject {

    @"WebTextIteratorPrivate" _private;
}

 - (id) currentNode;
 - (id) initWithRange:(id)a;
 - (void) dealloc;
 - (void) advance;
 - (BOOL) atEnd;
 - (id) currentRange;
 - (r^S) currentTextPointer;
 - (Q) currentTextLength;
 - (id) currentText;


@end
