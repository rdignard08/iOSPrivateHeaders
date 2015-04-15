
@interface CALayerArray : NSArray {

    {_CALayerArrayIvars="layers"^@"count"Q"capacity"Q"mutations"Q"retained"B} _ivars;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a ;
 - (void) getObjects:(^@)a range:({_NSRange=QQ})b ;
 - (void) getObjects:(^@)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) initWithLayers:(^@)a count:(unsigned long long)b retain:(BOOL)c ;


@end
