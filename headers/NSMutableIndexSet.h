
@interface NSMutableIndexSet : NSIndexSet {

    ^v _reserved;
}

 - (id) initWithXPCEncoding:(id)a;
 - (id) copyXPCEncoding;
 - (Class) classForCoder;
 - (void) addIndexes:(id)a;
 - (void) addIndexesInRange:({_NSRange=QQ})a;
 - (void) _ensureRangeCapacity:(Q)a;
 - (void) _removeRangeInArrayAtIndex:(Q)a;
 - (void) removeAllIndexes;
 - (void) removeIndexesInRange:({_NSRange=QQ})a;
 - (void) removeIndex:(Q)a;
 - (void) removeIndexes:(id)a;
 - (void) removeIndexesWithOptions:(Q)apassingTest:(@?)b;
 - (void) _replaceRangeInArrayAtIndex:(Q)awithRange:({_NSRange=QQ})b;
 - (void) _insertRange:({_NSRange=QQ})ainArrayAtIndex:(Q)b;
 - (void) _addRangeToArray:({_NSRange=QQ})a;
 - (void) _mergeOverlappingRangesStartingAtIndex:(Q)a;
 - (void) _incrementBy:(Q)astartingAtIndex:(Q)b;
 - (void) _removeAndDecrementBy:(Q)astartingAtIndex:(Q)b;
 - (void) addIndexesFromIndexSet:(id)a;
 - (void) addIndexes:(r^Q)acount:(Q)b;
 - (void) removeIndexesFromIndexSet:(id)a;
 - (void) removeIndexesInRange:({_NSRange=QQ})aoptions:(Q)bpassingTest:(@?)c;
 - (void) removeIndexesPassingTest:(@?)a;
 - (void) shiftIndexesStartingAtIndex:(Q)aby:(q)b;
 - (void) addIndex:(Q)a;


@end
