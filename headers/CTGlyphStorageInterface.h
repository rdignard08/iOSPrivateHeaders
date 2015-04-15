
@interface CTGlyphStorageInterface : NSObject {

    long long _glyphCount;
    ^S _glyphs;
    ^{CGSize=dd} _advances;
    ^I _props;
    ^q _stringIndexes;
    ^q _absorbedCounts;
}

 - (void) disposeGlyphStack;
 - (^{__CTGlyphStorage=}) createCopy:({?=qq})a;
 - (void) getCustomAdvance:(^{CGSize=dd})aforIndex:(long long)b;
 - (void) setAbsorbedCount:(long long)aforIndex:(long long)b;
 - (void) setProps:(unsigned int)aforIndex:(long long)b;
 - (void) setGlyphID:(unsigned short)aforIndex:(long long)b;
 - (void) setAdvance:({CGSize=dd})aforIndex:(long long)b;
 - (void) setStringIndex:(long long)aforIndex:(long long)b;
 - (void) insertGlyphs:({?=qq})a;
 - (void) swapGlyph:(long long)awithIndex:(long long)b;
 - (void) moveGlyphsTo:(long long)afrom:({?=qq})b;
 - (void) initGlyphStack:(long long)a;
 - (void) pushGlyph:(long long)a;
 - (void) popGlyph:(long long)a;


@end
