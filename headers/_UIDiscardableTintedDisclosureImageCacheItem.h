
@protocol NSDiscardableContent;
@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent> {

    UIImage* _tintedImage;
    UIColor* _tintColor;
    {?="isDiscarded"b1"isPressed"b1"useCount"I} _flags;
}
@property (nonatomic, assign, readonly) UIImage* tintedImage;
@property (nonatomic, assign, readonly) UIColor* tintColor;

 - (BOOL) beginContentAccess;
 - (void) endContentAccess;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) discardContentIfPossible;
 - (BOOL) isContentDiscarded;
 - (id) tintColor;
 - (id) _tintedDisclosureImage:(BOOL)a ;
 - (id) initWithPressed:(BOOL)a tintColor:(id)b ;
 - (id) tintedImage;


@end
