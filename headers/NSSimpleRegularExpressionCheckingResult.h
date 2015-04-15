
@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {

    NSRegularExpression* _regularExpression;
    [3{_NSRange="location"Q"length"Q}] _ranges;
}

 - (unsigned long long) numberOfRanges;
 - (BOOL) _adjustRangesWithOffset:(long long)a ;
 - (id) regularExpression;
 - (id) initWithRanges:(^{_NSRange=QQ})a count:(unsigned long long)b regularExpression:(id)c ;
 - (id) rangeArray;
 - (id) initWithRangeArray:(id)a regularExpression:(id)b ;
 - (void) dealloc;
 - ({_NSRange=QQ}) rangeAtIndex:(unsigned long long)a ;
 - ({_NSRange=QQ}) range;


@end
