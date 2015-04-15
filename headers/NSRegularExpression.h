
@protocol NSCopying, NSCoding;
@interface NSRegularExpression : NSObject <NSCopying, NSCoding> {

    @"NSString" _pattern;
    Q _options;
    ^v _internal;
    id _reserved1;
    i _checkout;
    i _reserved2;
}
@property (atomic, copy, readonly) NSString* pattern;
@property (atomic, assign, readonly) NSNumber* options;
@property (atomic, assign, readonly) NSNumber* numberOfCaptureGroups;
 + (id) regularExpressionWithPattern:(id)aoptions:(Q)berror:(^@)c;
 + (id) escapedPatternForString:(id)a;
 + (id) escapedTemplateForString:(id)a;
 + (void) initialize;

 - ({_NSRange=QQ}) rangeOfFirstMatchInString:(id)aoptions:(Q)brange:({_NSRange=QQ})c;
 - (id) stringByReplacingMatchesInString:(id)aoptions:(Q)brange:({_NSRange=QQ})cwithTemplate:(id)d;
 - (Q) replaceMatchesInString:(id)aoptions:(Q)brange:({_NSRange=QQ})cwithTemplate:(id)d;
 - (id) pattern;
 - (Q) numberOfCaptureGroups;
 - (id) matchesInString:(id)aoptions:(Q)brange:({_NSRange=QQ})c;
 - (Q) numberOfMatchesInString:(id)aoptions:(Q)brange:({_NSRange=QQ})c;
 - (id) firstMatchInString:(id)aoptions:(Q)brange:({_NSRange=QQ})c;
 - (id) replacementStringForResult:(id)ainString:(id)boffset:(q)ctemplate:(id)d;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) options;
 - (id) initWithPattern:(id)aoptions:(Q)berror:(^@)c;
 - (void) enumerateMatchesInString:(id)aoptions:(Q)brange:({_NSRange=QQ})cusingBlock:(@?)d;


@end
