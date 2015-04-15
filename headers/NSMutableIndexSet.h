
@interface NSMutableIndexSet : NSIndexSet {

    ^v _reserved;
}

 - (id) initWithXPCEncoding:(id)a;
 - (id) copyXPCEncoding;
 - (Class) classForCoder;
 - (void) addIndexes:(id)a;
 - (void) addIndexesInRange:({_NSRange=QQ})a;
 - (void) _ensureRangeCapacity:(unsigned long long)a;
 - (void) _removeRangeInArrayAtIndex:(unsigned long long)a;
 - (void) removeAllIndexes;
 - (void) removeIndexesInRange:({_NSRange=QQ})a;
 - (void) removeIndex:(unsigned long long)a;
 - (void) removeIndexes:(id)a;
 - (void) removeIndexesWithOptions:(unsigned long long)apassingTest:(@?)b;
 - (void) _replaceRangeInArrayAtIndex:(unsigned long long)awithRange:({_NSRange=QQ})b;
 - (void) _insertRange:({_NSRange=QQ})ainArrayAtIndex:(unsigned long long)b;
 - (void) _addRangeToArray:({_NSRange=QQ})a;
 - (void) _mergeOverlappingRangesStartingAtIndex:(unsigned long long)a;
 - (void) _incrementBy:(unsigned long long)astartingAtIndex:(unsigned long long)b;
 - (void) _removeAndDecrementBy:(unsigned long long)astartingAtIndex:(unsigned long long)b;
 - (void) addIndexesFromIndexSet:(id)a;
 - (void) addIndexes:(r^Q)acount:(unsigned long long)b;
 - (void) removeIndexesFromIndexSet:(id)a;
 - (void) removeIndexesInRange:({_NSRange=QQ})aoptions:(unsigned long long)bpassingTest:(@?)c;
 - (void) removeIndexesPassingTest:(@?)a;
 - (void) shiftIndexesStartingAtIndex:(unsigned long long)aby:(long long)b;
 - (void) addIndex:(unsigned long long)a;


@end
