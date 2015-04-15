
@interface _CTGlyphStorage : NSObject {

    q _count;
    r^S _glyphs;
    r^{CGSize=dd} _advances;
    r^I _props;
    r^q _stringIndices;
}

 - (BOOL) isEqual:(id)a;
 - (void) setProps:(I)aatIndex:(q)b;
 - (void) setAttachmentCount:(q)aatIndex:(q)b;
 - (void) setStringIndex:(q)aatIndex:(q)b;
 - (q) attachmentCountAtIndex:(q)a;
 - (void) disposeGlyphStack;
 - (void) popGlyphAtIndex:(q)a;
 - (void) pushGlyphAtIndex:(q)a;
 - (void) initGlyphStackWithCapacity:(q)a;
 - (void) puntStringIndicesInRange:({?=qq})aby:(q)b;
 - (id) initWithCount:(q)a;
 - (id) copyWithRange:({?=qq})a;
 - (^v) refCon;
 - (void) setGlyph:(S)aatIndex:(q)b;
 - (void) setAdvance:({CGSize=dd})aatIndex:(q)b;
 - (void) insertGlyphsAtRange:({?=qq})a;
 - (void) swapGlyphsAtIndex:(q)awithIndex:(q)b;
 - (void) moveGlyphsFromRange:({?=qq})atoIndex:(q)b;
 - (void) sync;


@end
