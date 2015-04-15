
@interface _CTGlyphStorage : NSObject {

    long long _count;
    r^S _glyphs;
    r^{CGSize=dd} _advances;
    r^I _props;
    r^q _stringIndices;
}

 - (BOOL) isEqual:(id)a ;
 - (void) setProps:(unsigned int)a atIndex:(long long)b ;
 - (void) setAttachmentCount:(long long)a atIndex:(long long)b ;
 - (void) setStringIndex:(long long)a atIndex:(long long)b ;
 - (long long) attachmentCountAtIndex:(long long)a ;
 - (void) disposeGlyphStack;
 - (void) popGlyphAtIndex:(long long)a ;
 - (void) pushGlyphAtIndex:(long long)a ;
 - (void) initGlyphStackWithCapacity:(long long)a ;
 - (void) puntStringIndicesInRange:({?=qq})a by:(long long)b ;
 - (id) initWithCount:(long long)a ;
 - (id) copyWithRange:({?=qq})a ;
 - (^v) refCon;
 - (void) setGlyph:(unsigned short)a atIndex:(long long)b ;
 - (void) setAdvance:({CGSize=dd})a atIndex:(long long)b ;
 - (void) insertGlyphsAtRange:({?=qq})a ;
 - (void) swapGlyphsAtIndex:(long long)a withIndex:(long long)b ;
 - (void) moveGlyphsFromRange:({?=qq})a toIndex:(long long)b ;
 - (void) sync;


@end
