
@interface __NSLocalizedString : NSMutableString {

    NSMutableString original;
    NSDictionary config;
}

 - (id) initWithString:(id)awithFormatConfiguration:(id)b;
 - (id) baseString;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (unsigned long long) replaceOccurrencesOfString:(id)awithString:(id)boptions:(unsigned long long)crange:({_NSRange=QQ})d;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r^S) _fastCharacterContents;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) isEqualToString:(id)a;
 - (void) insertString:(id)aatIndex:(unsigned long long)b;
 - (void) appendString:(id)a;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a;
 - (void) appendFormat:(id)a;
 - (void) setString:(id)a;
 - (void) appendCharacters:(r^S)alength:(unsigned long long)b;
 - (long long) compare:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})clocale:(id)d;
 - (id) formatConfiguration;
 - (unsigned long long) length;
 - (id) substringWithRange:({_NSRange=QQ})a;
 - (id) substringToIndex:(unsigned long long)a;
 - (id) substringFromIndex:(unsigned long long)a;


@end
