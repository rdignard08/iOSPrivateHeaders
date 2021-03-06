
@interface NSStream : NSObject {

}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, assign, readonly) NSNumber* streamStatus;
@property (atomic, copy, readonly) NSError* streamError;
 + (void) getBoundStreamsWithBufferSize:(unsigned long long)ainputStream:(^@)boutputStream:(^@)c;
 + (void) getStreamsToHostWithName:(id)aport:(long long)binputStream:(^@)coutputStream:(^@)d;
 + (void) getStreamsToHost:(id)aport:(long long)binputStream:(^@)coutputStream:(^@)d;

 - (void) open;
 - (void) close;
 - (void) setDelegate:(id)a ;
 - (id) propertyForKey:(id)a ;
 - (BOOL) setProperty:(id)a forKey:(id)b ;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) removeFromRunLoop:(id)a forMode:(id)b ;
 - (unsigned long long) streamStatus;
 - (id) streamError;
 - (id) delegate;


@end
