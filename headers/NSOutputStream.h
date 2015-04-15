
@interface NSOutputStream : NSStream {

}
 + (id) outputStreamToMemory;
 + (id) outputStreamToBuffer:(char*)acapacity:(unsigned long long)b;
 + (id) outputStreamToFileAtPath:(id)aappend:(BOOL)b;
 + (id) outputStreamWithURL:(id)aappend:(BOOL)b;
 + (id) allocWithZone:(^{_NSZone=})a;

 - ({?=qi}) _cfStreamError;
 - (unsigned long long) _cfTypeID;
 - (long long) write:(r*)a maxLength:(unsigned long long)b ;
 - (BOOL) hasSpaceAvailable;


@end
