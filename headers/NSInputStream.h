
@interface NSInputStream : NSStream {

}
 + (id) inputStreamWithURL:(id)a;
 + (id) inputStreamWithData:(id)a;
 + (id) inputStreamWithFileAtPath:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - ({?=qi}) _cfStreamError;
 - (unsigned long long) _cfTypeID;
 - (long long) read:(char*)a maxLength:(unsigned long long)b ;
 - (BOOL) getBuffer:(^*)a length:(^Q)b ;
 - (BOOL) hasBytesAvailable;


@end
