
@interface PRPinyinString : NSPinyinString {

    Q _originalLength;
    Q _originalCheckedLength;
    Q _modificationCount;
    ^Q _modificationTypes;
    ^{_NSRange=QQ} _originalRanges;
    ^{_NSRange=QQ} _finalRanges;
    ^{_NSRange=QQ} _originalSyllableRanges;
    ^{_NSRange=QQ} _originalAdditionalSyllableRanges;
}
 + (id) alternativesForInputString:(id)a;
 + (id) prefixesForInputString:(id)a;
 + (id) correctionsForInputString:(id)a;

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
 - (id) description;
 - (void) dealloc;
 - (id) string;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (S) characterAtIndex:(Q)a;
 - (Q) length;
 - (Q) numberOfModifications;
 - (Q) typeOfModificationAtIndex:(Q)a;
 - ({_NSRange=QQ}) originalRangeForModificationAtIndex:(Q)a;
 - ({_NSRange=QQ}) finalRangeForModificationAtIndex:(Q)a;
 - ({_NSRange=QQ}) originalSyllableRangeForModificationAtIndex:(Q)a;
 - ({_NSRange=QQ}) originalAdditionalSyllableRangeForModificationAtIndex:(Q)a;
 - (id) annotatedString;
 - (Q) originalLength;
 - (Q) originalCheckedLength;
 - (id) initWithString:(id)asyllableCount:(Q)blastSyllableIsPartial:(BOOL)cscore:(Q)doriginalLength:(Q)emodificationType:(Q)foriginalModificationRange:({_NSRange=QQ})gfinalModificationRange:({_NSRange=QQ})h;
 - (id) initWithString:(id)asyllableCount:(Q)blastSyllableIsPartial:(BOOL)cscore:(Q)doriginalLength:(Q)emodificationType:(Q)foriginalModificationRange:({_NSRange=QQ})gfinalModificationRange:({_NSRange=QQ})horiginalSyllableRange:({_NSRange=QQ})i;
 - (id) initWithString:(id)asyllableCount:(Q)blastSyllableIsPartial:(BOOL)cscore:(Q)doriginalLength:(Q)emodificationType:(Q)foriginalModificationRange:({_NSRange=QQ})gfinalModificationRange:({_NSRange=QQ})horiginalSyllableRange:({_NSRange=QQ})ioriginalAdditionalSyllableRange:({_NSRange=QQ})j;
 - (id) initWithUncheckedString:(id)ascore:(Q)boriginalLength:(Q)c;
 - (id) initWithString:(id)asyllableCount:(Q)blastSyllableIsPartial:(BOOL)cscore:(Q)doriginalLength:(Q)eoriginalCheckedLength:(Q)fnumberOfModifications:(Q)gmodificationTypes:(^Q)horiginalModificationRanges:(^{_NSRange=QQ})ifinalModificationRanges:(^{_NSRange=QQ})joriginalSyllableRanges:(^{_NSRange=QQ})koriginalAdditionalSyllableRanges:(^{_NSRange=QQ})l;
 - (Q) finalCheckedLength;


@end
