
@interface NSStream : NSObject {

}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, assign, readonly) NSNumber* streamStatus;
@property (atomic, copy, readonly) NSError* streamError;
 + (void) getBoundStreamsWithBufferSize:(Q)ainputStream:(^@)boutputStream:(^@)c;
 + (void) getStreamsToHostWithName:(id)aport:(q)binputStream:(^@)coutputStream:(^@)d;
 + (void) getStreamsToHost:(id)aport:(q)binputStream:(^@)coutputStream:(^@)d;

 - (void) open;
 - (void) close;
 - (void) setDelegate:(id)a;
 - (id) propertyForKey:(id)a;
 - (BOOL) setProperty:(id)aforKey:(id)b;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (Q) streamStatus;
 - (id) streamError;
 - (id) delegate;


@end
