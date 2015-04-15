
@interface _UIImageViewPretiledImageWrapper : NSObject {

    UIImage _pretiledImage;
    _UIImageViewPretiledImageCacheKey _cacheKey;
}
@property (nonatomic, assign, readonly) UIImage* pretiledImage;
 + (id) cacheValueWithPretiledImage:(id)acacheKey:(id)b;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) pretiledImage;


@end
