
@interface NSDataDetector : NSRegularExpression {

    Q _types;
}
 + (id) dataDetectorWithTypes:(Q)aerror:(^@)b;
 + (void) initialize;

 - (id) pattern;
 - (Q) numberOfCaptureGroups;
 - (id) initWithTypes:(Q)aerror:(^@)b;
 - (Q) checkingTypes;
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
