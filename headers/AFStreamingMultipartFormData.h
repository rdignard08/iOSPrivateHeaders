
@protocol AFMultipartFormData;
@interface AFStreamingMultipartFormData : NSObject <AFMultipartFormData> {

    @"NSMutableURLRequest" _request;
    Q _stringEncoding;
    @"NSString" _boundary;
    @"AFMultipartBodyStream" _bodyStream;
}
@property (nonatomic, copy, readwrite) NSMutableURLRequest* request;
@property (nonatomic, assign, readwrite) NSNumber* stringEncoding;
@property (nonatomic, copy, readwrite) NSString* boundary;
@property (nonatomic, retain, readwrite) AFMultipartBodyStream* bodyStream;

 - (void) setRequest:(id)a;
 - (void) setStringEncoding:(Q)a;
 - (id) initWithURLRequest:(id)astringEncoding:(Q)b;
 - (Q) stringEncoding;
 - (void) appendPartWithFormData:(id)aname:(id)b;
 - (id) requestByFinalizingMultipartFormData;
 - (void) setBoundary:(id)a;
 - (void) setBodyStream:(id)a;
 - (BOOL) appendPartWithFileURL:(id)aname:(id)bfileName:(id)cmimeType:(id)derror:(^@)e;
 - (id) boundary;
 - (id) bodyStream;
 - (void) appendPartWithHeaders:(id)abody:(id)b;
 - (BOOL) appendPartWithFileURL:(id)aname:(id)berror:(^@)c;
 - (void) appendPartWithInputStream:(id)aname:(id)bfileName:(id)clength:(q)dmimeType:(id)e;
 - (void) appendPartWithFileData:(id)aname:(id)bfileName:(id)cmimeType:(id)d;
 - (void) throttleBandwidthWithPacketSize:(Q)adelay:(d)b;
 - (void) .cxx_destruct;
 - (id) request;


@end