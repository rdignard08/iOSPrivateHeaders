
@protocol NSCopying, NSStreamDelegate;
@interface AFMultipartBodyStream : NSInputStream <NSCopying, NSStreamDelegate> {

    @"<NSStreamDelegate>" delegate;
    Q streamStatus;
    @"NSError" streamError;
    Q _numberOfBytesInPacket;
    d _delay;
    @"NSInputStream" _inputStream;
    Q _stringEncoding;
    @"NSMutableArray" _HTTPBodyParts;
    @"NSEnumerator" _HTTPBodyPartEnumerator;
    @"AFHTTPBodyPart" _currentHTTPBodyPart;
    @"NSOutputStream" _outputStream;
    @"NSMutableData" _buffer;
}

 - (id) outputStream;
 - (void) setStringEncoding:(Q)a;
 - (Q) stringEncoding;
 - (id) initWithStringEncoding:(Q)a;
 - (void) appendHTTPBodyPart:(id)a;
 - (void) setNumberOfBytesInPacket:(Q)a;
 - (void) setInitialAndFinalBoundaries;
 - (Q) contentLength;
 - (void) setHTTPBodyParts:(id)a;
 - (id) HTTPBodyParts;
 - (Q) numberOfBytesInPacket;
 - (id) currentHTTPBodyPart;
 - (id) HTTPBodyPartEnumerator;
 - (void) setCurrentHTTPBodyPart:(id)a;
 - (id) inputStream;
 - (void) setStreamError:(id)a;
 - (void) setStreamStatus:(Q)a;
 - (void) setHTTPBodyPartEnumerator:(id)a;
 - (void) setInputStream:(id)a;
 - (void) setOutputStream:(id)a;
 - (id) buffer;
 - (void) setBuffer:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) .cxx_destruct;
 - (BOOL) isEmpty;
 - (void) open;
 - (void) close;
 - (void) setDelegate:(id)a;
 - (id) propertyForKey:(id)a;
 - (BOOL) setProperty:(id)aforKey:(id)b;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (Q) streamStatus;
 - (id) streamError;
 - (q) read:(*)amaxLength:(Q)b;
 - (BOOL) getBuffer:(^*)alength:(^Q)b;
 - (BOOL) hasBytesAvailable;
 - (BOOL) _setCFClientFlags:(Q)acallback:(^?)bcontext:(^{?=q^v^?^?^?})c;
 - (void) _scheduleInCFRunLoop:(^{__CFRunLoop=})aforMode:(^{__CFString=})b;
 - (void) _unscheduleFromCFRunLoop:(^{__CFRunLoop=})aforMode:(^{__CFString=})b;
 - (void) setDelay:(d)a;
 - (id) delegate;
 - (d) delay;


@end
