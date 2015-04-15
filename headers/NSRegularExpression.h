
@protocol NSCopying, NSCoding;
@interface NSRegularExpression : NSObject <NSCopying, NSCoding> {

    NSString* _pattern;
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

 - ({_NSRange=QQ}) rangeOfFirstMatchInString:(id)a options:(unsigned long long)b range:({_NSRange=QQ})c ;
 - (id) stringByReplacingMatchesInString:(id)a options:(unsigned long long)b range:({_NSRange=QQ})c withTemplate:(id)d ;
 - (unsigned long long) replaceMatchesInString:(id)a options:(unsigned long long)b range:({_NSRange=QQ})c withTemplate:(id)d ;
 - (id) pattern;
 - (unsigned long long) numberOfCaptureGroups;
 - (id) matchesInString:(id)a options:(unsigned long long)b range:({_NSRange=QQ})c ;
 - (unsigned long long) numberOfMatchesInString:(id)a options:(unsigned long long)b range:({_NSRange=QQ})c ;
 - (id) firstMatchInString:(id)a options:(unsigned long long)b range:({_NSRange=QQ})c ;
 - (id) replacementStringForResult:(id)a inString:(id)b offset:(long long)c template:(id)d ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned long long) options;
 - (id) initWithPattern:(id)a options:(unsigned long long)b error:(^@)c ;
 - (void) enumerateMatchesInString:(id)a options:(unsigned long long)b range:({_NSRange=QQ})c usingBlock:(@?)d ;


@end
