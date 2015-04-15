
@protocol NSCopying;
@interface AFHTTPBodyPart : NSObject <NSCopying> {

    int _phase;
    NSInputStream* _inputStream;
    unsigned long long _phaseReadOffset;
    BOOL _hasInitialBoundary;
    BOOL _hasFinalBoundary;
    unsigned long long _stringEncoding;
    NSDictionary* _headers;
    NSString* _boundary;
    id _body;
    unsigned long long _bodyContentLength;
}
@property (nonatomic, assign, readwrite) NSNumber* stringEncoding;
@property (nonatomic, retain, readwrite) NSDictionary* headers;
@property (nonatomic, copy, readwrite) NSString* boundary;
@property (nonatomic, retain, readwrite) NSNumber* body;
@property (nonatomic, assign, readwrite) NSNumber* bodyContentLength;
@property (nonatomic, retain, readwrite) NSInputStream* inputStream;
@property (nonatomic, assign, readwrite) NSNumber* hasInitialBoundary;
@property (nonatomic, assign, readwrite) NSNumber* hasFinalBoundary;
@property (nonatomic, assign, readonly, getter=hasBytesAvailable) NSNumber* bytesAvailable;
@property (nonatomic, assign, readonly) NSNumber* contentLength;

 - (void) setStringEncoding:(unsigned long long)a;
 - (unsigned long long) stringEncoding;
 - (void) setBoundary:(id)a;
 - (void) setHeaders:(id)a;
 - (id) boundary;
 - (void) setBodyContentLength:(unsigned long long)a;
 - (unsigned long long) contentLength;
 - (void) setHasInitialBoundary:(BOOL)a;
 - (void) setHasFinalBoundary:(BOOL)a;
 - (id) inputStream;
 - (void) setInputStream:(id)a;
 - (BOOL) transitionToNextPhase;
 - (id) headers;
 - (BOOL) hasInitialBoundary;
 - (id) stringForHeaders;
 - (BOOL) hasFinalBoundary;
 - (long long) readData:(id)aintoBuffer:(char*)bmaxLength:(unsigned long long)c;
 - (unsigned long long) bodyContentLength;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (long long) read:(char*)amaxLength:(unsigned long long)b;
 - (BOOL) hasBytesAvailable;
 - (id) init;
 - (void) setBody:(id)a;
 - (id) body;


@end
