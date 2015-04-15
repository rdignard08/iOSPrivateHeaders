
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
 - (unsigned long long) currentTextLength;
 - (id) currentText;


@end
