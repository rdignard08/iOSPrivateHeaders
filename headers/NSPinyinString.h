
@interface NSPinyinString : NSString {

    NSString* _string;
    unsigned long long _syllableCount;
    unsigned long long _score;
    unsigned long long _rangeCount;
    unsigned long long _replacementCount;
    unsigned long long _transpositionCount;
    unsigned long long _insertionCount;
    unsigned long long _deletionCount;
    unsigned long long _firstModificationIndex;
    ^{_NSRange=QQ} _ranges;
    BOOL _lastSyllableIsPartial;
}
 + (id) _alternativesForInputString:(id)a;
 + (id) _prefixesForInputString:(id)a;
 + (id) _correctionsForInputString:(id)a;
 + (id) alternativesForInputString:(id)a;
 + (id) prefixesForInputString:(id)a;

 - (Class) classForCoder;
 - (id) initWithString:(id)a syllableCount:(unsigned long long)b lastSyllableIsPartial:(BOOL)c score:(unsigned long long)d replacementCount:(unsigned long long)e transpositionCount:(unsigned long long)f insertionCount:(unsigned long long)g deletionCount:(unsigned long long)h indexOfFirstModification:(unsigned long long)i rangeCount:(unsigned long long)j ranges:(^{_NSRange=QQ})k ;
 - (unsigned long long) syllableCount;
 - (BOOL) lastSyllableIsPartial;
 - (unsigned long long) score;
 - (unsigned long long) numberOfNonPinyinRanges;
 - (unsigned long long) numberOfReplacements;
 - (unsigned long long) numberOfTranspositions;
 - (unsigned long long) numberOfInsertions;
 - (unsigned long long) numberOfDeletions;
 - (unsigned long long) indexOfFirstModification;
 - ({_NSRange=QQ}) nonPinyinRangeAtIndex:(unsigned long long)a ;
 - (id) nonPinyinIndexSet;
 - (id) initWithString:(id)a syllableCount:(unsigned long long)b lastSyllableIsPartial:(BOOL)c score:(unsigned long long)d replacementCount:(unsigned long long)e transpositionCount:(unsigned long long)f insertionCount:(unsigned long long)g deletionCount:(unsigned long long)h rangeCount:(unsigned long long)i ranges:(^{_NSRange=QQ})j ;
 - (id) description;
 - (void) dealloc;
 - (id) string;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (unsigned long long) length;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
