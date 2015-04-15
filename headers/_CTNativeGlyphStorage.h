
@interface _CTNativeGlyphStorage : _CTGlyphStorage {

    r^q _attachCounts;
    unsigned long long _retainCount;
    ^{GlyphStack=qq[1{GlyphStackEntry=S{CGSize=dd}IqC}]} _stack;
    long long _capacity;
    ^v _preallocatedStorage;
}
 + (id) newWithCount:(long long)a;

 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) setProps:(unsigned int)a atIndex:(long long)b ;
 - (void) setAttachmentCount:(long long)a atIndex:(long long)b ;
 - (void) setStringIndex:(long long)a atIndex:(long long)b ;
 - (long long) attachmentCountAtIndex:(long long)a ;
 - (void) popGlyphAtIndex:(long long)a ;
 - (void) pushGlyphAtIndex:(long long)a ;
 - (void) initGlyphStackWithCapacity:(long long)a ;
 - (void) puntStringIndicesInRange:({?=qq})a by:(long long)b ;
 - (id) initWithCount:(long long)a ;
 - (id) copyWithRange:({?=qq})a ;
 - (void) setGlyph:(unsigned short)a atIndex:(long long)b ;
 - (void) setAdvance:({CGSize=dd})a atIndex:(long long)b ;
 - (void) insertGlyphsAtRange:({?=qq})a ;
 - (void) swapGlyphsAtIndex:(long long)a withIndex:(long long)b ;
 - (void) moveGlyphsFromRange:({?=qq})a toIndex:(long long)b ;
 - (void) prepareWithCapacity:(long long)a preallocated:(BOOL)b ;
 - (void) setCapacity:(long long)a ;
 - (r^q) stringIndices;


@end
