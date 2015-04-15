
@interface PRZhuyinModification : PRModification {

    {_NSRange="location"Q"length"Q} _range;
    @"NSString" _replacementString;
    Q _modificationType;
    {_NSRange="location"Q"length"Q} _syllableRange;
    {_NSRange="location"Q"length"Q} _additionalSyllableRange;
    d _modificationScore;
    Q _syllableCountScore;
    [5C] _letters;
    BOOL _producesPartialSyllable;
}

 - (id) replacementString;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - ({_NSRange=QQ}) range;
 - (id) initWithRange:({_NSRange=QQ})areplacementString:(id)bmodificationType:(Q)csyllableRange:({_NSRange=QQ})dadditionalSyllableRange:({_NSRange=QQ})emodificationScore:(d)fsyllableCountScore:(Q)gsyllableLetters:(r*)hproducesPartialSyllable:(BOOL)i;
 - (Q) modificationType;
 - (d) modificationScore;
 - (Q) syllableCountScore;
 - ({_NSRange=QQ}) syllableRange;
 - ({_NSRange=QQ}) additionalSyllableRange;
 - (BOOL) producesPartialSyllable;
 - (id) initWithRange:({_NSRange=QQ})areplacementString:(id)bmodificationType:(Q)csyllableRange:({_NSRange=QQ})dmodificationScore:(d)esyllableCountScore:(Q)fsyllableLetters:(r*)gproducesPartialSyllable:(BOOL)h;
 - ({_NSRange=QQ}) combinedSyllableRange;
 - (BOOL) _shouldAppendLetter:(C)a;


@end
