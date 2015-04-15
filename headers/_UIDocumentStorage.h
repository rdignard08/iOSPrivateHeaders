
@interface _UIDocumentStorage : NSObject {

    NSString* _scope;
    NSURL* _rootURL;
}
@property (atomic, assign, readonly) NSURL* rootURL;
@property (atomic, assign, readonly, getter=isUbiquitous) NSNumber* ubiquitous;

 - (void) dealloc;
 - (id) initWithSearchScope:(id)a rootURL:(id)b ;
 - (BOOL) isUbiquitous;
 - (id) rootURL;


@end
