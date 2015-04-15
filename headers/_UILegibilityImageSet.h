
@interface _UILegibilityImageSet : NSObject {

    UIImage _image;
    UIImage _shadowImage;
}
@property (nonatomic, retain, readwrite) UIImage* image;
@property (nonatomic, retain, readwrite) UIImage* shadowImage;
 + (id) imageFromImage:(id)awithShadowImage:(id)b;

 - (void) dealloc;
 - (id) shadowImage;
 - (void) setShadowImage:(id)a;
 - (id) initWithImage:(id)ashadowImage:(id)b;
 - (void) setImage:(id)a;
 - (id) image;


@end
