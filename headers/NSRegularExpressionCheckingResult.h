
@interface NSRegularExpressionCheckingResult : NSTextCheckingResult {

}

 - (id) resultByAdjustingRangesWithOffset:(q)a;
 - (id) regularExpression;
 - (id) initWithRanges:(^{_NSRange=QQ})acount:(Q)bregularExpression:(id)c;
 - (id) rangeArray;
 - (id) initWithRangeArray:(id)aregularExpression:(id)b;
 - (id) description;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) resultType;


@end
