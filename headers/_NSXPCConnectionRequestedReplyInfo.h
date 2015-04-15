
@interface _NSXPCConnectionRequestedReplyInfo : NSObject {

    @? _cleanupBlock;
    NSProgress* _progress;
}
@property (atomic, copy, readwrite) NSNumber* cleanupBlock;
@property (atomic, retain, readwrite) NSProgress* progress;

 - (@?) cleanupBlock;
 - (void) setCleanupBlock:(@?)a;
 - (id) progress;
 - (void) setProgress:(id)a;
 - (void) dealloc;


@end
