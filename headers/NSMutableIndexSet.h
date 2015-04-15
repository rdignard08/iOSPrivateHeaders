
@interface NSMutableIndexSet : NSIndexSet {

    ^v _reserved;
}

 - (id) initWithXPCEncoding:(id)a ;
 - (id) copyXPCEncoding;
 - (Class) classForCoder;
 - (void) addIndexes:(id)a ;
 - (void) addIndexesInRange:({_NSRange=QQ})a ;
 - (void) _ensureRangeCapacity:(unsigned long long)a ;
 - (void) _removeRangeInArrayAtIndex:(unsigned long long)a ;
 - (void) removeAllIndexes;
 - (void) removeIndexesInRange:({_NSRange=QQ})a ;
 - (void) removeIndex:(unsigned long long)a ;
 - (void) removeIndexes:(id)a ;
 - (void) removeIndexesWithOptions:(unsigned long long)a passingTest:(@?)b ;
 - (void) _replaceRangeInArrayAtIndex:(unsigned long long)a withRange:({_NSRange=QQ})b ;
 - (void) _insertRange:({_NSRange=QQ})a inArrayAtIndex:(unsigned long long)b ;
 - (void) _addRangeToArray:({_NSRange=QQ})a ;
 - (void) _mergeOverlappingRangesStartingAtIndex:(unsigned long long)a ;
 - (void) _incrementBy:(unsigned long long)a startingAtIndex:(unsigned long long)b ;
 - (void) _removeAndDecrementBy:(unsigned long long)a startingAtIndex:(unsigned long long)b ;
 - (void) addIndexesFromIndexSet:(id)a ;
 - (void) addIndexes:(r^Q)a count:(unsigned long long)b ;
 - (void) removeIndexesFromIndexSet:(id)a ;
 - (void) removeIndexesInRange:({_NSRange=QQ})a options:(unsigned long long)b passingTest:(@?)c ;
 - (void) removeIndexesPassingTest:(@?)a ;
 - (void) shiftIndexesStartingAtIndex:(unsigned long long)a by:(long long)b ;
 - (void) addIndex:(unsigned long long)a ;


@end
