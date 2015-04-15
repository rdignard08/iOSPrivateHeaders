
@interface NSTypesetter : NSObject {

    ^v _reserved;
}
 + (void) initialize;
 + (long long) defaultTypesetterBehavior;
 + (id) sharedSystemTypesetterForBehavior:(long long)a;
 + (long long) defaultStringDrawingTypesetterBehavior;
 + (BOOL) _usesATSTypesetter;
 + (id) sharedSystemTypesetter;

 - (void) dealloc;
 - (void) finalize;
 - (double) baselineOffsetInLayoutManager:(id)aglyphIndex:(unsigned long long)b;
 - (double) lineFragmentPadding;
 - ({_NSRange=QQ}) characterRangeForGlyphRange:({_NSRange=QQ})aactualGlyphRange:(^{_NSRange=QQ})b;
 - ({_NSRange=QQ}) glyphRangeForCharacterRange:({_NSRange=QQ})aactualCharacterRange:(^{_NSRange=QQ})b;
 - (id) attributedString;
 - (unsigned long long) actionForControlCharacterAtIndex:(unsigned long long)a;
 - ({_NSRange=QQ}) layoutCharactersInRange:({_NSRange=QQ})aforLayoutManager:(id)bmaximumNumberOfLineFragments:(unsigned long long)c;
 - (void) layoutGlyphsInLayoutManager:(id)astartingAtGlyphIndex:(unsigned long long)bmaxNumberOfLineFragments:(unsigned long long)cnextGlyphIndex:(^Q)d;
 - (id) substituteFontForFont:(id)a;
 - (id) layoutManager;
 - (BOOL) _allowsEllipsisGlyphSubstitution;
 - (id) _ellipsisFontForFont:(id)a;
 - (void) setLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforGlyphRange:({_NSRange=QQ})busedRect:({CGRect={CGPoint=dd}{CGSize=dd}})cbaselineOffset:(double)d;
 - (^{?=^{?}{_NSRange=QQ}{_NSRange=QQ}ff^?^?dddddd{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{_NSRange=QQ}@dq{?=b4b1b1b1b4b4b1b1b1b1b2b1b10}[0^v]}) _getAuxData;
 - (BOOL) bidiProcessingEnabled;
 - ({_NSRange=QQ}) paragraphCharacterRange;
 - ({_NSRange=QQ}) paragraphSeparatorCharacterRange;
 - (long long) _baseWritingDirection;
 - (long long) typesetterBehavior;
 - (id) currentTextContainer;
 - (void) beginLineWithGlyphAtIndex:(unsigned long long)a;
 - (void) getLineFragmentRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})ausedRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})bremainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})cforStartingGlyphAtIndex:(unsigned long long)dproposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})elineSpacing:(double)fparagraphSpacingBefore:(double)gparagraphSpacingAfter:(double)h;
 - (double) lineSpacingAfterGlyphAtIndex:(unsigned long long)awithProposedLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (double) paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)awithProposedLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (double) paragraphSpacingAfterGlyphAtIndex:(unsigned long long)awithProposedLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (BOOL) finalizeLineFragmentRect:(N^{CGRect={CGPoint=dd}{CGSize=dd}})alineFragmentUsedRect:(N^{CGRect={CGPoint=dd}{CGSize=dd}})bbaselineOffset:(N^d)cforGlyphRange:({_NSRange=QQ})d;
 - (void) setLocation:({CGPoint=dd})awithAdvancements:(r^d)bforStartOfGlyphRange:({_NSRange=QQ})c;
 - (void) setNotShownAttribute:(BOOL)aforGlyphRange:({_NSRange=QQ})b;
 - (void) endLineWithGlyphRange:({_NSRange=QQ})a;
 - (void) beginParagraph;
 - (void) endParagraph;
 - (void) getLineFragmentRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})ausedRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})bforParagraphSeparatorGlyphRange:({_NSRange=QQ})catProposedOrigin:({CGPoint=dd})d;
 - (float) hyphenationFactor;
 - (unsigned long long) layoutParagraphAtPoint:(^{CGPoint=dd})a;
 - (^{?=^{?}{_NSRange=QQ}{_NSRange=QQ}ff^?^?dddddd{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{_NSRange=QQ}@dq{?=b4b1b1b1b4b4b1b1b1b1b2b1b10}[0^v]}) _allocateAuxData;
 - (^(?={?=dddq}{?={CGRect={CGPoint=dd}{CGSize=dd}}})) _lineFragmentRectForProposedRectArgs;
 - ({_NSRange=QQ}) paragraphGlyphRange;
 - ({_NSRange=QQ}) paragraphSeparatorGlyphRange;
 - (id) textContainers;
 - (id) currentParagraphStyle;
 - (BOOL) _forceOriginalFontBaseline;
 - (unsigned long long) getGlyphsInRange:({_NSRange=QQ})aglyphs:(^S)bproperties:(^q)ccharacterIndexes:(^Q)dbidiLevels:(char*)e;
 - (id) textTabForGlyphLocation:(double)awritingDirection:(long long)bmaxLocation:(double)c;
 - (BOOL) _isLineBreakModeOverridden;
 - (float) tightenThresholdForTruncation;
 - (BOOL) usesFontLeading;
 - (void) substituteGlyphsInRange:({_NSRange=QQ})awithGlyphs:(^I)b;
 - (void) insertGlyph:(unsigned int)aatGlyphIndex:(unsigned long long)bcharacterIndex:(unsigned long long)c;
 - (void) setAttachmentSize:({CGSize=dd})aforGlyphRange:({_NSRange=QQ})b;
 - (void) setBidiLevels:(r*)aforGlyphRange:({_NSRange=QQ})b;
 - (void) setDrawsOutsideLineFragment:(BOOL)aforGlyphRange:({_NSRange=QQ})b;
 - (void) setHardInvalidation:(BOOL)aforGlyphRange:({_NSRange=QQ})b;
 - (void) setUsesFontLeading:(BOOL)a;
 - (void) _setForceOriginalFontBaseline:(BOOL)a;
 - (void) setTypesetterBehavior:(long long)a;
 - (void) setParagraphGlyphRange:({_NSRange=QQ})aseparatorGlyphRange:({_NSRange=QQ})b;
 - (void) deleteGlyphsInRange:({_NSRange=QQ})a;
 - (unsigned long long) getGlyphsInRange:({_NSRange=QQ})aglyphs:(^I)bcharacterIndexes:(^Q)cglyphInscriptions:(^Q)delasticBits:(^B)ebidiLevels:(char*)f;
 - (void) setHyphenationFactor:(float)a;
 - (void) setAttributedString:(id)a;
 - (void) setLineFragmentPadding:(double)a;
 - (id) attributesForExtraLineFragment;
 - (void) _updateParagraphStyleCache:(id)a;
 - (unsigned long long) _getRemainingNominalParagraphRange:(^{_NSRange=QQ})aandParagraphSeparatorRange:(^{_NSRange=QQ})bcharactarIndex:(unsigned long long)clayoutManager:(id)dstring:(id)e;
 - (void) _setLineBreakModeOverridden:(BOOL)a;
 - (void) _layoutGlyphsInLayoutManager:(id)astartingAtGlyphIndex:(unsigned long long)bmaxNumberOfLineFragments:(unsigned long long)cmaxCharacterIndex:(unsigned long long)dnextGlyphIndex:(^Q)enextCharacterIndex:(^Q)f;
 - (void) setBidiProcessingEnabled:(BOOL)a;
 - (void) setTightenThresholdForTruncation:(float)a;


@end
