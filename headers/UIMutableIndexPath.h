
@interface UIMutableIndexPath : NSIndexPath {

    ^Q _mutableIndexes;
    BOOL _locked;
}
 + (void) setIndex:(Q)aatPosition:(Q)bforIndexPath:(^@)c;

 - (id) initWithIndexes:(r^Q)alength:(Q)b;
 - (Q) indexAtPosition:(Q)a;
 - (void) getIndexes:(^Q)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) retain;
 - (void) dealloc;
 - (q) compare:(id)a;


@end
