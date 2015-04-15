
@interface _UIPreviewItemProxy : NSObject {

    NSURL _URL;
    NSURL _previewURLOverride;
    NSString _name;
    NSURL _URLsToDeleteOnDealloc;
    NSString _previewItemContentType;
    NSURL _URLToDeleteOnDealloc;
}
@property (nonatomic, copy, readwrite) NSURL* previewItemURL;
@property (nonatomic, copy, readwrite) NSURL* previewItemURLOverride;
@property (nonatomic, copy, readwrite) NSString* previewItemTitle;
@property (nonatomic, copy, readwrite) NSURL* URLToDeleteOnDealloc;
@property (nonatomic, copy, readwrite) NSString* previewItemContentType;

 - (void) dealloc;
 - (id) previewItemURL;
 - (id) previewItemURLOverride;
 - (void) setPreviewItemContentType:(id)a;
 - (id) previewItemContentType;
 - (id) _primitive_previewItemContentType;
 - (id) previewItemURLForDisplay;
 - (void) setPreviewItemURL:(id)a;
 - (void) setPreviewItemURLOverride:(id)a;
 - (id) previewItemTitle;
 - (void) setPreviewItemTitle:(id)a;
 - (id) URLToDeleteOnDealloc;
 - (void) setURLToDeleteOnDealloc:(id)a;


@end
