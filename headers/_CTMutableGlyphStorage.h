
@protocol _CTGlyphStorageAdvanceLookup;
@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {

    CTGlyphStorageInterface* _interface;
}

 - (void) setProps:(unsigned int)a atIndex:(long long)b ;
 - (void) setAttachmentCount:(long long)a atIndex:(long long)b ;
 - (void) setStringIndex:(long long)a atIndex:(long long)b ;
 - (long long) attachmentCountAtIndex:(long long)a ;
 - (void) disposeGlyphStack;
 - (void) popGlyphAtIndex:(long long)a ;
 - (void) pushGlyphAtIndex:(long long)a ;
 - (void) initGlyphStackWithCapacity:(long long)a ;
 - (void) puntStringIndicesInRange:({?=qq})a by:(long long)b ;
 - (id) copyWithRange:({?=qq})a ;
 - (^v) refCon;
 - (void) setGlyph:(unsigned short)a atIndex:(long long)b ;
 - (void) setAdvance:({CGSize=dd})a atIndex:(long long)b ;
 - (void) insertGlyphsAtRange:({?=qq})a ;
 - (void) swapGlyphsAtIndex:(long long)a withIndex:(long long)b ;
 - (void) moveGlyphsFromRange:({?=qq})a toIndex:(long long)b ;
 - (void) sync;
 - (id) initWithInterface:(id)a ;
 - ({CGSize=dd}) customAdvanceForIndex:(long long)a ;


@end
