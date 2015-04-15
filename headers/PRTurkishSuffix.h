
@interface PRTurkishSuffix : NSObject {

    @"NSString" _pattern;
    @"NSString" _name;
    [16C] _patternBuffer;
    [16C] _isOptional;
    Q _patternBufferLength;
    i _suffixType;
    BOOL _postponesApostrophe;
}
 + (id) standardTurkishNounSuffixes;
 + (id) standardTurkishVerbSuffixes;
 + (id) standardTurkishSuffixes;
 + (void) _enumerateSuffixMatchesForBuffer:(*)alength:(Q)bfollowedByLetter:(C)coptions:(Q)ddepth:(Q)ematchState:(i)fsuffixStack:(^@)gsuffixRangeStack:(^{_NSRange=QQ})husingBlock:(@?)i;
 + (void) enumerateSuffixMatchesForBuffer:(*)alength:(Q)boptions:(Q)cusingBlock:(@?)d;
 + (void) enumerateSuffixMatchesForWord:(id)aoptions:(Q)busingBlock:(@?)c;

 - (id) pattern;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (void) _fillPatternBuffer;
 - (i) suffixType;
 - (BOOL) postponesApostrophe;
 - (id) initWithPattern:(id)aname:(id)btype:(i)cpostponesApostrophe:(BOOL)d;
 - (Q) matchingIndexInBuffer:(*)alength:(Q)bfollowedByLetter:(C)cmatchWithNameOnly:(^B)d;


@end
