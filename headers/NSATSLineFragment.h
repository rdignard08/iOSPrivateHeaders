
@interface NSATSLineFragment : NSObject {

    ^v _line;
    NSATSTypesetter* _typesetter;
    {_NSRange="location"Q"length"Q} _glyphRange;
    {_NSRange="location"Q"length"Q} _characterRange;
    double _minPosition;
    double _maxPosition;
    long long _elasticCharIndex;
    double _elasticRangeWidth;
    unsigned int _hyphenGlyph;
    double _hyphenGlyphWidth;
    {?="_directionState"b2"_drawsOutside"b1"_isLineArray"b1"_reserved"b28} _flags;
}

 - (void) dealloc;
 - (void) finalize;
 - (void) _invalidate;
 - (id) initWithTypesetter:(id)a ;
 - (void) layoutForStartingGlyphAtIndex:(unsigned long long)a characterIndex:(unsigned long long)b minPosition:(double)c maxPosition:(double)d lineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})e ;
 - ({_NSRange=QQ}) glyphRange;
 - ({_NSRange=QQ}) characterRange;
 - (void) getTypographicLineHeight:(^d)a baselineOffset:(^d)b leading:(^d)c ;
 - (void) justifyWithFactor:(double)a ;
 - (double) lineWidthForType:(int)a ;
 - (BOOL) hasElasticRange;
 - (void) saveMorphedGlyphs:(^{_NSRange=QQ})a ;
 - (void) saveWithGlyphOrigin:(double)a ;
 - (id) _copyRenderingContextWithGlyphOrigin:(double)a ;
 - (void) _flushCachedObjects;
 - (long long) resolvedLineBreakMode:(BOOL)a ;
 - (long long) _charIndexToBreakLineByWordWrappingAtIndex:(long long)a lineFragmentWidth:(double)b hyphenate:(^B)c ;


@end
