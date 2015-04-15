
@protocol AFURLResponseSerialization;
@interface AFHTTPResponseSerializer : NSObject <AFURLResponseSerialization> {

    unsigned long long _stringEncoding;
    NSIndexSet* _acceptableStatusCodes;
    NSSet* _acceptableContentTypes;
}
@property (nonatomic, assign, readwrite) NSNumber* stringEncoding;
@property (nonatomic, copy, readwrite) NSIndexSet* acceptableStatusCodes;
@property (nonatomic, copy, readwrite) NSSet* acceptableContentTypes;
 + (id) serializer;
 + (BOOL) supportsSecureCoding;

 - (id) responseObjectForResponse:(id)a data:(id)b error:(^@)c ;
 - (void) setStringEncoding:(unsigned long long)a ;
 - (unsigned long long) stringEncoding;
 - (void) setAcceptableStatusCodes:(id)a ;
 - (void) setAcceptableContentTypes:(id)a ;
 - (id) acceptableContentTypes;
 - (id) acceptableStatusCodes;
 - (BOOL) validateResponse:(id)a data:(id)b error:(^@)c ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) .cxx_destruct;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
