
@interface NSDistantObjectRequest : NSObject {

}
@property (atomic, retain, readonly) NSInvocation* invocation;
@property (atomic, retain, readonly) NSConnection* connection;
@property (atomic, retain, readonly) NSNumber* conversation;

 - (id) connection;
 - (id) conversation;
 - (void) replyWithException:(id)a;
 - (id) invocation;


@end
