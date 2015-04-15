
@protocol NSTextAttachmentCell;
@interface UITextAttachmentView : UIView <NSTextAttachmentCell> {

    @"UIImage" _image;
    @"NSTextAttachment" _attachment;
}
 + (id) viewForData:(id)aofType:(id)b;
 + (id) viewForImage:(id)a;

 - (void) dealloc;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) drawingBounds;
 - (void) setAttachment:(id)a;
 - (id) attachment;
 - (void) drawWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)bcharacterIndex:(Q)clayoutManager:(id)d;
 - ({CGSize=dd}) cellSize;
 - ({CGPoint=dd}) cellBaselineOffset;
 - (void) drawWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)bcharacterIndex:(Q)c;
 - (id) contentView;
 - (id) initWithContentView:(id)a;
 - (void) setImage:(id)a;
 - (void) setDrawingBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) image;


@end
