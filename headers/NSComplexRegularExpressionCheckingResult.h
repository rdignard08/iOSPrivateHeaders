
@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {

    @"NSRegularExpression" _regularExpression;
    @"NSArray" _rangeArray;
}

 - (unsigned long long) numberOfRanges;
 - (BOOL) _adjustRangesWithOffset:(long long)a;
 - (id) regularExpression;
 - (id) initWithRanges:(^{_NSRange=QQ})acount:(unsigned long long)bregularExpression:(id)c;
 - (id) rangeArray;
 - (id) initWithRangeArray:(id)aregularExpression:(id)b;
 - (void) dealloc;
 - ({_NSRange=QQ}) rangeAtIndex:(unsigned long long)a;
 - ({_NSRange=QQ}) range;


@end
