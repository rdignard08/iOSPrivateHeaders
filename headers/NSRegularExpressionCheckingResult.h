
@interface NSRegularExpressionCheckingResult : NSTextCheckingResult {

}

 - (id) resultByAdjustingRangesWithOffset:(long long)a;
 - (id) regularExpression;
 - (id) initWithRanges:(^{_NSRange=QQ})acount:(unsigned long long)bregularExpression:(id)c;
 - (id) rangeArray;
 - (id) initWithRangeArray:(id)aregularExpression:(id)b;
 - (id) description;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) resultType;


@end
