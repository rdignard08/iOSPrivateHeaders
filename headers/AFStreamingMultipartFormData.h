
@protocol AFMultipartFormData;
@interface AFStreamingMultipartFormData : NSObject <AFMultipartFormData> {

    NSMutableURLRequest* _request;
    unsigned long long _stringEncoding;
    NSString* _boundary;
    AFMultipartBodyStream* _bodyStream;
}
@property (nonatomic, copy, readwrite) NSMutableURLRequest* request;
@property (nonatomic, assign, readwrite) NSNumber* stringEncoding;
@property (nonatomic, copy, readwrite) NSString* boundary;
@property (nonatomic, retain, readwrite) AFMultipartBodyStream* bodyStream;

 - (void) setRequest:(id)a ;
 - (void) setStringEncoding:(unsigned long long)a ;
 - (id) initWithURLRequest:(id)a stringEncoding:(unsigned long long)b ;
 - (unsigned long long) stringEncoding;
 - (void) appendPartWithFormData:(id)a name:(id)b ;
 - (id) requestByFinalizingMultipartFormData;
 - (void) setBoundary:(id)a ;
 - (void) setBodyStream:(id)a ;
 - (BOOL) appendPartWithFileURL:(id)a name:(id)b fileName:(id)c mimeType:(id)d error:(^@)e ;
 - (id) boundary;
 - (id) bodyStream;
 - (void) appendPartWithHeaders:(id)a body:(id)b ;
 - (BOOL) appendPartWithFileURL:(id)a name:(id)b error:(^@)c ;
 - (void) appendPartWithInputStream:(id)a name:(id)b fileName:(id)c length:(long long)d mimeType:(id)e ;
 - (void) appendPartWithFileData:(id)a name:(id)b fileName:(id)c mimeType:(id)d ;
 - (void) throttleBandwidthWithPacketSize:(unsigned long long)a delay:(double)b ;
 - (void) .cxx_destruct;
 - (id) request;


@end
