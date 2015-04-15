
@interface NSMutableString : NSString {

}
 + (id) stringWithCapacity:(Q)a;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) standardizeWhitespace;
 - (void) _removeCharactersFromSet:(^{__CFCharacterSet=})a;
 - (void) _replaceOccurrencesOfCharacter:(I)awithCharacter:(I)b;
 - (void) _removeOccurrencesOfCharacter:(I)a;
 - (Class) classForCoder;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithCharacters:(r^S)blength:(Q)c;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithCString:(r*)blength:(Q)c;
 - (void) _trimWithCharacterSet:(id)a;
 - (Q) _replaceOccurrencesOfRegularExpressionPattern:(id)awithTemplate:(id)boptions:(Q)crange:({_NSRange=QQ})d;
 - (id) replacementObjectForPortCoder:(id)a;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (Q) replaceOccurrencesOfString:(id)awithString:(id)boptions:(Q)crange:({_NSRange=QQ})d;
 - (void) insertString:(id)aatIndex:(Q)b;
 - (void) appendString:(id)a;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a;
 - (void) appendFormat:(id)a;
 - (void) setString:(id)a;
 - (void) appendCharacters:(r^S)alength:(Q)b;
 - (void) _cfAppendCString:(r*)alength:(q)b;
 - (void) _cfPad:(^{__CFString=})alength:(I)bpadIndex:(I)c;
 - (void) _cfTrim:(^{__CFString=})a;
 - (void) _cfTrimWS;
 - (void) _cfLowercase:(r^v)a;
 - (void) _cfUppercase:(r^v)a;
 - (void) _cfCapitalize:(r^v)a;
 - (void) _cfNormalize:(q)a;
 - (id) initWithCapacity:(Q)a;


@end
