
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
 - ({_NSRange=QQ}) characterRangeForGlyphRange:({_NSRange=QQ})aactualGlyphRange:(^{_NSRange=QQ})b;
 - ({_NSRange=QQ}) glyphRangeForCharacterRange:({_NSRange=QQ})aactualCharacterRange:(^{_NSRange=QQ})b;
 - (id) attributedString;
 - (id) substituteFontForFont:(id)a;
 - (BOOL) _allowsEllipsisGlyphSubstitution;
 - (void) setLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforGlyphRange:({_NSRange=QQ})busedRect:({CGRect={CGPoint=dd}{CGSize=dd}})cbaselineOffset:(double)d;
 - (void) getLineFragmentRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})ausedRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})bremainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})cforStartingGlyphAtIndex:(unsigned long long)dproposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})elineSpacing:(double)fparagraphSpacingBefore:(double)gparagraphSpacingAfter:(double)h;
 - (void) setLocation:({CGPoint=dd})awithAdvancements:(r^d)bforStartOfGlyphRange:({_NSRange=QQ})c;
 - (void) setNotShownAttribute:(BOOL)aforGlyphRange:({_NSRange=QQ})b;
 - (BOOL) _usesScreenFonts;
 - (unsigned long long) getGlyphsInRange:({_NSRange=QQ})aglyphs:(^S)bproperties:(^q)ccharacterIndexes:(^Q)dbidiLevels:(char*)e;
 - (void) substituteGlyphsInRange:({_NSRange=QQ})awithGlyphs:(^I)b;
 - (void) insertGlyph:(unsigned int)aatGlyphIndex:(unsigned long long)bcharacterIndex:(unsigned long long)c;
 - (void) setAttachmentSize:({CGSize=dd})aforGlyphRange:({_NSRange=QQ})b;
 - (void) setBidiLevels:(r*)aforGlyphRange:({_NSRange=QQ})b;
 - (void) setDrawsOutsideLineFragment:(BOOL)aforGlyphRange:({_NSRange=QQ})b;
 - (void) done;
 - (id) createRenderingContextForCharacterRange:({_NSRange=QQ})atypesetterBehavior:(long long)busesScreenFonts:(BOOL)chasStrongRight:(BOOL)dmaximumWidth:(double)e;
 - (void) setGlyphs:(r^S)aproperties:(r^q)bcharacterIndexes:(r^Q)cfont:(id)dforGlyphRange:({_NSRange=QQ})e;
 - (void) insertGlyphs:(r^I)alength:(unsigned long long)bforStartingGlyphAtIndex:(unsigned long long)ccharacterIndex:(unsigned long long)d;
 - (void) setIntAttribute:(long long)avalue:(long long)bforGlyphAtIndex:(unsigned long long)c;
 - (unsigned long long) layoutOptions;
 - (void) deleteGlyphsInRange:({_NSRange=QQ})a;


@end
