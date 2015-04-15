
@interface NSTypesetter : NSObject {

    ^v _reserved;
}
 + (void) initialize;
 + (q) defaultTypesetterBehavior;
 + (id) sharedSystemTypesetterForBehavior:(q)a;
 + (q) defaultStringDrawingTypesetterBehavior;
 + (BOOL) _usesATSTypesetter;
 + (id) sharedSystemTypesetter;

 - (void) dealloc;
 - (void) finalize;
 - (d) baselineOffsetInLayoutManager:(id)aglyphIndex:(Q)b;
 - (d) lineFragmentPadding;
 - ({_NSRange=QQ}) characterRangeForGlyphRange:({_NSRange=QQ})aactualGlyphRange:(^{_NSRange=QQ})b;
 - ({_NSRange=QQ}) glyphRangeForCharacterRange:({_NSRange=QQ})aactualCharacterRange:(^{_NSRange=QQ})b;
 - (id) attributedString;
 - (Q) actionForControlCharacterAtIndex:(Q)a;
 - ({_NSRange=QQ}) layoutCharactersInRange:({_NSRange=QQ})aforLayoutManager:(id)bmaximumNumberOfLineFragments:(Q)c;
 - (void) layoutGlyphsInLayoutManager:(id)astartingAtGlyphIndex:(Q)bmaxNumberOfLineFragments:(Q)cnextGlyphIndex:(^Q)d;
 - (id) substituteFontForFont:(id)a;
 - (id) layoutManager;
 - (BOOL) _allowsEllipsisGlyphSubstitution;
 - (id) _ellipsisFontForFont:(id)a;
 - (void) setLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforGlyphRange:({_NSRange=QQ})busedRect:({CGRect={CGPoint=dd}{CGSize=dd}})cbaselineOffset:(d)d;
 - (^{?=^{?}{_NSRange=QQ}{_NSRange=QQ}ff^?^?dddddd{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{_NSRange=QQ}@dq{?=b4b1b1b1b4b4b1b1b1b1b2b1b10}[0^v]}) _getAuxData;
 - (BOOL) bidiProcessingEnabled;
 - ({_NSRange=QQ}) paragraphCharacterRange;
 - ({_NSRange=QQ}) paragraphSeparatorCharacterRange;
 - (q) _baseWritingDirection;
 - (q) typesetterBehavior;
 - (id) currentTextContainer;
 - (void) beginLineWithGlyphAtIndex:(Q)a;
 - (void) getLineFragmentRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})ausedRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})bremainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})cforStartingGlyphAtIndex:(Q)dproposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})elineSpacing:(d)fparagraphSpacingBefore:(d)gparagraphSpacingAfter:(d)h;
 - (d) lineSpacingAfterGlyphAtIndex:(Q)awithProposedLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (d) paragraphSpacingBeforeGlyphAtIndex:(Q)awithProposedLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (d) paragraphSpacingAfterGlyphAtIndex:(Q)awithProposedLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (BOOL) finalizeLineFragmentRect:(N^{CGRect={CGPoint=dd}{CGSize=dd}})alineFragmentUsedRect:(N^{CGRect={CGPoint=dd}{CGSize=dd}})bbaselineOffset:(N^d)cforGlyphRange:({_NSRange=QQ})d;
 - (void) setLocation:({CGPoint=dd})awithAdvancements:(r^d)bforStartOfGlyphRange:({_NSRange=QQ})c;
 - (void) setNotShownAttribute:(BOOL)aforGlyphRange:({_NSRange=QQ})b;
 - (void) endLineWithGlyphRange:({_NSRange=QQ})a;
 - (void) beginParagraph;
 - (void) endParagraph;
 - (void) getLineFragmentRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})ausedRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})bforParagraphSeparatorGlyphRange:({_NSRange=QQ})catProposedOrigin:({CGPoint=dd})d;
 - (f) hyphenationFactor;
 - (Q) layoutParagraphAtPoint:(^{CGPoint=dd})a;
 - (^{?=^{?}{_NSRange=QQ}{_NSRange=QQ}ff^?^?dddddd{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{_NSRange=QQ}@dq{?=b4b1b1b1b4b4b1b1b1b1b2b1b10}[0^v]}) _allocateAuxData;
 - (^(?={?=dddq}{?={CGRect={CGPoint=dd}{CGSize=dd}}})) _lineFragmentRectForProposedRectArgs;
 - ({_NSRange=QQ}) paragraphGlyphRange;
 - ({_NSRange=QQ}) paragraphSeparatorGlyphRange;
 - (id) textContainers;
 - (id) currentParagraphStyle;
 - (BOOL) _forceOriginalFontBaseline;
 - (Q) getGlyphsInRange:({_NSRange=QQ})aglyphs:(^S)bproperties:(^q)ccharacterIndexes:(^Q)dbidiLevels:(*)e;
 - (id) textTabForGlyphLocation:(d)awritingDirection:(q)bmaxLocation:(d)c;
 - (BOOL) _isLineBreakModeOverridden;
 - (f) tightenThresholdForTruncation;
 - (BOOL) usesFontLeading;
 - (void) substituteGlyphsInRange:({_NSRange=QQ})awithGlyphs:(^I)b;
 - (void) insertGlyph:(I)aatGlyphIndex:(Q)bcharacterIndex:(Q)c;
 - (void) setAttachmentSize:({CGSize=dd})aforGlyphRange:({_NSRange=QQ})b;
 - (void) setBidiLevels:(r*)aforGlyphRange:({_NSRange=QQ})b;
 - (void) setDrawsOutsideLineFragment:(BOOL)aforGlyphRange:({_NSRange=QQ})b;
 - (void) setHardInvalidation:(BOOL)aforGlyphRange:({_NSRange=QQ})b;
 - (void) setUsesFontLeading:(BOOL)a;
 - (void) _setForceOriginalFontBaseline:(BOOL)a;
 - (void) setTypesetterBehavior:(q)a;
 - (void) setParagraphGlyphRange:({_NSRange=QQ})aseparatorGlyphRange:({_NSRange=QQ})b;
 - (void) deleteGlyphsInRange:({_NSRange=QQ})a;
 - (Q) getGlyphsInRange:({_NSRange=QQ})aglyphs:(^I)bcharacterIndexes:(^Q)cglyphInscriptions:(^Q)delasticBits:(^B)ebidiLevels:(*)f;
 - (void) setHyphenationFactor:(f)a;
 - (void) setAttributedString:(id)a;
 - (void) setLineFragmentPadding:(d)a;
 - (id) attributesForExtraLineFragment;
 - (void) _updateParagraphStyleCache:(id)a;
 - (Q) _getRemainingNominalParagraphRange:(^{_NSRange=QQ})aandParagraphSeparatorRange:(^{_NSRange=QQ})bcharactarIndex:(Q)clayoutManager:(id)dstring:(id)e;
 - (void) _setLineBreakModeOverridden:(BOOL)a;
 - (void) _layoutGlyphsInLayoutManager:(id)astartingAtGlyphIndex:(Q)bmaxNumberOfLineFragments:(Q)cmaxCharacterIndex:(Q)dnextGlyphIndex:(^Q)enextCharacterIndex:(^Q)f;
 - (void) setBidiProcessingEnabled:(BOOL)a;
 - (void) setTightenThresholdForTruncation:(f)a;


@end
