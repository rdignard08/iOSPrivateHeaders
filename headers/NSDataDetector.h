
@interface NSDataDetector : NSRegularExpression {

    unsigned long long _types;
}
 + (id) dataDetectorWithTypes:(unsigned long long)aerror:(^@)b;
 + (void) initialize;

 - (id) pattern;
 - (unsigned long long) numberOfCaptureGroups;
 - (id) initWithTypes:(unsigned long long)a error:(^@)b ;
 - (unsigned long long) checkingTypes;
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
