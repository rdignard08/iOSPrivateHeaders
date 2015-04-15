
@interface NSSubstituteWebResource : NSObject {

    NSData* _data;
    NSURL* _url;
    NSString* _mimeType;
    NSString* _textEncodingName;
    NSString* _frameName;
}

 - (id) MIMEType;
 - (void) dealloc;
 - (id) data;
 - (id) URL;
 - (Class) _webResourceClass;
 - (id) initWithData:(id)a URL:(id)b MIMEType:(id)c textEncodingName:(id)d frameName:(id)e ;
 - (id) frameName;
 - (id) webResource;
 - (id) textEncodingName;


@end
