
@interface NSSingleLineTypesetter : NSATSTypesetter {

    d _lineWidth;
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
 - ({_NSRange=QQ}) characterRangeForGlyphRange:({_NSRange=QQ})aactualGlyphRange:(^{_NSRange=QQ})b;
 - ({_NSRange=QQ}) glyphRangeForCharacterRange:({_NSRange=QQ})aactualCharacterRange:(^{_NSRange=QQ})b;
 - (id) attributedString;
 - (id) substituteFontForFont:(id)a;
 - (BOOL) _allowsEllipsisGlyphSubstitution;
 - (void) setLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforGlyphRange:({_NSRange=QQ})busedRect:({CGRect={CGPoint=dd}{CGSize=dd}})cbaselineOffset:(d)d;
 - (void) getLineFragmentRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})ausedRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})bremainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})cforStartingGlyphAtIndex:(Q)dproposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})elineSpacing:(d)fparagraphSpacingBefore:(d)gparagraphSpacingAfter:(d)h;
 - (void) setLocation:({CGPoint=dd})awithAdvancements:(r^d)bforStartOfGlyphRange:({_NSRange=QQ})c;
 - (void) setNotShownAttribute:(BOOL)aforGlyphRange:({_NSRange=QQ})b;
 - (BOOL) _usesScreenFonts;
 - (Q) getGlyphsInRange:({_NSRange=QQ})aglyphs:(^S)bproperties:(^q)ccharacterIndexes:(^Q)dbidiLevels:(*)e;
 - (void) substituteGlyphsInRange:({_NSRange=QQ})awithGlyphs:(^I)b;
 - (void) insertGlyph:(I)aatGlyphIndex:(Q)bcharacterIndex:(Q)c;
 - (void) setAttachmentSize:({CGSize=dd})aforGlyphRange:({_NSRange=QQ})b;
 - (void) setBidiLevels:(r*)aforGlyphRange:({_NSRange=QQ})b;
 - (void) setDrawsOutsideLineFragment:(BOOL)aforGlyphRange:({_NSRange=QQ})b;
 - (void) done;
 - (id) createRenderingContextForCharacterRange:({_NSRange=QQ})atypesetterBehavior:(q)busesScreenFonts:(BOOL)chasStrongRight:(BOOL)dmaximumWidth:(d)e;
 - (void) setGlyphs:(r^S)aproperties:(r^q)bcharacterIndexes:(r^Q)cfont:(id)dforGlyphRange:({_NSRange=QQ})e;
 - (void) insertGlyphs:(r^I)alength:(Q)bforStartingGlyphAtIndex:(Q)ccharacterIndex:(Q)d;
 - (void) setIntAttribute:(q)avalue:(q)bforGlyphAtIndex:(Q)c;
 - (Q) layoutOptions;
 - (void) deleteGlyphsInRange:({_NSRange=QQ})a;


@end
