
@interface UIMutableIndexPath : NSIndexPath {

    ^Q _mutableIndexes;
    BOOL _locked;
}
 + (void) setIndex:(unsigned long long)aatPosition:(unsigned long long)bforIndexPath:(^@)c;

 - (id) initWithIndexes:(r^Q)a length:(unsigned long long)b ;
 - (unsigned long long) indexAtPosition:(unsigned long long)a ;
 - (void) getIndexes:(^Q)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (id) retain;
 - (void) dealloc;
 - (long long) compare:(id)a ;


@end
