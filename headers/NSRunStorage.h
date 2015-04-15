
@protocol NSCopying;
@interface NSRunStorage : NSObject <NSCopying> {

    Q _count;
    Q _elementSize;
    Q _numBlocks;
    Q _maxBlocks;
    Q _indexDeltaStartBlock;
    q _indexDelta;
    ^{_NSRunBlock=Q[0C]} _runs;
    Q _cachedBlock;
    {_NSRange="location"Q"length"Q} _cachedBlockRange;
    Q _gapBlockIndex;
}
 + (void) initialize;
 + (void) _setConsistencyCheckingEnabled:(BOOL)asuperCheckEnabled:(BOOL)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) count;
 - (id) init;
 - (void) insertElement:(^v)arange:({_NSRange=QQ})bcoalesceRuns:(BOOL)c;
 - (void) removeElementsInRange:({_NSRange=QQ})acoalesceRuns:(BOOL)b;
 - (id) initWithElementSize:(Q)acapacity:(Q)b;
 - (void) replaceElementsInRange:({_NSRange=QQ})awithElement:(^v)bcoalesceRuns:(BOOL)c;
 - (void) _allocData:(Q)a;
 - (void) _deallocData;
 - (id) initWithRunStorage:(id)a;
 - (void) _reallocData:(Q)a;
 - (Q) elementSize;
 - (^v) elementAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})b;
 - (void) _moveGapToBlockIndex:(Q)a;
 - (void) _consistencyError:(q)astartAtZeroError:(BOOL)bcacheError:(BOOL)cinconsistentBlockError:(BOOL)d;
 - (void) _ensureCapacity:(Q)a;
 - (void) _moveGapAndMergeWithBlockRange:({_NSRange=QQ})a;
 - (void) _consistencyCheck:(q)a;


@end
