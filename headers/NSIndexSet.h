
@protocol NSCopying, NSMutableCopying, NSSecureCoding;
@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

    {?="_isEmpty"b1"_hasSingleRange"b1"_cacheValid"b1"_reservedArrayBinderController"b29} _indexSetFlags;
    (?="_singleRange"{?="_range"{_NSRange="location"Q"length"Q}}"_multipleRanges"{?="_data"^v"_reserved"^v}) _internal;
}
@property (atomic, assign, readonly) NSNumber* count;
@property (atomic, assign, readonly) NSNumber* firstIndex;
@property (atomic, assign, readonly) NSNumber* lastIndex;
 + (id) indexSetWithIndexes:(Q)a;
 + (BOOL) supportsSecureCoding;
 + (id) indexSet;
 + (id) indexSetWithIndexes:(r^Q)acount:(Q)b;
 + (id) indexSetWithIndexesInRange:({_NSRange=QQ})a;
 + (id) indexSetWithIndex:(Q)a;

 - (id) initWithXPCEncoding:(id)a;
 - (id) copyXPCEncoding;
 - (Class) classForCoder;
 - (id) initWithIndex:(Q)a;
 - (id) initWithIndexesInRange:({_NSRange=QQ})a;
 - (id) initWithIndexes:(r^Q)acount:(Q)b;
 - (id) _init;
 - (void) _setContentToContentFromIndexSet:(id)a;
 - (id) initWithIndexSet:(id)a;
 - (Q) indexGreaterThanIndex:(Q)a;
 - (BOOL) isEqualToIndexSet:(id)a;
 - (Q) _indexOfRangeAfterOrContainingIndex:(Q)a;
 - (Q) _indexOfRangeBeforeOrContainingIndex:(Q)a;
 - (Q) _indexClosestToIndex:(Q)aequalAllowed:(BOOL)bfollowing:(BOOL)c;
 - (Q) getIndexes:(^Q)amaxCount:(Q)binIndexRange:(^{_NSRange=QQ})c;
 - (Q) _indexOfRangeContainingIndex:(Q)a;
 - (BOOL) containsIndexesInRange:({_NSRange=QQ})a;
 - (void) enumerateIndexesWithOptions:(Q)ausingBlock:(@?)b;
 - (Q) indexWithOptions:(Q)apassingTest:(@?)b;
 - (id) indexesWithOptions:(Q)apassingTest:(@?)b;
 - (void) enumerateRangesWithOptions:(Q)ausingBlock:(@?)b;
 - (Q) indexLessThanIndex:(Q)a;
 - (Q) indexGreaterThanOrEqualToIndex:(Q)a;
 - (Q) indexLessThanOrEqualToIndex:(Q)a;
 - (BOOL) containsIndexes:(id)a;
 - (BOOL) intersectsIndexesInRange:({_NSRange=QQ})a;
 - (id) _numberEnumerator;
 - (void) enumerateIndexesUsingBlock:(@?)a;
 - (void) enumerateIndexesInRange:({_NSRange=QQ})aoptions:(Q)busingBlock:(@?)c;
 - (Q) indexPassingTest:(@?)a;
 - (Q) indexInRange:({_NSRange=QQ})aoptions:(Q)bpassingTest:(@?)c;
 - (id) indexesPassingTest:(@?)a;
 - (id) indexesInRange:({_NSRange=QQ})aoptions:(Q)bpassingTest:(@?)c;
 - (void) enumerateRangesUsingBlock:(@?)a;
 - (void) enumerateRangesInRange:({_NSRange=QQ})aoptions:(Q)busingBlock:(@?)c;
 - (id) replacementObjectForPortCoder:(id)a;
 - (Q) _indexAtIndex:(Q)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) count;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) lastIndex;
 - (Q) rangeCount;
 - ({_NSRange=QQ}) rangeAtIndex:(Q)a;
 - (Q) countOfIndexesInRange:({_NSRange=QQ})a;
 - (Q) firstIndex;
 - (BOOL) containsIndex:(Q)a;
 - (Q) __getContainmentVector:(o^B)ainRange:({_NSRange=QQ})b;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
