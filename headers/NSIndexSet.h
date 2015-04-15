
@protocol NSCopying, NSMutableCopying, NSSecureCoding;
@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

    {?="_isEmpty"b1"_hasSingleRange"b1"_cacheValid"b1"_reservedArrayBinderController"b29} _indexSetFlags;
    (?="_singleRange"{?="_range"{_NSRange="location"Q"length"Q}}"_multipleRanges"{?="_data"^v"_reserved"^v}) _internal;
}
@property (atomic, assign, readonly) NSNumber* count;
@property (atomic, assign, readonly) NSNumber* firstIndex;
@property (atomic, assign, readonly) NSNumber* lastIndex;
 + (id) indexSetWithIndexes:(unsigned long long)a;
 + (BOOL) supportsSecureCoding;
 + (id) indexSet;
 + (id) indexSetWithIndexes:(r^Q)acount:(unsigned long long)b;
 + (id) indexSetWithIndexesInRange:({_NSRange=QQ})a;
 + (id) indexSetWithIndex:(unsigned long long)a;

 - (id) initWithXPCEncoding:(id)a;
 - (id) copyXPCEncoding;
 - (Class) classForCoder;
 - (id) initWithIndex:(unsigned long long)a;
 - (id) initWithIndexesInRange:({_NSRange=QQ})a;
 - (id) initWithIndexes:(r^Q)acount:(unsigned long long)b;
 - (id) _init;
 - (void) _setContentToContentFromIndexSet:(id)a;
 - (id) initWithIndexSet:(id)a;
 - (unsigned long long) indexGreaterThanIndex:(unsigned long long)a;
 - (BOOL) isEqualToIndexSet:(id)a;
 - (unsigned long long) _indexOfRangeAfterOrContainingIndex:(unsigned long long)a;
 - (unsigned long long) _indexOfRangeBeforeOrContainingIndex:(unsigned long long)a;
 - (unsigned long long) _indexClosestToIndex:(unsigned long long)aequalAllowed:(BOOL)bfollowing:(BOOL)c;
 - (unsigned long long) getIndexes:(^Q)amaxCount:(unsigned long long)binIndexRange:(^{_NSRange=QQ})c;
 - (unsigned long long) _indexOfRangeContainingIndex:(unsigned long long)a;
 - (BOOL) containsIndexesInRange:({_NSRange=QQ})a;
 - (void) enumerateIndexesWithOptions:(unsigned long long)ausingBlock:(@?)b;
 - (unsigned long long) indexWithOptions:(unsigned long long)apassingTest:(@?)b;
 - (id) indexesWithOptions:(unsigned long long)apassingTest:(@?)b;
 - (void) enumerateRangesWithOptions:(unsigned long long)ausingBlock:(@?)b;
 - (unsigned long long) indexLessThanIndex:(unsigned long long)a;
 - (unsigned long long) indexGreaterThanOrEqualToIndex:(unsigned long long)a;
 - (unsigned long long) indexLessThanOrEqualToIndex:(unsigned long long)a;
 - (BOOL) containsIndexes:(id)a;
 - (BOOL) intersectsIndexesInRange:({_NSRange=QQ})a;
 - (id) _numberEnumerator;
 - (void) enumerateIndexesUsingBlock:(@?)a;
 - (void) enumerateIndexesInRange:({_NSRange=QQ})aoptions:(unsigned long long)busingBlock:(@?)c;
 - (unsigned long long) indexPassingTest:(@?)a;
 - (unsigned long long) indexInRange:({_NSRange=QQ})aoptions:(unsigned long long)bpassingTest:(@?)c;
 - (id) indexesPassingTest:(@?)a;
 - (id) indexesInRange:({_NSRange=QQ})aoptions:(unsigned long long)bpassingTest:(@?)c;
 - (void) enumerateRangesUsingBlock:(@?)a;
 - (void) enumerateRangesInRange:({_NSRange=QQ})aoptions:(unsigned long long)busingBlock:(@?)c;
 - (id) replacementObjectForPortCoder:(id)a;
 - (unsigned long long) _indexAtIndex:(unsigned long long)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) count;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) lastIndex;
 - (unsigned long long) rangeCount;
 - ({_NSRange=QQ}) rangeAtIndex:(unsigned long long)a;
 - (unsigned long long) countOfIndexesInRange:({_NSRange=QQ})a;
 - (unsigned long long) firstIndex;
 - (BOOL) containsIndex:(unsigned long long)a;
 - (unsigned long long) __getContainmentVector:(o^B)ainRange:({_NSRange=QQ})b;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
