
@interface _UIPathLazyImageAsset : UIImageAsset {

    BOOL _imagesHaveBeenLoaded;
    BOOL _haveCGCacheImages;
    @"NSArray" _imagePaths;
}

 - (void) dealloc;
 - (id) imageWithTraitCollection:(id)a;
 - (void) setImagePaths:(id)a;
 - (void) setHaveCGCacheImages:(BOOL)a;
 - (void) _clearResolvedImageResources;
 - (id) imagePaths;
 - (BOOL) haveCGCacheImages;


@end
