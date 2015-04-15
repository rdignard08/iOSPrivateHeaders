
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
 - (double) baselineOffsetInLayoutManager:(id)a glyphIndex:(unsigned long long)b ;
 - (double) lineFragmentPadding;
 - ({_NSRange=QQ}) characterRangeForGlyphRange:({_NSRange=QQ})a actualGlyphRange:(^{_NSRange=QQ})b ;
 - ({_NSRange=QQ}) glyphRangeForCharacterRange:({_NSRange=QQ})a actualCharacterRange:(^{_NSRange=QQ})b ;
 - (id) attributedString;
 - (unsigned long long) actionForControlCharacterAtIndex:(unsigned long long)a ;
 - ({_NSRange=QQ}) layoutCharactersInRange:({_NSRange=QQ})a forLayoutManager:(id)b maximumNumberOfLineFragments:(unsigned long long)c ;
 - (void) layoutGlyphsInLayoutManager:(id)a startingAtGlyphIndex:(unsigned long long)b maxNumberOfLineFragments:(unsigned long long)c nextGlyphIndex:(^Q)d ;
 - (id) substituteFontForFont:(id)a ;
 - (id) layoutManager;
 - (BOOL) _allowsEllipsisGlyphSubstitution;
 - (id) _ellipsisFontForFont:(id)a ;
 - (void) setLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forGlyphRange:({_NSRange=QQ})b usedRect:({CGRect={CGPoint=dd}{CGSize=dd}})c baselineOffset:(double)d ;
 - (^{?=^{?}{_NSRange=QQ}{_NSRange=QQ}ff^?^?dddddd{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{_NSRange=QQ}@dq{?=b4b1b1b1b4b4b1b1b1b1b2b1b10}[0^v]}) _getAuxData;
 - (BOOL) bidiProcessingEnabled;
 - ({_NSRange=QQ}) paragraphCharacterRange;
 - ({_NSRange=QQ}) paragraphSeparatorCharacterRange;
 - (long long) _baseWritingDirection;
 - (long long) typesetterBehavior;
 - (id) currentTextContainer;
 - (void) beginLineWithGlyphAtIndex:(unsigned long long)a ;
 - (void) getLineFragmentRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})a usedRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b remainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})c forStartingGlyphAtIndex:(unsigned long long)d proposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})e lineSpacing:(double)f paragraphSpacingBefore:(double)g paragraphSpacingAfter:(double)h ;
 - (double) lineSpacingAfterGlyphAtIndex:(unsigned long long)a withProposedLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (double) paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)a withProposedLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (double) paragraphSpacingAfterGlyphAtIndex:(unsigned long long)a withProposedLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (BOOL) finalizeLineFragmentRect:(N^{CGRect={CGPoint=dd}{CGSize=dd}})a lineFragmentUsedRect:(N^{CGRect={CGPoint=dd}{CGSize=dd}})b baselineOffset:(N^d)c forGlyphRange:({_NSRange=QQ})d ;
 - (void) setLocation:({CGPoint=dd})a withAdvancements:(r^d)b forStartOfGlyphRange:({_NSRange=QQ})c ;
 - (void) setNotShownAttribute:(BOOL)a forGlyphRange:({_NSRange=QQ})b ;
 - (void) endLineWithGlyphRange:({_NSRange=QQ})a ;
 - (void) beginParagraph;
 - (void) endParagraph;
 - (void) getLineFragmentRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})a usedRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b forParagraphSeparatorGlyphRange:({_NSRange=QQ})c atProposedOrigin:({CGPoint=dd})d ;
 - (float) hyphenationFactor;
 - (unsigned long long) layoutParagraphAtPoint:(^{CGPoint=dd})a ;
 - (^{?=^{?}{_NSRange=QQ}{_NSRange=QQ}ff^?^?dddddd{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{_NSRange=QQ}@dq{?=b4b1b1b1b4b4b1b1b1b1b2b1b10}[0^v]}) _allocateAuxData;
 - (^(?={?=dddq}{?={CGRect={CGPoint=dd}{CGSize=dd}}})) _lineFragmentRectForProposedRectArgs;
 - ({_NSRange=QQ}) paragraphGlyphRange;
 - ({_NSRange=QQ}) paragraphSeparatorGlyphRange;
 - (id) textContainers;
 - (id) currentParagraphStyle;
 - (BOOL) _forceOriginalFontBaseline;
 - (unsigned long long) getGlyphsInRange:({_NSRange=QQ})a glyphs:(^S)b properties:(^q)c characterIndexes:(^Q)d bidiLevels:(char*)e ;
 - (id) textTabForGlyphLocation:(double)a writingDirection:(long long)b maxLocation:(double)c ;
 - (BOOL) _isLineBreakModeOverridden;
 - (float) tightenThresholdForTruncation;
 - (BOOL) usesFontLeading;
 - (void) substituteGlyphsInRange:({_NSRange=QQ})a withGlyphs:(^I)b ;
 - (void) insertGlyph:(unsigned int)a atGlyphIndex:(unsigned long long)b characterIndex:(unsigned long long)c ;
 - (void) setAttachmentSize:({CGSize=dd})a forGlyphRange:({_NSRange=QQ})b ;
 - (void) setBidiLevels:(r*)a forGlyphRange:({_NSRange=QQ})b ;
 - (void) setDrawsOutsideLineFragment:(BOOL)a forGlyphRange:({_NSRange=QQ})b ;
 - (void) setHardInvalidation:(BOOL)a forGlyphRange:({_NSRange=QQ})b ;
 - (void) setUsesFontLeading:(BOOL)a ;
 - (void) _setForceOriginalFontBaseline:(BOOL)a ;
 - (void) setTypesetterBehavior:(long long)a ;
 - (void) setParagraphGlyphRange:({_NSRange=QQ})a separatorGlyphRange:({_NSRange=QQ})b ;
 - (void) deleteGlyphsInRange:({_NSRange=QQ})a ;
 - (unsigned long long) getGlyphsInRange:({_NSRange=QQ})a glyphs:(^I)b characterIndexes:(^Q)c glyphInscriptions:(^Q)d elasticBits:(^B)e bidiLevels:(char*)f ;
 - (void) setHyphenationFactor:(float)a ;
 - (void) setAttributedString:(id)a ;
 - (void) setLineFragmentPadding:(double)a ;
 - (id) attributesForExtraLineFragment;
 - (void) _updateParagraphStyleCache:(id)a ;
 - (unsigned long long) _getRemainingNominalParagraphRange:(^{_NSRange=QQ})a andParagraphSeparatorRange:(^{_NSRange=QQ})b charactarIndex:(unsigned long long)c layoutManager:(id)d string:(id)e ;
 - (void) _setLineBreakModeOverridden:(BOOL)a ;
 - (void) _layoutGlyphsInLayoutManager:(id)a startingAtGlyphIndex:(unsigned long long)b maxNumberOfLineFragments:(unsigned long long)c maxCharacterIndex:(unsigned long long)d nextGlyphIndex:(^Q)e nextCharacterIndex:(^Q)f ;
 - (void) setBidiProcessingEnabled:(BOOL)a ;
 - (void) setTightenThresholdForTruncation:(float)a ;


@end
