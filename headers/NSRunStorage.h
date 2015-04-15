
@protocol NSCopying;
@interface NSRunStorage : NSObject <NSCopying> {

    unsigned long long _count;
    unsigned long long _elementSize;
    unsigned long long _numBlocks;
    unsigned long long _maxBlocks;
    unsigned long long _indexDeltaStartBlock;
    long long _indexDelta;
    ^{_NSRunBlock=Q[0C]} _runs;
    unsigned long long _cachedBlock;
    {_NSRange="location"Q"length"Q} _cachedBlockRange;
    unsigned long long _gapBlockIndex;
}
 + (void) initialize;
 + (void) _setConsistencyCheckingEnabled:(BOOL)asuperCheckEnabled:(BOOL)b;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) init;
 - (void) insertElement:(^v)a range:({_NSRange=QQ})b coalesceRuns:(BOOL)c ;
 - (void) removeElementsInRange:({_NSRange=QQ})a coalesceRuns:(BOOL)b ;
 - (id) initWithElementSize:(unsigned long long)a capacity:(unsigned long long)b ;
 - (void) replaceElementsInRange:({_NSRange=QQ})a withElement:(^v)b coalesceRuns:(BOOL)c ;
 - (void) _allocData:(unsigned long long)a ;
 - (void) _deallocData;
 - (id) initWithRunStorage:(id)a ;
 - (void) _reallocData:(unsigned long long)a ;
 - (unsigned long long) elementSize;
 - (^v) elementAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (void) _moveGapToBlockIndex:(unsigned long long)a ;
 - (void) _consistencyError:(long long)a startAtZeroError:(BOOL)b cacheError:(BOOL)c inconsistentBlockError:(BOOL)d ;
 - (void) _ensureCapacity:(unsigned long long)a ;
 - (void) _moveGapAndMergeWithBlockRange:({_NSRange=QQ})a ;
 - (void) _consistencyCheck:(long long)a ;


@end
