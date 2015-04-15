
@interface NSAssertionHandler : NSObject {

    ^v _reserved;
}
 + (id) currentHandler;

 - (void) handleFailureInMethod:(SEL)a object:(id)b file:(id)c lineNumber:(long long)d description:(id)e ;
 - (void) handleFailureInFunction:(id)a file:(id)b lineNumber:(long long)c description:(id)d ;


@end
