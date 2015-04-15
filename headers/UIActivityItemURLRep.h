
@interface UIActivityItemURLRep : NSObject {

    @"NSURL" _URL;
    @"UIImage" _thumbnail;
    q _attachmentURLType;
}
@property (nonatomic, retain, readwrite) NSURL* URL;
@property (nonatomic, retain, readwrite) UIImage* thumbnail;
@property (nonatomic, assign, readwrite) NSNumber* attachmentURLType;

 - (void) dealloc;
 - (id) scheme;
 - (BOOL) isFileURL;
 - (q) attachmentURLType;
 - (void) setThumbnail:(id)a;
 - (void) setAttachmentURLType:(q)a;
 - (id) URL;
 - (void) setURL:(id)a;
 - (id) thumbnail;


@end
