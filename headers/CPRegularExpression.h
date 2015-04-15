
@protocol NSCopying, NSCoding;
@interface CPRegularExpression : NSObject <NSCopying, NSCoding> {

    @"NSString" _expressionString;
    ^v _reserved;
}
 + (void) initialize;
 + (id) regularExpressionWithString:(id)a;
 + (r*) getBytesForString:(id)alossByte:(C)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithExpressionString:(id)a;
 - (id) initWithExpressionString:(id)aoptions:(I)b;
 - (id) expressionString;
 - (Q) numberOfSubexpressions;
 - ({_NSRange=QQ}) matchedRangeForCString:(r*)arange:({_NSRange=QQ})bsubexpressionRanges:(^{_NSRange=QQ})ccount:(Q)d;
 - ({_NSRange=QQ}) matchedRangeForString:(id)arange:({_NSRange=QQ})bsubexpressionRanges:(^{_NSRange=QQ})ccount:(Q)d;


@end
