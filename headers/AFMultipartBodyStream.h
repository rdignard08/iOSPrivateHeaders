
@protocol NSCopying, NSStreamDelegate;
@interface AFMultipartBodyStream : NSInputStream <NSCopying, NSStreamDelegate> {

    <NSStreamDelegate>* delegate;
    unsigned long long streamStatus;
    NSError* streamError;
    unsigned long long _numberOfBytesInPacket;
    double _delay;
    NSInputStream* _inputStream;
    unsigned long long _stringEncoding;
    NSMutableArray* _HTTPBodyParts;
    NSEnumerator* _HTTPBodyPartEnumerator;
    AFHTTPBodyPart* _currentHTTPBodyPart;
    NSOutputStream* _outputStream;
    NSMutableData* _buffer;
}

 - (id) outputStream;
 - (void) setStringEncoding:(unsigned long long)a ;
 - (unsigned long long) stringEncoding;
 - (id) initWithStringEncoding:(unsigned long long)a ;
 - (void) appendHTTPBodyPart:(id)a ;
 - (void) setNumberOfBytesInPacket:(unsigned long long)a ;
 - (void) setInitialAndFinalBoundaries;
 - (unsigned long long) contentLength;
 - (void) setHTTPBodyParts:(id)a ;
 - (id) HTTPBodyParts;
 - (unsigned long long) numberOfBytesInPacket;
 - (id) currentHTTPBodyPart;
 - (id) HTTPBodyPartEnumerator;
 - (void) setCurrentHTTPBodyPart:(id)a ;
 - (id) inputStream;
 - (void) setStreamError:(id)a ;
 - (void) setStreamStatus:(unsigned long long)a ;
 - (void) setHTTPBodyPartEnumerator:(id)a ;
 - (void) setInputStream:(id)a ;
 - (void) setOutputStream:(id)a ;
 - (id) buffer;
 - (void) setBuffer:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) .cxx_destruct;
 - (BOOL) isEmpty;
 - (void) open;
 - (void) close;
 - (void) setDelegate:(id)a ;
 - (id) propertyForKey:(id)a ;
 - (BOOL) setProperty:(id)a forKey:(id)b ;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) removeFromRunLoop:(id)a forMode:(id)b ;
 - (unsigned long long) streamStatus;
 - (id) streamError;
 - (long long) read:(char*)a maxLength:(unsigned long long)b ;
 - (BOOL) getBuffer:(^*)a length:(^Q)b ;
 - (BOOL) hasBytesAvailable;
 - (BOOL) _setCFClientFlags:(unsigned long long)a callback:(^?)b context:(^{?=q^v^?^?^?})c ;
 - (void) _scheduleInCFRunLoop:(^{__CFRunLoop=})a forMode:(^{__CFString=})b ;
 - (void) _unscheduleFromCFRunLoop:(^{__CFRunLoop=})a forMode:(^{__CFString=})b ;
 - (void) setDelay:(double)a ;
 - (id) delegate;
 - (double) delay;


@end
