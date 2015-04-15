
@interface NSMutableString : NSString {

}
 + (id) stringWithCapacity:(unsigned long long)a;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) standardizeWhitespace;
 - (void) _removeCharactersFromSet:(^{__CFCharacterSet=})a ;
 - (void) _replaceOccurrencesOfCharacter:(unsigned int)a withCharacter:(unsigned int)b ;
 - (void) _removeOccurrencesOfCharacter:(unsigned int)a ;
 - (Class) classForCoder;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withCharacters:(r^S)b length:(unsigned long long)c ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withCString:(r*)b length:(unsigned long long)c ;
 - (void) _trimWithCharacterSet:(id)a ;
 - (unsigned long long) _replaceOccurrencesOfRegularExpressionPattern:(id)a withTemplate:(id)b options:(unsigned long long)c range:({_NSRange=QQ})d ;
 - (id) replacementObjectForPortCoder:(id)a ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (unsigned long long) replaceOccurrencesOfString:(id)a withString:(id)b options:(unsigned long long)c range:({_NSRange=QQ})d ;
 - (void) insertString:(id)a atIndex:(unsigned long long)b ;
 - (void) appendString:(id)a ;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a ;
 - (void) appendFormat:(id)a ;
 - (void) setString:(id)a ;
 - (void) appendCharacters:(r^S)a length:(unsigned long long)b ;
 - (void) _cfAppendCString:(r*)a length:(long long)b ;
 - (void) _cfPad:(^{__CFString=})a length:(unsigned int)b padIndex:(unsigned int)c ;
 - (void) _cfTrim:(^{__CFString=})a ;
 - (void) _cfTrimWS;
 - (void) _cfLowercase:(r^v)a ;
 - (void) _cfUppercase:(r^v)a ;
 - (void) _cfCapitalize:(r^v)a ;
 - (void) _cfNormalize:(long long)a ;
 - (id) initWithCapacity:(unsigned long long)a ;


@end
