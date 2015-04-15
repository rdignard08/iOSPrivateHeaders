
@interface NSConcreteDistantObjectRequest : NSDistantObjectRequest {

    @"NSInvocation" invocation;
    @"NSArray" importedObjects;
    id conversation;
    I sequence;
    @"NSConnection" connection;
}

 - (id) connection;
 - (id) conversation;
 - (void) replyWithException:(id)a;
 - (id) initWithInvocation:(id)aconversation:(id)bsequence:(I)cimportedObjects:(id)dconnection:(id)e;
 - (void) dealloc;
 - (id) invocation;


@end
