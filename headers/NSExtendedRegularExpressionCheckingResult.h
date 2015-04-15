
@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {

    @"NSRegularExpression" _regularExpression;
    [7{_NSRange="location"Q"length"Q}] _ranges;
}

 - (Q) numberOfRanges;
 - (BOOL) _adjustRangesWithOffset:(q)a;
 - (id) regularExpression;
 - (id) initWithRanges:(^{_NSRange=QQ})acount:(Q)bregularExpression:(id)c;
 - (id) rangeArray;
 - (id) initWithRangeArray:(id)aregularExpression:(id)b;
 - (void) dealloc;
 - ({_NSRange=QQ}) rangeAtIndex:(Q)a;
 - ({_NSRange=QQ}) range;


@end
