
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

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) init;
 - (void) insertElement:(^v)arange:({_NSRange=QQ})bcoalesceRuns:(BOOL)c;
 - (void) removeElementsInRange:({_NSRange=QQ})acoalesceRuns:(BOOL)b;
 - (id) initWithElementSize:(unsigned long long)acapacity:(unsigned long long)b;
 - (void) replaceElementsInRange:({_NSRange=QQ})awithElement:(^v)bcoalesceRuns:(BOOL)c;
 - (void) _allocData:(unsigned long long)a;
 - (void) _deallocData;
 - (id) initWithRunStorage:(id)a;
 - (void) _reallocData:(unsigned long long)a;
 - (unsigned long long) elementSize;
 - (^v) elementAtIndex:(unsigned long long)aeffectiveRange:(^{_NSRange=QQ})b;
 - (void) _moveGapToBlockIndex:(unsigned long long)a;
 - (void) _consistencyError:(long long)astartAtZeroError:(BOOL)bcacheError:(BOOL)cinconsistentBlockError:(BOOL)d;
 - (void) _ensureCapacity:(unsigned long long)a;
 - (void) _moveGapAndMergeWithBlockRange:({_NSRange=QQ})a;
 - (void) _consistencyCheck:(long long)a;


@end
