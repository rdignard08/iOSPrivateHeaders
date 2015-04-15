
@interface _CTNativeGlyphStorage : _CTGlyphStorage {

    r^q _attachCounts;
    Q _retainCount;
    ^{GlyphStack=qq[1{GlyphStackEntry=S{CGSize=dd}IqC}]} _stack;
    q _capacity;
    ^v _preallocatedStorage;
}
 + (id) newWithCount:(q)a;

 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) setProps:(I)aatIndex:(q)b;
 - (void) setAttachmentCount:(q)aatIndex:(q)b;
 - (void) setStringIndex:(q)aatIndex:(q)b;
 - (q) attachmentCountAtIndex:(q)a;
 - (void) popGlyphAtIndex:(q)a;
 - (void) pushGlyphAtIndex:(q)a;
 - (void) initGlyphStackWithCapacity:(q)a;
 - (void) puntStringIndicesInRange:({?=qq})aby:(q)b;
 - (id) initWithCount:(q)a;
 - (id) copyWithRange:({?=qq})a;
 - (void) setGlyph:(S)aatIndex:(q)b;
 - (void) setAdvance:({CGSize=dd})aatIndex:(q)b;
 - (void) insertGlyphsAtRange:({?=qq})a;
 - (void) swapGlyphsAtIndex:(q)awithIndex:(q)b;
 - (void) moveGlyphsFromRange:({?=qq})atoIndex:(q)b;
 - (void) prepareWithCapacity:(q)apreallocated:(BOOL)b;
 - (void) setCapacity:(q)a;
 - (r^q) stringIndices;


@end
