
@interface NSSingleLineTypesetter : NSATSTypesetter {

    double _lineWidth;
    {_NSRange="location"Q"length"Q} _currentBufferRange;
    ^S _glyphs;
    ^q _props;
    ^Q _charIndexes;
    {?="_usesScreenFonts"b1"_reserved"b31} _slFlags;
}
 + (void) initialize;
 + (id) singleLineTypesetter;
 + (BOOL) _validateAttributes:(id)ameasuringOnly:(BOOL)b;

 - (id) init;
 - ({_NSRange=QQ}) characterRangeForGlyphRange:({_NSRange=QQ})a actualGlyphRange:(^{_NSRange=QQ})b ;
 - ({_NSRange=QQ}) glyphRangeForCharacterRange:({_NSRange=QQ})a actualCharacterRange:(^{_NSRange=QQ})b ;
 - (id) attributedString;
 - (id) substituteFontForFont:(id)a ;
 - (BOOL) _allowsEllipsisGlyphSubstitution;
 - (void) setLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forGlyphRange:({_NSRange=QQ})b usedRect:({CGRect={CGPoint=dd}{CGSize=dd}})c baselineOffset:(double)d ;
 - (void) getLineFragmentRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})a usedRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b remainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})c forStartingGlyphAtIndex:(unsigned long long)d proposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})e lineSpacing:(double)f paragraphSpacingBefore:(double)g paragraphSpacingAfter:(double)h ;
 - (void) setLocation:({CGPoint=dd})a withAdvancements:(r^d)b forStartOfGlyphRange:({_NSRange=QQ})c ;
 - (void) setNotShownAttribute:(BOOL)a forGlyphRange:({_NSRange=QQ})b ;
 - (BOOL) _usesScreenFonts;
 - (unsigned long long) getGlyphsInRange:({_NSRange=QQ})a glyphs:(^S)b properties:(^q)c characterIndexes:(^Q)d bidiLevels:(char*)e ;
 - (void) substituteGlyphsInRange:({_NSRange=QQ})a withGlyphs:(^I)b ;
 - (void) insertGlyph:(unsigned int)a atGlyphIndex:(unsigned long long)b characterIndex:(unsigned long long)c ;
 - (void) setAttachmentSize:({CGSize=dd})a forGlyphRange:({_NSRange=QQ})b ;
 - (void) setBidiLevels:(r*)a forGlyphRange:({_NSRange=QQ})b ;
 - (void) setDrawsOutsideLineFragment:(BOOL)a forGlyphRange:({_NSRange=QQ})b ;
 - (void) done;
 - (id) createRenderingContextForCharacterRange:({_NSRange=QQ})a typesetterBehavior:(long long)b usesScreenFonts:(BOOL)c hasStrongRight:(BOOL)d maximumWidth:(double)e ;
 - (void) setGlyphs:(r^S)a properties:(r^q)b characterIndexes:(r^Q)c font:(id)d forGlyphRange:({_NSRange=QQ})e ;
 - (void) insertGlyphs:(r^I)a length:(unsigned long long)b forStartingGlyphAtIndex:(unsigned long long)c characterIndex:(unsigned long long)d ;
 - (void) setIntAttribute:(long long)a value:(long long)b forGlyphAtIndex:(unsigned long long)c ;
 - (unsigned long long) layoutOptions;
 - (void) deleteGlyphsInRange:({_NSRange=QQ})a ;


@end
