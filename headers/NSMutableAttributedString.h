
@interface NSMutableAttributedString : NSAttributedString {

}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) MP_addAttributes:(id)a toOccurrencesOfSubstring:(id)b options:(unsigned long long)c ;
 - (void) _ui_restoreOriginalFontAttributes;
 - (void) convertBidiControlCharactersToWritingDirection;
 - (BOOL) _attributeFixingInProgress;
 - (void) _setAttributeFixingInProgress:(BOOL)a ;
 - (void) fixGlyphInfoAttributeInRange:({_NSRange=QQ})a ;
 - (void) fixFontAttributeInRange:({_NSRange=QQ})a ;
 - (void) fixParagraphStyleAttributeInRange:({_NSRange=QQ})a ;
 - (void) fixAttachmentAttributeInRange:({_NSRange=QQ})a ;
 - (BOOL) _shouldSetOriginalFontAttribute;
 - (void) _fixGlyphInfo:(id)a inRange:({_NSRange=QQ})b ;
 - (void) _changeIntAttribute:(id)a by:(long long)b range:({_NSRange=QQ})c ;
 - (BOOL) readFromURL:(id)a options:(id)b documentAttributes:(^@)c error:(^@)d ;
 - (BOOL) readFromData:(id)a options:(id)b documentAttributes:(^@)c error:(^@)d ;
 - (void) setBaseWritingDirection:(long long)a range:({_NSRange=QQ})b ;
 - ({_NSRange=QQ}) convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)a ;
 - ({_NSRange=QQ}) convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)a ;
 - (void) fixAttributesInRange:({_NSRange=QQ})a ;
 - (void) setAlignment:(long long)a range:({_NSRange=QQ})b ;
 - (void) superscriptRange:({_NSRange=QQ})a ;
 - (void) subscriptRange:({_NSRange=QQ})a ;
 - (void) unscriptRange:({_NSRange=QQ})a ;
 - (BOOL) readFromFileURL:(id)a options:(id)b documentAttributes:(^@)c error:(^@)d ;
 - (BOOL) readFromURL:(id)a options:(id)b documentAttributes:(^@)c ;
 - (BOOL) readFromData:(id)a options:(id)b documentAttributes:(^@)c ;
 - (void) convertWritingDirectionToBidiControlCharacters;
 - (void) appendAttributedString:(id)a ;
 - (void) addAttributesWeakly:(id)a range:({_NSRange=QQ})b ;
 - (id) mutableString;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (void) setAttributes:(id)a range:({_NSRange=QQ})b ;
 - (void) addAttributes:(id)a range:({_NSRange=QQ})b ;
 - (void) addAttribute:(id)a value:(id)b range:({_NSRange=QQ})c ;
 - (void) removeAttribute:(id)a range:({_NSRange=QQ})b ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withAttributedString:(id)b ;
 - (void) beginEditing;
 - (void) endEditing;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a ;
 - (void) insertAttributedString:(id)a atIndex:(unsigned long long)b ;
 - (void) setAttributedString:(id)a ;


@end
