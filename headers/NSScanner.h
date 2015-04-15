
@protocol NSCopying;
@interface NSScanner : NSObject <NSCopying> {

}
@property (atomic, copy, readonly) NSString* string;
@property (atomic, assign, readwrite) NSNumber* scanLocation;
@property (atomic, copy, readwrite) NSCharacterSet* charactersToBeSkipped;
@property (atomic, assign, readwrite) NSNumber* caseSensitive;
@property (atomic, retain, readwrite) NSNumber* locale;
 + (id) scannerWithString:(id)a;
 + (id) localizedScannerWithString:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (BOOL) isAtEnd;
 - (Q) scanLocation;
 - (void) setScanLocation:(Q)a;
 - (id) _remainingString;
 - (BOOL) _scanDecimal:(Q)ainto:(^q)b;
 - (void) setCharactersToBeSkipped:(id)a;
 - (BOOL) scanCharactersFromSet:(id)aintoString:(^@)b;
 - (BOOL) scanUpToCharactersFromSet:(id)aintoString:(^@)b;
 - (BOOL) scanString:(id)aintoString:(^@)b;
 - (BOOL) scanInt:(^i)a;
 - (id) charactersToBeSkipped;
 - (BOOL) caseSensitive;
 - (void) setCaseSensitive:(BOOL)a;
 - (BOOL) scanLongLong:(^q)a;
 - (BOOL) scanUnsignedLongLong:(^Q)a;
 - (BOOL) scanHexLongLong:(^Q)a;
 - (id) _invertedSkipSet;
 - (BOOL) scanFloat:(^f)a;
 - (BOOL) scanHexDouble:(^d)a;
 - (BOOL) scanHexFloat:(^f)a;
 - (BOOL) scanUnsignedInteger:(^Q)a;
 - (BOOL) scanHexInt:(^I)a;
 - (BOOL) scanDecimal:(^{?=b8b4b1b1b18[8S]})a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) string;
 - (id) initWithString:(id)a;
 - (void) setLocale:(id)a;
 - (id) locale;
 - (BOOL) scanInteger:(^q)a;
 - (BOOL) scanUpToString:(id)aintoString:(^@)b;
 - (BOOL) scanDouble:(^d)a;


@end
