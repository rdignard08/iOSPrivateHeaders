
@interface CALayerArray : NSArray {

    {_CALayerArrayIvars="layers"^@"count"Q"capacity"Q"mutations"Q"retained"B} _ivars;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (void) getObjects:(^@)a;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (id) initWithLayers:(^@)acount:(unsigned long long)bretain:(BOOL)c;


@end
