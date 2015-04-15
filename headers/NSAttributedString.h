
@protocol NSCopying, NSMutableCopying, NSSecureCoding;
@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

}
@property (atomic, copy, readonly) NSString* string;
 + (id) attributedStringWithAttachment:(id)a;
 + (id) _documentTypeForFileType:(id)a;
 + (BOOL) supportsSecureCoding;
 + (void) _setAttributedDictionaryClass:(Class)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) MP_attributedStringByAddingAttributes:(id)atoOccurrencesOfSubstring:(id)boptions:(unsigned long long)c;
 - (id) _ui_secureStringWithPointSize:(double)a;
 - (long long) _ui_resolvedTextAlignment;
 - (id) _ui_attributedStringWithOriginalFontAttributes;
 - (id) _ui_fontsInRange:({_NSRange=QQ})ausingDefaultFont:(id)b;
 - (id) _ui_synthesizeAttributedSubstringFromRange:({_NSRange=QQ})ausingDefaultAttributes:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRectWithSize:({CGSize=dd})aoptions:(long long)bcontext:(id)c;
 - (id) _ui_attributedSubstringFromRange:({_NSRange=QQ})awithTrackingAdjustment:(double)b;
 - (id) _ui_attributedSubstringFromRange:({_NSRange=QQ})ascaledByScaleFactor:(double)b;
 - (void) drawWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})aoptions:(long long)bcontext:(id)c;
 - (void) drawWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})aoptions:(long long)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRectWithSize:({CGSize=dd})aoptions:(long long)b;
 - ({CGSize=dd}) size;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawAtPoint:({CGPoint=dd})a;
 - (id) dataFromRange:({_NSRange=QQ})adocumentAttributes:(id)berror:(^@)c;
 - (id) initWithData:(id)aoptions:(id)bdocumentAttributes:(^@)cerror:(^@)d;
 - ({_NSRange=QQ}) rangeOfTextTable:(id)aatIndex:(unsigned long long)b;
 - ({_NSRange=QQ}) rangeOfTextBlock:(id)aatIndex:(unsigned long long)b;
 - ({_NSRange=QQ}) _rangeOfTextTableRow:(id)aatIndex:(unsigned long long)bcompleteRow:(^B)c;
 - ({_NSRange=QQ}) _rangeOfTextTableRow:(id)aatIndex:(unsigned long long)b;
 - (BOOL) _isStringDrawingTextStorage;
 - (unsigned long long) _lineBreakBeforeIndex:(unsigned long long)awithinRange:({_NSRange=QQ})busesAlternativeBreaker:(BOOL)c;
 - (unsigned long long) lineBreakByHyphenatingBeforeIndex:(unsigned long long)awithinRange:({_NSRange=QQ})b;
 - ({_NSRange=QQ}) doubleClickAtIndex:(unsigned long long)ainRange:({_NSRange=QQ})b;
 - (id) stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:({_NSRange=QQ})a;
 - (id) fileWrapperFromRange:({_NSRange=QQ})adocumentAttributes:(id)berror:(^@)c;
 - (id) _initWithRTFSelector:(SEL)aargument:(id)bdocumentAttributes:(^@)c;
 - (id) initWithURL:(id)aoptions:(id)bdocumentAttributes:(^@)cerror:(^@)d;
 - (id) initWithHTML:(id)aoptions:(id)bdocumentAttributes:(^@)c;
 - (id) defaultLanguage;
 - ({_NSRange=QQ}) doubleClickAtIndex:(unsigned long long)a;
 - (unsigned long long) lineBreakBeforeIndex:(unsigned long long)awithinRange:({_NSRange=QQ})b;
 - (unsigned long long) nextWordFromIndex:(unsigned long long)aforward:(BOOL)b;
 - (id) RTFDFileWrapperFromRange:({_NSRange=QQ})adocumentAttributes:(id)b;
 - (id) docFormatFromRange:({_NSRange=QQ})adocumentAttributes:(id)b;
 - (void) _readDocumentFragment:(id)afromRange:({_NSRange=QQ})bdocumentAttributes:(id)csubresources:(^@)d;
 - (id) initWithRTFDFileWrapper:(id)adocumentAttributes:(^@)b;
 - (id) initWithDocFormat:(id)adocumentAttributes:(^@)b;
 - (id) initWithFileURL:(id)aoptions:(id)bdocumentAttributes:(^@)cerror:(^@)d;
 - (id) _initWithURLFunnel:(id)aoptions:(id)bdocumentAttributes:(^@)c;
 - (id) initWithURL:(id)adocumentAttributes:(^@)b;
 - (id) initWithPath:(id)adocumentAttributes:(^@)b;
 - (id) initWithHTML:(id)adocumentAttributes:(^@)b;
 - (id) initWithHTML:(id)abaseURL:(id)bdocumentAttributes:(^@)c;
 - (id) _initWithDOMRange:(id)a;
 - (id) fontAttributesInRange:({_NSRange=QQ})a;
 - (id) rulerAttributesInRange:({_NSRange=QQ})a;
 - (BOOL) _atStartOfTextTable:(id)aatIndex:(unsigned long long)b;
 - (BOOL) _atEndOfTextTable:(id)aatIndex:(unsigned long long)b;
 - (BOOL) _atStartOfTextTableRow:(id)aatIndex:(unsigned long long)b;
 - (BOOL) _atEndOfTextTableRow:(id)aatIndex:(unsigned long long)b;
 - ({_NSRange=QQ}) rangeOfTextList:(id)aatIndex:(unsigned long long)b;
 - (long long) itemNumberInTextList:(id)aatIndex:(unsigned long long)b;
 - (id) _documentFromRange:({_NSRange=QQ})adocument:(id)bdocumentAttributes:(id)csubresources:(^@)d;
 - (BOOL) containsAttachments;
 - (id) initWithRTFD:(id)adocumentAttributes:(^@)b;
 - (id) initWithRTF:(id)adocumentAttributes:(^@)b;
 - (id) RTFFromRange:({_NSRange=QQ})adocumentAttributes:(id)b;
 - (id) RTFDFromRange:({_NSRange=QQ})adocumentAttributes:(id)b;
 - (id) _UIKBStringWideAttributeValueForKey:(id)a;
 - (Class) classForCoder;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) attributedSubstringFromRange:({_NSRange=QQ})a;
 - (BOOL) isEqualToAttributedString:(id)a;
 - (id) attributedSubstringFromRange:({_NSRange=QQ})areplacingCharactersInRanges:(r^{_NSRange=QQ})bnumberOfRanges:(long long)cwithString:(id)d;
 - (id) attributedStringByWeaklyAddingAttributes:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) _createAttributedSubstringWithRange:({_NSRange=QQ})a;
 - (id) string;
 - (id) attributesAtIndex:(unsigned long long)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(unsigned long long)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) attributesAtIndex:(unsigned long long)alongestEffectiveRange:(^{_NSRange=QQ})binRange:({_NSRange=QQ})c;
 - (id) attribute:(id)aatIndex:(unsigned long long)blongestEffectiveRange:(^{_NSRange=QQ})cinRange:({_NSRange=QQ})d;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) _cfTypeID;
 - (unsigned long long) length;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) enumerateAttribute:(id)ainRange:({_NSRange=QQ})boptions:(unsigned long long)cusingBlock:(@?)d;
 - (void) enumerateAttributesInRange:({_NSRange=QQ})aoptions:(unsigned long long)busingBlock:(@?)c;


@end
