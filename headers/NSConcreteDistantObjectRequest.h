
@interface NSConcreteDistantObjectRequest : NSDistantObjectRequest {

    NSInvocation* invocation;
    NSArray* importedObjects;
    id conversation;
    unsigned int sequence;
    NSConnection* connection;
}

 - (id) connection;
 - (id) conversation;
 - (void) replyWithException:(id)a ;
 - (id) initWithInvocation:(id)a conversation:(id)b sequence:(unsigned int)c importedObjects:(id)d connection:(id)e ;
 - (void) dealloc;
 - (id) invocation;


@end
