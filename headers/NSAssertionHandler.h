
@interface NSAssertionHandler : NSObject {

    ^v _reserved;
}
 + (id) currentHandler;

 - (void) handleFailureInMethod:(SEL)aobject:(id)bfile:(id)clineNumber:(q)ddescription:(id)e;
 - (void) handleFailureInFunction:(id)afile:(id)blineNumber:(q)cdescription:(id)d;


@end
