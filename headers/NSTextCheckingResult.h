
@protocol NSCopying, NSCoding;
@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding> {

}
@property (atomic, assign, readonly) NSNumber* resultType;
@property (atomic, assign, readonly) NSNumber* range;
 + (id) orthographyCheckingResultWithRange:({_NSRange=QQ})aorthography:(id)b;
 + (id) spellCheckingResultWithRange:({_NSRange=QQ})a;
 + (id) grammarCheckingResultWithRange:({_NSRange=QQ})adetails:(id)b;
 + (id) dateCheckingResultWithRange:({_NSRange=QQ})adate:(id)b;
 + (id) dateCheckingResultWithRange:({_NSRange=QQ})adate:(id)btimeZone:(id)cduration:(d)d;
 + (id) addressCheckingResultWithRange:({_NSRange=QQ})acomponents:(id)b;
 + (id) linkCheckingResultWithRange:({_NSRange=QQ})aURL:(id)b;
 + (id) quoteCheckingResultWithRange:({_NSRange=QQ})areplacementString:(id)b;
 + (id) dashCheckingResultWithRange:({_NSRange=QQ})areplacementString:(id)b;
 + (id) replacementCheckingResultWithRange:({_NSRange=QQ})areplacementString:(id)b;
 + (id) correctionCheckingResultWithRange:({_NSRange=QQ})areplacementString:(id)b;
 + (id) correctionCheckingResultWithRange:({_NSRange=QQ})areplacementString:(id)balternativeStrings:(id)c;
 + (id) regularExpressionCheckingResultWithRanges:(^{_NSRange=QQ})acount:(Q)bregularExpression:(id)c;
 + (id) phoneNumberCheckingResultWithRange:({_NSRange=QQ})aphoneNumber:(id)b;
 + (id) transitInformationCheckingResultWithRange:({_NSRange=QQ})acomponents:(id)b;
 + (void) initialize;

 - (id) components;
 - (Q) numberOfRanges;
 - (void) encodeRangeWithCoder:(id)a;
 - ({_NSRange=QQ}) decodeRangeWithCoder:(id)a;
 - (id) resultByAdjustingRangesWithOffset:(q)a;
 - (BOOL) _adjustRangesWithOffset:(q)a;
 - (id) orthography;
 - (id) grammarDetails;
 - (d) duration;
 - (id) addressComponents;
 - (id) replacementString;
 - (id) alternativeStrings;
 - (id) regularExpression;
 - (id) phoneNumber;
 - (^v) underlyingResult;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - ({_NSRange=QQ}) rangeAtIndex:(Q)a;
 - (id) date;
 - (id) timeZone;
 - (id) URL;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;
 - (Q) resultType;


@end
