
@interface PRZhuyinModification : PRModification {

    {_NSRange="location"Q"length"Q} _range;
    @"NSString" _replacementString;
    unsigned long long _modificationType;
    {_NSRange="location"Q"length"Q} _syllableRange;
    {_NSRange="location"Q"length"Q} _additionalSyllableRange;
    double _modificationScore;
    unsigned long long _syllableCountScore;
    [5C] _letters;
    BOOL _producesPartialSyllable;
}

 - (id) replacementString;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - ({_NSRange=QQ}) range;
 - (id) initWithRange:({_NSRange=QQ})areplacementString:(id)bmodificationType:(unsigned long long)csyllableRange:({_NSRange=QQ})dadditionalSyllableRange:({_NSRange=QQ})emodificationScore:(double)fsyllableCountScore:(unsigned long long)gsyllableLetters:(r*)hproducesPartialSyllable:(BOOL)i;
 - (unsigned long long) modificationType;
 - (double) modificationScore;
 - (unsigned long long) syllableCountScore;
 - ({_NSRange=QQ}) syllableRange;
 - ({_NSRange=QQ}) additionalSyllableRange;
 - (BOOL) producesPartialSyllable;
 - (id) initWithRange:({_NSRange=QQ})areplacementString:(id)bmodificationType:(unsigned long long)csyllableRange:({_NSRange=QQ})dmodificationScore:(double)esyllableCountScore:(unsigned long long)fsyllableLetters:(r*)gproducesPartialSyllable:(BOOL)h;
 - ({_NSRange=QQ}) combinedSyllableRange;
 - (BOOL) _shouldAppendLetter:(unsigned char)a;


@end
