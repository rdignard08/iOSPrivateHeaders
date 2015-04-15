
@interface __NSLocalizedString : NSMutableString {

    @"NSMutableString" original;
    @"NSDictionary" config;
}

 - (id) initWithString:(id)awithFormatConfiguration:(id)b;
 - (id) baseString;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (Q) replaceOccurrencesOfString:(id)awithString:(id)boptions:(Q)crange:({_NSRange=QQ})d;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r^S) _fastCharacterContents;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) isEqualToString:(id)a;
 - (void) insertString:(id)aatIndex:(Q)b;
 - (void) appendString:(id)a;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a;
 - (void) appendFormat:(id)a;
 - (void) setString:(id)a;
 - (void) appendCharacters:(r^S)alength:(Q)b;
 - (q) compare:(id)aoptions:(Q)brange:({_NSRange=QQ})clocale:(id)d;
 - (id) formatConfiguration;
 - (Q) length;
 - (id) substringWithRange:({_NSRange=QQ})a;
 - (id) substringToIndex:(Q)a;
 - (id) substringFromIndex:(Q)a;


@end
