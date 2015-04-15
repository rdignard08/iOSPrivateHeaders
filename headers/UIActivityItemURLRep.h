
@interface UIActivityItemURLRep : NSObject {

    NSURL* _URL;
    UIImage* _thumbnail;
    long long _attachmentURLType;
}
@property (nonatomic, retain, readwrite) NSURL* URL;
@property (nonatomic, retain, readwrite) UIImage* thumbnail;
@property (nonatomic, assign, readwrite) NSNumber* attachmentURLType;

 - (void) dealloc;
 - (id) scheme;
 - (BOOL) isFileURL;
 - (long long) attachmentURLType;
 - (void) setThumbnail:(id)a;
 - (void) setAttachmentURLType:(long long)a;
 - (id) URL;
 - (void) setURL:(id)a;
 - (id) thumbnail;


@end
