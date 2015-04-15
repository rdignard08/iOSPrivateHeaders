
@interface __NSLocalizedString : NSMutableString {

    NSMutableString* original;
    NSDictionary* config;
}

 - (id) initWithString:(id)a withFormatConfiguration:(id)b ;
 - (id) baseString;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (unsigned long long) replaceOccurrencesOfString:(id)a withString:(id)b options:(unsigned long long)c range:({_NSRange=QQ})d ;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (void) getCharacters:(^S)a range:({_NSRange=QQ})b ;
 - (r^S) _fastCharacterContents;
 - (r*) _fastCStringContents:(BOOL)a ;
 - (BOOL) isEqualToString:(id)a ;
 - (void) insertString:(id)a atIndex:(unsigned long long)b ;
 - (void) appendString:(id)a ;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a ;
 - (void) appendFormat:(id)a ;
 - (void) setString:(id)a ;
 - (void) appendCharacters:(r^S)a length:(unsigned long long)b ;
 - (long long) compare:(id)a options:(unsigned long long)b range:({_NSRange=QQ})c locale:(id)d ;
 - (id) formatConfiguration;
 - (unsigned long long) length;
 - (id) substringWithRange:({_NSRange=QQ})a ;
 - (id) substringToIndex:(unsigned long long)a ;
 - (id) substringFromIndex:(unsigned long long)a ;


@end
