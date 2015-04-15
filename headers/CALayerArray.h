
@interface CALayerArray : NSArray {

    {_CALayerArrayIvars="layers"^@"count"Q"capacity"Q"mutations"Q"retained"B} _ivars;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (void) getObjects:(^@)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) initWithLayers:(^@)acount:(Q)bretain:(BOOL)c;


@end
