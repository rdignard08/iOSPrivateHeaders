
@interface NSAssertionHandler : NSObject {

    ^v _reserved;
}
 + (id) currentHandler;

 - (void) handleFailureInMethod:(SEL)aobject:(id)bfile:(id)clineNumber:(long long)ddescription:(id)e;
 - (void) handleFailureInFunction:(id)afile:(id)blineNumber:(long long)cdescription:(id)d;


@end
