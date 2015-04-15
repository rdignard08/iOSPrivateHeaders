
@interface _UIWebMediaUploadItem : NSObject {

    BOOL _video;
    NSString* _filePath;
    UIImage* _originalImage;
}
@property (nonatomic, retain, readwrite) NSString* filePath;
@property (nonatomic, retain, readwrite) UIImage* originalImage;
@property (nonatomic, assign, readwrite, getter=isVideo) NSNumber* video;
 + (id) mediaUploadItemWithFilePath:(id)aimage:(id)bisVideo:(BOOL)c;

 - (void) dealloc;
 - (void) setFilePath:(id)a ;
 - (void) setOriginalImage:(id)a ;
 - (void) setVideo:(BOOL)a ;
 - (id) initWithFilePath:(id)a image:(id)b isVideo:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _squareCropRectForSize:({CGSize=dd})a ;
 - (id) originalImage;
 - (id) _squareImage:(id)a ;
 - (id) filePath;
 - (id) _imageForVideoFile:(id)a ;
 - (id) displayImage;
 - (BOOL) isVideo;


@end
