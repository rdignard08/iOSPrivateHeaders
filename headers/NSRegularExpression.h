
@protocol NSCopying, NSCoding;
@interface NSRegularExpression : NSObject <NSCopying, NSCoding> {

    @"NSString" _pattern;
    unsigned long long _options;
    ^v _internal;
    id _reserved1;
    int _checkout;
    int _reserved2;
}
@property (atomic, copy, readonly) NSString* pattern;
@property (atomic, assign, readonly) NSNumber* options;
@property (atomic, assign, readonly) NSNumber* numberOfCaptureGroups;
 + (id) regularExpressionWithPattern:(id)aoptions:(unsigned long long)berror:(^@)c;
 + (id) escapedPatternForString:(id)a;
 + (id) escapedTemplateForString:(id)a;
 + (void) initialize;

 - ({_NSRange=QQ}) rangeOfFirstMatchInString:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})c;
 - (id) stringByReplacingMatchesInString:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})cwithTemplate:(id)d;
 - (unsigned long long) replaceMatchesInString:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})cwithTemplate:(id)d;
 - (id) pattern;
 - (unsigned long long) numberOfCaptureGroups;
 - (id) matchesInString:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})c;
 - (unsigned long long) numberOfMatchesInString:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})c;
 - (id) firstMatchInString:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})c;
 - (id) replacementStringForResult:(id)ainString:(id)boffset:(long long)ctemplate:(id)d;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) options;
 - (id) initWithPattern:(id)aoptions:(unsigned long long)berror:(^@)c;
 - (void) enumerateMatchesInString:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})cusingBlock:(@?)d;


@end
