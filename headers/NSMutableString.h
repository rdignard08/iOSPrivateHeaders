
@interface NSMutableString : NSString {

}
 + (id) stringWithCapacity:(unsigned long long)a;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) standardizeWhitespace;
 - (void) _removeCharactersFromSet:(^{__CFCharacterSet=})a;
 - (void) _replaceOccurrencesOfCharacter:(unsigned int)awithCharacter:(unsigned int)b;
 - (void) _removeOccurrencesOfCharacter:(unsigned int)a;
 - (Class) classForCoder;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithCharacters:(r^S)blength:(unsigned long long)c;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithCString:(r*)blength:(unsigned long long)c;
 - (void) _trimWithCharacterSet:(id)a;
 - (unsigned long long) _replaceOccurrencesOfRegularExpressionPattern:(id)awithTemplate:(id)boptions:(unsigned long long)crange:({_NSRange=QQ})d;
 - (id) replacementObjectForPortCoder:(id)a;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (unsigned long long) replaceOccurrencesOfString:(id)awithString:(id)boptions:(unsigned long long)crange:({_NSRange=QQ})d;
 - (void) insertString:(id)aatIndex:(unsigned long long)b;
 - (void) appendString:(id)a;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a;
 - (void) appendFormat:(id)a;
 - (void) setString:(id)a;
 - (void) appendCharacters:(r^S)alength:(unsigned long long)b;
 - (void) _cfAppendCString:(r*)alength:(long long)b;
 - (void) _cfPad:(^{__CFString=})alength:(unsigned int)bpadIndex:(unsigned int)c;
 - (void) _cfTrim:(^{__CFString=})a;
 - (void) _cfTrimWS;
 - (void) _cfLowercase:(r^v)a;
 - (void) _cfUppercase:(r^v)a;
 - (void) _cfCapitalize:(r^v)a;
 - (void) _cfNormalize:(long long)a;
 - (id) initWithCapacity:(unsigned long long)a;


@end
