
@interface NSOutputStream : NSStream {

}
 + (id) outputStreamToMemory;
 + (id) outputStreamToBuffer:(*)acapacity:(Q)b;
 + (id) outputStreamToFileAtPath:(id)aappend:(BOOL)b;
 + (id) outputStreamWithURL:(id)aappend:(BOOL)b;
 + (id) allocWithZone:(^{_NSZone=})a;

 - ({?=qi}) _cfStreamError;
 - (Q) _cfTypeID;
 - (q) write:(r*)amaxLength:(Q)b;
 - (BOOL) hasSpaceAvailable;


@end
