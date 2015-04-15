
@interface PRTurkishSuffix : NSObject {

    NSString _pattern;
    NSString _name;
    [16C] _patternBuffer;
    [16C] _isOptional;
    unsigned long long _patternBufferLength;
    int _suffixType;
    BOOL _postponesApostrophe;
}
 + (id) standardTurkishNounSuffixes;
 + (id) standardTurkishVerbSuffixes;
 + (id) standardTurkishSuffixes;
 + (void) _enumerateSuffixMatchesForBuffer:(char*)alength:(unsigned long long)bfollowedByLetter:(unsigned char)coptions:(unsigned long long)ddepth:(unsigned long long)ematchState:(int)fsuffixStack:(^@)gsuffixRangeStack:(^{_NSRange=QQ})husingBlock:(@?)i;
 + (void) enumerateSuffixMatchesForBuffer:(char*)alength:(unsigned long long)boptions:(unsigned long long)cusingBlock:(@?)d;
 + (void) enumerateSuffixMatchesForWord:(id)aoptions:(unsigned long long)busingBlock:(@?)c;

 - (id) pattern;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (void) _fillPatternBuffer;
 - (int) suffixType;
 - (BOOL) postponesApostrophe;
 - (id) initWithPattern:(id)aname:(id)btype:(int)cpostponesApostrophe:(BOOL)d;
 - (unsigned long long) matchingIndexInBuffer:(char*)alength:(unsigned long long)bfollowedByLetter:(unsigned char)cmatchWithNameOnly:(^B)d;


@end
