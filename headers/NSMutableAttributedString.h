
@interface NSMutableAttributedString : NSAttributedString {

}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) MP_addAttributes:(id)atoOccurrencesOfSubstring:(id)boptions:(unsigned long long)c;
 - (void) _ui_restoreOriginalFontAttributes;
 - (void) convertBidiControlCharactersToWritingDirection;
 - (BOOL) _attributeFixingInProgress;
 - (void) _setAttributeFixingInProgress:(BOOL)a;
 - (void) fixGlyphInfoAttributeInRange:({_NSRange=QQ})a;
 - (void) fixFontAttributeInRange:({_NSRange=QQ})a;
 - (void) fixParagraphStyleAttributeInRange:({_NSRange=QQ})a;
 - (void) fixAttachmentAttributeInRange:({_NSRange=QQ})a;
 - (BOOL) _shouldSetOriginalFontAttribute;
 - (void) _fixGlyphInfo:(id)ainRange:({_NSRange=QQ})b;
 - (void) _changeIntAttribute:(id)aby:(long long)brange:({_NSRange=QQ})c;
 - (BOOL) readFromURL:(id)aoptions:(id)bdocumentAttributes:(^@)cerror:(^@)d;
 - (BOOL) readFromData:(id)aoptions:(id)bdocumentAttributes:(^@)cerror:(^@)d;
 - (void) setBaseWritingDirection:(long long)arange:({_NSRange=QQ})b;
 - ({_NSRange=QQ}) convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)a;
 - ({_NSRange=QQ}) convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)a;
 - (void) fixAttributesInRange:({_NSRange=QQ})a;
 - (void) setAlignment:(long long)arange:({_NSRange=QQ})b;
 - (void) superscriptRange:({_NSRange=QQ})a;
 - (void) subscriptRange:({_NSRange=QQ})a;
 - (void) unscriptRange:({_NSRange=QQ})a;
 - (BOOL) readFromFileURL:(id)aoptions:(id)bdocumentAttributes:(^@)cerror:(^@)d;
 - (BOOL) readFromURL:(id)aoptions:(id)bdocumentAttributes:(^@)c;
 - (BOOL) readFromData:(id)aoptions:(id)bdocumentAttributes:(^@)c;
 - (void) convertWritingDirectionToBidiControlCharacters;
 - (void) appendAttributedString:(id)a;
 - (void) addAttributesWeakly:(id)arange:({_NSRange=QQ})b;
 - (id) mutableString;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (void) setAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttribute:(id)avalue:(id)brange:({_NSRange=QQ})c;
 - (void) removeAttribute:(id)arange:({_NSRange=QQ})b;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithAttributedString:(id)b;
 - (void) beginEditing;
 - (void) endEditing;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a;
 - (void) insertAttributedString:(id)aatIndex:(unsigned long long)b;
 - (void) setAttributedString:(id)a;


@end
