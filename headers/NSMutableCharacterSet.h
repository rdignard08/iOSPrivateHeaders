
@protocol NSCopying, NSMutableCopying;
@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying> {

}
 + (id) whitespaceAndNewlineCharacterSet;
 + (id) whitespaceCharacterSet;
 + (id) letterCharacterSet;
 + (id) decimalDigitCharacterSet;
 + (id) alphanumericCharacterSet;
 + (id) controlCharacterSet;
 + (id) lowercaseLetterCharacterSet;
 + (id) uppercaseLetterCharacterSet;
 + (id) nonBaseCharacterSet;
 + (id) decomposableCharacterSet;
 + (id) punctuationCharacterSet;
 + (id) capitalizedLetterCharacterSet;
 + (id) illegalCharacterSet;
 + (id) symbolCharacterSet;
 + (id) newlineCharacterSet;
 + (id) characterSetWithContentsOfFile:(id)a;
 + (id) characterSetWithBitmapRepresentation:(id)a;
 + (id) characterSetWithCharactersInString:(id)a;
 + (id) characterSetWithRange:({_NSRange=QQ})a;

 - (BOOL) isMutable;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) addCharactersInRange:({_NSRange=QQ})a;
 - (void) removeCharactersInRange:({_NSRange=QQ})a;
 - (void) addCharactersInString:(id)a;
 - (void) removeCharactersInString:(id)a;
 - (void) formUnionWithCharacterSet:(id)a;
 - (void) formIntersectionWithCharacterSet:(id)a;
 - (void) invert;
 - (id) init;
 - (id) initWithCoder:(id)a;


@end
