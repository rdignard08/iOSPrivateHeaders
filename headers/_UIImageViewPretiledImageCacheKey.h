
@interface _UIImageViewPretiledImageCacheKey : NSObject {

    UIImage _originalImage;
    {CGSize="width"d"height"d} _pretiledSize;
}
 + (id) cacheKeyWithOriginalImage:(id)apretiledSize:({CGSize=dd})b;

 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;


@end
