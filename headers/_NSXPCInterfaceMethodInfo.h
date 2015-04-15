
@interface _NSXPCInterfaceMethodInfo : NSObject {

    * _replySignature;
    i _replyPosition;
    @"NSMutableArray" _replyArguments;
    @"NSMutableArray" _arguments;
}
@property (atomic, assign, readwrite) NSNumber* replyPosition;
@property (atomic, retain, readwrite) NSMutableArray* replyArguments;
@property (atomic, retain, readwrite) NSMutableArray* arguments;

 - (void) setArguments:(id)a;
 - (void) setReplySignature:(id)a;
 - (r*) replySignature;
 - (id) replyArguments;
 - (void) setReplyArguments:(id)a;
 - (i) replyPosition;
 - (void) setReplyPosition:(i)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;
 - (id) arguments;


@end
