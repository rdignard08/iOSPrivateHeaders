
@interface CTGlyphStorageInterface : NSObject {

    q _glyphCount;
    ^S _glyphs;
    ^{CGSize=dd} _advances;
    ^I _props;
    ^q _stringIndexes;
    ^q _absorbedCounts;
}

 - (void) disposeGlyphStack;
 - (^{__CTGlyphStorage=}) createCopy:({?=qq})a;
 - (void) getCustomAdvance:(^{CGSize=dd})aforIndex:(q)b;
 - (void) setAbsorbedCount:(q)aforIndex:(q)b;
 - (void) setProps:(I)aforIndex:(q)b;
 - (void) setGlyphID:(S)aforIndex:(q)b;
 - (void) setAdvance:({CGSize=dd})aforIndex:(q)b;
 - (void) setStringIndex:(q)aforIndex:(q)b;
 - (void) insertGlyphs:({?=qq})a;
 - (void) swapGlyph:(q)awithIndex:(q)b;
 - (void) moveGlyphsTo:(q)afrom:({?=qq})b;
 - (void) initGlyphStack:(q)a;
 - (void) pushGlyph:(q)a;
 - (void) popGlyph:(q)a;


@end
