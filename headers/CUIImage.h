
@protocol NSCopying;
@interface CUIImage : NSObject <NSCopying> {

    ^{CGImage=} _cgImage;
}
@property (nonatomic, assign, readonly) NSNumber* image;
@property (nonatomic, assign, readonly) NSNumber* size;
 + (id) imageWithCGImage:(^{CGImage=})a;

 - ({CGSize=dd}) size;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (^{CGImage=}) cgImage;
 - (id) initWithCGImage:(^{CGImage=})a ;
 - (^{CGImage=}) image;


@end
