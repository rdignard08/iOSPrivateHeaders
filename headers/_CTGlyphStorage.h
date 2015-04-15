
@interface _CTGlyphStorage : NSObject {

    long long _count;
    r^S _glyphs;
    r^{CGSize=dd} _advances;
    r^I _props;
    r^q _stringIndices;
}

 - (BOOL) isEqual:(id)a;
 - (void) setProps:(unsigned int)aatIndex:(long long)b;
 - (void) setAttachmentCount:(long long)aatIndex:(long long)b;
 - (void) setStringIndex:(long long)aatIndex:(long long)b;
 - (long long) attachmentCountAtIndex:(long long)a;
 - (void) disposeGlyphStack;
 - (void) popGlyphAtIndex:(long long)a;
 - (void) pushGlyphAtIndex:(long long)a;
 - (void) initGlyphStackWithCapacity:(long long)a;
 - (void) puntStringIndicesInRange:({?=qq})aby:(long long)b;
 - (id) initWithCount:(long long)a;
 - (id) copyWithRange:({?=qq})a;
 - (^v) refCon;
 - (void) setGlyph:(unsigned short)aatIndex:(long long)b;
 - (void) setAdvance:({CGSize=dd})aatIndex:(long long)b;
 - (void) insertGlyphsAtRange:({?=qq})a;
 - (void) swapGlyphsAtIndex:(long long)awithIndex:(long long)b;
 - (void) moveGlyphsFromRange:({?=qq})atoIndex:(long long)b;
 - (void) sync;


@end
