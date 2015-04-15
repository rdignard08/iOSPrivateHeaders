
@protocol _CTGlyphStorageAdvanceLookup;
@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {

    CTGlyphStorageInterface _interface;
}

 - (void) setProps:(unsigned int)aatIndex:(long long)b;
 - (void) setAttachmentCount:(long long)aatIndex:(long long)b;
 - (void) setStringIndex:(long long)aatIndex:(long long)b;
 - (long long) attachmentCountAtIndex:(long long)a;
 - (void) disposeGlyphStack;
 - (void) popGlyphAtIndex:(long long)a;
 - (void) pushGlyphAtIndex:(long long)a;
 - (void) initGlyphStackWithCapacity:(long long)a;
 - (void) puntStringIndicesInRange:({?=qq})aby:(long long)b;
 - (id) copyWithRange:({?=qq})a;
 - (^v) refCon;
 - (void) setGlyph:(unsigned short)aatIndex:(long long)b;
 - (void) setAdvance:({CGSize=dd})aatIndex:(long long)b;
 - (void) insertGlyphsAtRange:({?=qq})a;
 - (void) swapGlyphsAtIndex:(long long)awithIndex:(long long)b;
 - (void) moveGlyphsFromRange:({?=qq})atoIndex:(long long)b;
 - (void) sync;
 - (id) initWithInterface:(id)a;
 - ({CGSize=dd}) customAdvanceForIndex:(long long)a;


@end
