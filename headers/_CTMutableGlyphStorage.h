
@protocol _CTGlyphStorageAdvanceLookup;
@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {

    @"CTGlyphStorageInterface" _interface;
}

 - (void) setProps:(I)aatIndex:(q)b;
 - (void) setAttachmentCount:(q)aatIndex:(q)b;
 - (void) setStringIndex:(q)aatIndex:(q)b;
 - (q) attachmentCountAtIndex:(q)a;
 - (void) disposeGlyphStack;
 - (void) popGlyphAtIndex:(q)a;
 - (void) pushGlyphAtIndex:(q)a;
 - (void) initGlyphStackWithCapacity:(q)a;
 - (void) puntStringIndicesInRange:({?=qq})aby:(q)b;
 - (id) copyWithRange:({?=qq})a;
 - (^v) refCon;
 - (void) setGlyph:(S)aatIndex:(q)b;
 - (void) setAdvance:({CGSize=dd})aatIndex:(q)b;
 - (void) insertGlyphsAtRange:({?=qq})a;
 - (void) swapGlyphsAtIndex:(q)awithIndex:(q)b;
 - (void) moveGlyphsFromRange:({?=qq})atoIndex:(q)b;
 - (void) sync;
 - (id) initWithInterface:(id)a;
 - ({CGSize=dd}) customAdvanceForIndex:(q)a;


@end
