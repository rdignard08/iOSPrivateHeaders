
@protocol NSCopying, NSCoding;
@interface CPRegularExpression : NSObject <NSCopying, NSCoding> {

    NSString _expressionString;
    ^v _reserved;
}
 + (void) initialize;
 + (id) regularExpressionWithString:(id)a;
 + (r*) getBytesForString:(id)alossByte:(unsigned char)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithExpressionString:(id)a;
 - (id) initWithExpressionString:(id)aoptions:(unsigned int)b;
 - (id) expressionString;
 - (unsigned long long) numberOfSubexpressions;
 - ({_NSRange=QQ}) matchedRangeForCString:(r*)arange:({_NSRange=QQ})bsubexpressionRanges:(^{_NSRange=QQ})ccount:(unsigned long long)d;
 - ({_NSRange=QQ}) matchedRangeForString:(id)arange:({_NSRange=QQ})bsubexpressionRanges:(^{_NSRange=QQ})ccount:(unsigned long long)d;


@end
