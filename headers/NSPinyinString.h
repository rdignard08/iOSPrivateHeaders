
@interface NSPinyinString : NSString {

    @"NSString" _string;
    Q _syllableCount;
    Q _score;
    Q _rangeCount;
    Q _replacementCount;
    Q _transpositionCount;
    Q _insertionCount;
    Q _deletionCount;
    Q _firstModificationIndex;
    ^{_NSRange=QQ} _ranges;
    BOOL _lastSyllableIsPartial;
}
 + (id) _alternativesForInputString:(id)a;
 + (id) _prefixesForInputString:(id)a;
 + (id) _correctionsForInputString:(id)a;
 + (id) alternativesForInputString:(id)a;
 + (id) prefixesForInputString:(id)a;

 - (Class) classForCoder;
 - (id) initWithString:(id)asyllableCount:(Q)blastSyllableIsPartial:(BOOL)cscore:(Q)dreplacementCount:(Q)etranspositionCount:(Q)finsertionCount:(Q)gdeletionCount:(Q)hindexOfFirstModification:(Q)irangeCount:(Q)jranges:(^{_NSRange=QQ})k;
 - (Q) syllableCount;
 - (BOOL) lastSyllableIsPartial;
 - (Q) score;
 - (Q) numberOfNonPinyinRanges;
 - (Q) numberOfReplacements;
 - (Q) numberOfTranspositions;
 - (Q) numberOfInsertions;
 - (Q) numberOfDeletions;
 - (Q) indexOfFirstModification;
 - ({_NSRange=QQ}) nonPinyinRangeAtIndex:(Q)a;
 - (id) nonPinyinIndexSet;
 - (id) initWithString:(id)asyllableCount:(Q)blastSyllableIsPartial:(BOOL)cscore:(Q)dreplacementCount:(Q)etranspositionCount:(Q)finsertionCount:(Q)gdeletionCount:(Q)hrangeCount:(Q)iranges:(^{_NSRange=QQ})j;
 - (id) description;
 - (void) dealloc;
 - (id) string;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (S) characterAtIndex:(Q)a;
 - (Q) length;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
