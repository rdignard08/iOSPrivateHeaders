
@interface NSFilePromiseWriteToken : NSObject {

    NSURL* promiseURL;
    NSURL* logicalURL;
}
@property (atomic, copy, readwrite) NSURL* promiseURL;
@property (atomic, copy, readwrite) NSURL* logicalURL;

 - (void) setPromiseURL:(id)a ;
 - (void) setLogicalURL:(id)a ;
 - (id) promiseURL;
 - (id) logicalURL;
 - (void) dealloc;


@end
