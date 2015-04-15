
@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration;
@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {

}
@property (atomic, assign, readonly) NSNumber* count;
 + (BOOL) supportsSecureCoding;
 + (id) orderedSetWithObjects:(r^@)acount:(Q)b;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) orderedSetWithArray:(id)a;
 + (id) orderedSetWithObject:(id)a;
 + (id) newOrderedSetWithObjects:(r^@)acount:(Q)b;
 + (id) orderedSetWithObjects:(id)a;
 + (id) orderedSetWithArray:(id)arange:({_NSRange=QQ})bcopyItems:(BOOL)c;
 + (id) orderedSetWithArray:(id)arange:({_NSRange=QQ})b;
 + (id) orderedSetWithArray:(id)acopyItems:(BOOL)b;
 + (id) orderedSetWithOrderedSet:(id)arange:({_NSRange=QQ})bcopyItems:(BOOL)c;
 + (id) orderedSetWithOrderedSet:(id)arange:({_NSRange=QQ})b;
 + (id) orderedSetWithOrderedSet:(id)acopyItems:(BOOL)b;
 + (id) orderedSetWithOrderedSet:(id)a;
 + (id) orderedSetWithSet:(id)acopyItems:(BOOL)b;
 + (id) orderedSetWithSet:(id)a;
 + (id) orderedSet;

 - (id) filteredOrderedSetUsingPredicate:(id)a;
 - (id) sortedArrayUsingDescriptors:(id)a;
 - (void) removeObserver:(id)aforKeyPath:(id)b;
 - (void) addObserver:(id)aforKeyPath:(id)boptions:(Q)ccontext:(^v)d;
 - (void) removeObserver:(id)aforKeyPath:(id)bcontext:(^v)c;
 - (id) _valueForKeyPath:(id)aofObjectAtIndex:(Q)b;
 - (id) _mutableArrayValueForKeyPath:(id)aofObjectAtIndex:(Q)b;
 - (id) _mutableOrderedSetValueForKeyPath:(id)aofObjectAtIndex:(Q)b;
 - (id) _mutableSetValueForKeyPath:(id)aofObjectAtIndex:(Q)b;
 - (void) _setValue:(id)aforKeyPath:(id)bofObjectAtIndex:(Q)c;
 - (BOOL) _validateValue:(N^@)aforKeyPath:(id)bofObjectAtIndex:(Q)cerror:(o^@)d;
 - (id) _sumForKeyPath:(id)a;
 - (id) _avgForKeyPath:(id)a;
 - (id) _countForKeyPath:(id)a;
 - (id) _maxForKeyPath:(id)a;
 - (id) _minForKeyPath:(id)a;
 - (void) setValue:(id)aforKey:(id)b;
 - (id) valueForKey:(id)a;
 - (id) valueForKeyPath:(id)a;
 - (Class) classForCoder;
 - (id) initWithObjects:(id)a;
 - (BOOL) intersectsSet:(id)a;
 - (BOOL) isSubsetOfSet:(id)a;
 - (id) initWithSet:(id)a;
 - (id) sortedArrayUsingComparator:(@?)a;
 - (Q) indexOfObject:(id)ainSortedRange:({_NSRange=QQ})boptions:(Q)cusingComparator:(@?)d;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (Q) countForObject:(id)a;
 - (BOOL) containsObject:(id)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) descriptionWithLocale:(id)a;
 - (void) getObjects:(^@)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) initWithObjects:(r^@)acount:(Q)b;
 - (void) enumerateObjectsWithOptions:(Q)ausingBlock:(@?)b;
 - (id) initWithArray:(id)acopyItems:(BOOL)b;
 - (id) initWithObject:(id)a;
 - (id) initWithArray:(id)a;
 - (id) indexesOfObjectsAtIndexes:(id)aoptions:(Q)bpassingTest:(@?)c;
 - (id) indexesOfObjectsWithOptions:(Q)apassingTest:(@?)b;
 - (Q) indexOfObjectWithOptions:(Q)apassingTest:(@?)b;
 - (Q) indexOfObjectAtIndexes:(id)aoptions:(Q)bpassingTest:(@?)c;
 - (id) objectWithOptions:(Q)apassingTest:(@?)b;
 - (id) objectsAtIndexes:(id)a;
 - (id) objectsWithOptions:(Q)apassingTest:(@?)b;
 - (id) sortedArrayFromRange:({_NSRange=QQ})aoptions:(Q)busingComparator:(@?)c;
 - (id) sortedArrayWithOptions:(Q)ausingComparator:(@?)b;
 - (id) descriptionWithLocale:(id)aindent:(Q)b;
 - (id) initWithArray:(id)arange:({_NSRange=QQ})bcopyItems:(BOOL)c;
 - (id) initWithOrderedSet:(id)arange:({_NSRange=QQ})bcopyItems:(BOOL)c;
 - (id) initWithSet:(id)acopyItems:(BOOL)b;
 - (id) array;
 - (id) allObjects;
 - (BOOL) containsObject:(id)ainRange:({_NSRange=QQ})b;
 - (Q) countForObject:(id)ainRange:({_NSRange=QQ})b;
 - (void) enumerateObjectsAtIndexes:(id)aoptions:(Q)busingBlock:(@?)c;
 - (Q) indexOfObject:(id)ainRange:({_NSRange=QQ})b;
 - (Q) indexOfObject:(id)a;
 - (id) lastObject;
 - (id) objectAtIndexes:(id)aoptions:(Q)bpassingTest:(@?)c;
 - (id) objectPassingTest:(@?)a;
 - (id) objectsAtIndexes:(id)aoptions:(Q)bpassingTest:(@?)c;
 - (id) objectEnumerator;
 - (id) initWithArray:(id)arange:({_NSRange=QQ})b;
 - (id) initWithOrderedSet:(id)arange:({_NSRange=QQ})b;
 - (id) initWithOrderedSet:(id)acopyItems:(BOOL)b;
 - (id) initWithOrderedSet:(id)a;
 - (id) set;
 - (BOOL) isNSOrderedSet__;
 - (BOOL) intersectsOrderedSet:(id)a;
 - (BOOL) isSubsetOfOrderedSet:(id)a;
 - (BOOL) isEqualToOrderedSet:(id)a;
 - (id) reversedOrderedSet;
 - (id) objectsPassingTest:(@?)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) enumerateObjectsUsingBlock:(@?)a;
 - (id) firstObject;
 - (id) objectAtIndexedSubscript:(Q)a;
 - (id) reverseObjectEnumerator;
 - (id) indexesOfObjectsPassingTest:(@?)a;
 - (Q) indexOfObjectPassingTest:(@?)a;


@end
