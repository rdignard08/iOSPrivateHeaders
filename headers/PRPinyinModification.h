
@interface PRPinyinModification : PRModification {

    {_NSRange="location"Q"length"Q} _range;
    NSString* _replacementString;
    unsigned long long _modificationType;
    {_NSRange="location"Q"length"Q} _syllableRange;
    {_NSRange="location"Q"length"Q} _additionalSyllableRange;
    double _modificationScore;
    unsigned long long _syllableCountScore;
    [7C] _letters;
    BOOL _producesPartialSyllable;
    BOOL _isTemporary;
}
 + (id) modificationsForInputString:(id)a;
 + (id) finalModificationsForInputString:(id)a;

 - (id) replacementString;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - ({_NSRange=QQ}) range;
 - (id) initWithRange:({_NSRange=QQ})a replacementString:(id)b modificationType:(unsigned long long)c syllableRange:({_NSRange=QQ})d additionalSyllableRange:({_NSRange=QQ})e modificationScore:(double)f syllableCountScore:(unsigned long long)g syllableLetters:(r*)h producesPartialSyllable:(BOOL)i ;
 - (unsigned long long) modificationType;
 - (double) modificationScore;
 - (unsigned long long) syllableCountScore;
 - ({_NSRange=QQ}) syllableRange;
 - ({_NSRange=QQ}) additionalSyllableRange;
 - (BOOL) producesPartialSyllable;
 - (id) initWithRange:({_NSRange=QQ})a replacementString:(id)b modificationType:(unsigned long long)c syllableRange:({_NSRange=QQ})d modificationScore:(double)e syllableCountScore:(unsigned long long)f syllableLetters:(r*)g producesPartialSyllable:(BOOL)h ;
 - ({_NSRange=QQ}) combinedSyllableRange;
 - (BOOL) _shouldAppendLetter:(unsigned char)a ;
 - (id) initWithRange:({_NSRange=QQ})a replacementString:(id)b modificationType:(unsigned long long)c syllableRange:({_NSRange=QQ})d additionalSyllableRange:({_NSRange=QQ})e modificationScore:(double)f syllableCountScore:(unsigned long long)g syllableLetters:(r*)h producesPartialSyllable:(BOOL)i isTemporary:(BOOL)j ;
 - (BOOL) isTemporary;
 - (id) initWithRange:({_NSRange=QQ})a replacementString:(id)b modificationType:(unsigned long long)c syllableRange:({_NSRange=QQ})d additionalSyllableRange:({_NSRange=QQ})e modificationScore:(double)f ;
 - (id) initWithRange:({_NSRange=QQ})a replacementString:(id)b modificationType:(unsigned long long)c syllableRange:({_NSRange=QQ})d modificationScore:(double)e syllableCountScore:(unsigned long long)f syllableLetters:(r*)g producesPartialSyllable:(BOOL)h isTemporary:(BOOL)i ;
 - (id) initWithRange:({_NSRange=QQ})a replacementString:(id)b modificationType:(unsigned long long)c syllableRange:({_NSRange=QQ})d modificationScore:(double)e isTemporary:(BOOL)f ;
 - (id) initWithRange:({_NSRange=QQ})a replacementString:(id)b modificationType:(unsigned long long)c syllableRange:({_NSRange=QQ})d modificationScore:(double)e ;


@end
