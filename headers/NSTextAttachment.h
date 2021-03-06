
@protocol NSTextAttachmentContainer, NSCoding;
@interface NSTextAttachment : NSObject <NSTextAttachmentContainer, NSCoding> {

    NSData* _data;
    NSString* _uti;
    NSString* _cacheKey;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _bounds;
    NSFileWrapper* _fileWrapper;
    UIImage* _image;
    UITextAttachmentView* _wrapperView;
}
@property (nonatomic, retain, readwrite) NSData* contents;
@property (nonatomic, retain, readwrite) NSString* fileType;
@property (nonatomic, retain, readwrite) NSFileWrapper* fileWrapper;
@property (nonatomic, retain, readwrite) UIImage* image;
@property (nonatomic, assign, readwrite) NSNumber* bounds;
@property (atomic, retain, readwrite) UIView* contentView;
 + (void) initialize;
 + (id) imageCache;

 - (id) fileType;
 - (id) description;
 - (void) dealloc;
 - (void) setFileType:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) drawingBounds;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) attachmentCell;
 - (id) imageForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a textContainer:(id)b characterIndex:(unsigned long long)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) attachmentBoundsForTextContainer:(id)a proposedLineFragment:({CGRect={CGPoint=dd}{CGSize=dd}})b glyphPosition:({CGPoint=dd})c characterIndex:(unsigned long long)d ;
 - (id) _cacheKey;
 - (id) initWithData:(id)a ofType:(id)b ;
 - (id) fileWrapper;
 - (id) initWithFileWrapper:(id)a ;
 - (id) contentView;
 - (id) _image;
 - (void) setImage:(id)a ;
 - (void) setContentView:(id)a ;
 - (void) setDrawingBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFileWrapper:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) contents;
 - (void) setContents:(id)a ;
 - (id) image;


@end
