
@interface PRPinyinString : NSPinyinString {

    unsigned long long _originalLength;
    unsigned long long _originalCheckedLength;
    unsigned long long _modificationCount;
    ^Q _modificationTypes;
    ^{_NSRange=QQ} _originalRanges;
    ^{_NSRange=QQ} _finalRanges;
    ^{_NSRange=QQ} _originalSyllableRanges;
    ^{_NSRange=QQ} _originalAdditionalSyllableRanges;
}
 + (id) alternativesForInputString:(id)a;
 + (id) prefixesForInputString:(id)a;
 + (id) correctionsForInputString:(id)a;

 - (unsigned long long) syllableCount;
 - (BOOL) lastSyllableIsPartial;
 - (unsigned long long) score;
 - (unsigned long long) numberOfNonPinyinRanges;
 - (unsigned long long) numberOfReplacements;
 - (unsigned long long) numberOfTranspositions;
 - (unsigned long long) numberOfInsertions;
 - (unsigned long long) numberOfDeletions;
 - (unsigned long long) indexOfFirstModification;
 - ({_NSRange=QQ}) nonPinyinRangeAtIndex:(unsigned long long)a;
 - (id) nonPinyinIndexSet;
 - (id) description;
 - (void) dealloc;
 - (id) string;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (unsigned long long) length;
 - (unsigned long long) numberOfModifications;
 - (unsigned long long) typeOfModificationAtIndex:(unsigned long long)a;
 - ({_NSRange=QQ}) originalRangeForModificationAtIndex:(unsigned long long)a;
 - ({_NSRange=QQ}) finalRangeForModificationAtIndex:(unsigned long long)a;
 - ({_NSRange=QQ}) originalSyllableRangeForModificationAtIndex:(unsigned long long)a;
 - ({_NSRange=QQ}) originalAdditionalSyllableRangeForModificationAtIndex:(unsigned long long)a;
 - (id) annotatedString;
 - (unsigned long long) originalLength;
 - (unsigned long long) originalCheckedLength;
 - (id) initWithString:(id)asyllableCount:(unsigned long long)blastSyllableIsPartial:(BOOL)cscore:(unsigned long long)doriginalLength:(unsigned long long)emodificationType:(unsigned long long)foriginalModificationRange:({_NSRange=QQ})gfinalModificationRange:({_NSRange=QQ})h;
 - (id) initWithString:(id)asyllableCount:(unsigned long long)blastSyllableIsPartial:(BOOL)cscore:(unsigned long long)doriginalLength:(unsigned long long)emodificationType:(unsigned long long)foriginalModificationRange:({_NSRange=QQ})gfinalModificationRange:({_NSRange=QQ})horiginalSyllableRange:({_NSRange=QQ})i;
 - (id) initWithString:(id)asyllableCount:(unsigned long long)blastSyllableIsPartial:(BOOL)cscore:(unsigned long long)doriginalLength:(unsigned long long)emodificationType:(unsigned long long)foriginalModificationRange:({_NSRange=QQ})gfinalModificationRange:({_NSRange=QQ})horiginalSyllableRange:({_NSRange=QQ})ioriginalAdditionalSyllableRange:({_NSRange=QQ})j;
 - (id) initWithUncheckedString:(id)ascore:(unsigned long long)boriginalLength:(unsigned long long)c;
 - (id) initWithString:(id)asyllableCount:(unsigned long long)blastSyllableIsPartial:(BOOL)cscore:(unsigned long long)doriginalLength:(unsigned long long)eoriginalCheckedLength:(unsigned long long)fnumberOfModifications:(unsigned long long)gmodificationTypes:(^Q)horiginalModificationRanges:(^{_NSRange=QQ})ifinalModificationRanges:(^{_NSRange=QQ})joriginalSyllableRanges:(^{_NSRange=QQ})koriginalAdditionalSyllableRanges:(^{_NSRange=QQ})l;
 - (unsigned long long) finalCheckedLength;


@end
