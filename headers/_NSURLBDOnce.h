
@interface _NSURLBDOnce : NSObject {

    @? fBlock;
    BOOL fDone;
}

 - (void) dealloc;
 - (id) initWithBlock:(@?)a ;
 - (void) doit;


@end
