
@interface CTGlyphStorageInterface : NSObject {

    long long _glyphCount;
    ^S _glyphs;
    ^{CGSize=dd} _advances;
    ^I _props;
    ^q _stringIndexes;
    ^q _absorbedCounts;
}

 - (void) disposeGlyphStack;
 - (^{__CTGlyphStorage=}) createCopy:({?=qq})a ;
 - (void) getCustomAdvance:(^{CGSize=dd})a forIndex:(long long)b ;
 - (void) setAbsorbedCount:(long long)a forIndex:(long long)b ;
 - (void) setProps:(unsigned int)a forIndex:(long long)b ;
 - (void) setGlyphID:(unsigned short)a forIndex:(long long)b ;
 - (void) setAdvance:({CGSize=dd})a forIndex:(long long)b ;
 - (void) setStringIndex:(long long)a forIndex:(long long)b ;
 - (void) insertGlyphs:({?=qq})a ;
 - (void) swapGlyph:(long long)a withIndex:(long long)b ;
 - (void) moveGlyphsTo:(long long)a from:({?=qq})b ;
 - (void) initGlyphStack:(long long)a ;
 - (void) pushGlyph:(long long)a ;
 - (void) popGlyph:(long long)a ;


@end
