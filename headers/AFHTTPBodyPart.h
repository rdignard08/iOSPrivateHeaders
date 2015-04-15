
@protocol NSCopying;
@interface AFHTTPBodyPart : NSObject <NSCopying> {

    i _phase;
    @"NSInputStream" _inputStream;
    Q _phaseReadOffset;
    BOOL _hasInitialBoundary;
    BOOL _hasFinalBoundary;
    Q _stringEncoding;
    @"NSDictionary" _headers;
    @"NSString" _boundary;
    id _body;
    Q _bodyContentLength;
}
@property (nonatomic, assign, readwrite) NSNumber* stringEncoding;
@property (nonatomic, retain, readwrite) NSDictionary* headers;
@property (nonatomic, copy, readwrite) NSString* boundary;
@property (nonatomic, retain, readwrite) NSNumber* body;
@property (nonatomic, assign, readwrite) NSNumber* bodyContentLength;
@property (nonatomic, retain, readwrite) NSInputStream* inputStream;
@property (nonatomic, assign, readwrite) NSNumber* hasInitialBoundary;
@property (nonatomic, assign, readwrite) NSNumber* hasFinalBoundary;
@property (nonatomic, assign, readonly, hasBytesAvailable) NSNumber* bytesAvailable;
@property (nonatomic, assign, readonly) NSNumber* contentLength;

 - (void) setStringEncoding:(Q)a;
 - (Q) stringEncoding;
 - (void) setBoundary:(id)a;
 - (void) setHeaders:(id)a;
 - (id) boundary;
 - (void) setBodyContentLength:(Q)a;
 - (Q) contentLength;
 - (void) setHasInitialBoundary:(BOOL)a;
 - (void) setHasFinalBoundary:(BOOL)a;
 - (id) inputStream;
 - (void) setInputStream:(id)a;
 - (BOOL) transitionToNextPhase;
 - (id) headers;
 - (BOOL) hasInitialBoundary;
 - (id) stringForHeaders;
 - (BOOL) hasFinalBoundary;
 - (q) readData:(id)aintoBuffer:(*)bmaxLength:(Q)c;
 - (Q) bodyContentLength;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (q) read:(*)amaxLength:(Q)b;
 - (BOOL) hasBytesAvailable;
 - (id) init;
 - (void) setBody:(id)a;
 - (id) body;


@end
