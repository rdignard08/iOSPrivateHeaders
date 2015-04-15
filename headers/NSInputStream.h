
@interface NSInputStream : NSStream {

}
 + (id) inputStreamWithURL:(id)a;
 + (id) inputStreamWithData:(id)a;
 + (id) inputStreamWithFileAtPath:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - ({?=qi}) _cfStreamError;
 - (Q) _cfTypeID;
 - (q) read:(*)amaxLength:(Q)b;
 - (BOOL) getBuffer:(^*)alength:(^Q)b;
 - (BOOL) hasBytesAvailable;


@end
