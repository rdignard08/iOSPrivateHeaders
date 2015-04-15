
@interface NSRegularExpressionCheckingResult : NSTextCheckingResult {

}

 - (id) resultByAdjustingRangesWithOffset:(long long)a ;
 - (id) regularExpression;
 - (id) initWithRanges:(^{_NSRange=QQ})a count:(unsigned long long)b regularExpression:(id)c ;
 - (id) rangeArray;
 - (id) initWithRangeArray:(id)a regularExpression:(id)b ;
 - (id) description;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned long long) resultType;


@end
