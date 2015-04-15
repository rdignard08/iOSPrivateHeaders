
@interface NSATSLineFragment : NSObject {

    ^v _line;
    @"NSATSTypesetter" _typesetter;
    {_NSRange="location"Q"length"Q} _glyphRange;
    {_NSRange="location"Q"length"Q} _characterRange;
    d _minPosition;
    d _maxPosition;
    q _elasticCharIndex;
    d _elasticRangeWidth;
    I _hyphenGlyph;
    d _hyphenGlyphWidth;
    {?="_directionState"b2"_drawsOutside"b1"_isLineArray"b1"_reserved"b28} _flags;
}

 - (void) dealloc;
 - (void) finalize;
 - (void) _invalidate;
 - (id) initWithTypesetter:(id)a;
 - (void) layoutForStartingGlyphAtIndex:(Q)acharacterIndex:(Q)bminPosition:(d)cmaxPosition:(d)dlineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})e;
 - ({_NSRange=QQ}) glyphRange;
 - ({_NSRange=QQ}) characterRange;
 - (void) getTypographicLineHeight:(^d)abaselineOffset:(^d)bleading:(^d)c;
 - (void) justifyWithFactor:(d)a;
 - (d) lineWidthForType:(i)a;
 - (BOOL) hasElasticRange;
 - (void) saveMorphedGlyphs:(^{_NSRange=QQ})a;
 - (void) saveWithGlyphOrigin:(d)a;
 - (id) _copyRenderingContextWithGlyphOrigin:(d)a;
 - (void) _flushCachedObjects;
 - (q) resolvedLineBreakMode:(BOOL)a;
 - (q) _charIndexToBreakLineByWordWrappingAtIndex:(q)alineFragmentWidth:(d)bhyphenate:(^B)c;


@end
