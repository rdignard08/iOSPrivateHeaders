
@protocol NSCoding, NSCopying;
@interface UIButtonContent : NSObject <NSCoding, NSCopying> {

    NSString* title;
    NSAttributedString* attributedTitle;
    UIImage* image;
    UIImage* background;
    UIColor* titleColor;
    UIColor* imageColor;
    UIColor* shadowColor;
    NSNumber* drawingStroke;
}
@property (nonatomic, retain, readwrite) NSString* title;
@property (nonatomic, retain, readwrite) NSAttributedString* attributedTitle;
@property (nonatomic, retain, readwrite) UIImage* image;
@property (nonatomic, retain, readwrite) UIImage* background;
@property (nonatomic, retain, readwrite) UIColor* titleColor;
@property (nonatomic, retain, readwrite) UIColor* imageColor;
@property (nonatomic, retain, readwrite) UIColor* shadowColor;
@property (nonatomic, retain, readwrite) NSNumber* drawingStroke;
@property (nonatomic, retain, readwrite) _UIGraphicsLetterpressStyle* letterpressStyle;
@property (nonatomic, assign, readonly) NSNumber* isEmpty;

 - (id) title;
 - (void) setTitle:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (void) setAttributedTitle:(id)a;
 - (void) setLetterpressStyle:(id)a;
 - (id) letterpressStyle;
 - (id) attributedTitle;
 - (id) background;
 - (void) setBackground:(id)a;
 - (id) titleColor;
 - (void) setTitleColor:(id)a;
 - (id) imageColor;
 - (void) setImageColor:(id)a;
 - (id) drawingStroke;
 - (void) setDrawingStroke:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setShadowColor:(id)a;
 - (void) setImage:(id)a;
 - (id) shadowColor;
 - (id) image;


@end
