
@interface CPBitmapStore : NSObject {

    NSString* _path;
    NSString* _imagePath;
    NSCache* _cache;
    int _version;
    NSString* _versionPath;
    NSObject<OS_dispatch_queue>* _serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue>* _serialQueueRemoveImagesDefault;
    BOOL _lockOnRead;
}
@property (nonatomic, assign, readonly) NSNumber* version;
@property (nonatomic, assign, readwrite) NSNumber* lockOnRead;
@property (nonatomic, assign, readwrite) NSNumber* cacheItemLimit;

 - (int) setVersion:(int)a ;
 - (void) dealloc;
 - (void) commitTransaction;
 - (id) initWithPath:(id)a version:(int)b ;
 - (void) purge;
 - (^{CGImage=}) copyImageForKey:(id)a inGroup:(id)b ;
 - (void) storeImageForKey:(id)a inGroup:(id)b opaque:(BOOL)c image:(^{CGImage=})d ;
 - (void) setLockOnRead:(BOOL)a ;
 - (void) setCacheItemLimit:(unsigned long long)a ;
 - (void) storeImageDataForKey:(id)a inGroup:(id)b withSize:({CGSize=dd})c opaque:(BOOL)d scale:(double)e data:(id)f ;
 - (^{CGImage=}) copyAndStoreImageForKey:(id)a inGroup:(id)b withSize:({CGSize=dd})c opaque:(BOOL)d scale:(double)e draw:(@?)f ;
 - (void) storeGrayscaleImageDataForKey:(id)a inGroup:(id)b withSize:({CGSize=dd})c opaque:(BOOL)d scale:(double)e data:(id)f ;
 - (int) version;
 - (id) imagePath;
 - (id) imageNameForKey:(id)a inGroup:(id)b ;
 - (id) cacheNumberForKey:(id)a ;
 - (BOOL) findImageWithKey:(id)a inGroup:(id)b andInfo:(^{_img=@QQQQC})c ;
 - (^v) openAndMmap:(id)a withInfo:(^{_img=@QQQQC})b ;
 - (BOOL) lockOnRead;
 - (unsigned int) memContentOffset;
 - (BOOL) saveImageWithKey:(id)a inGroup:(id)b andInfo:(^{_img=@QQQQC})c ;
 - (^{CGImage=}) _copyAndStoreImageForKey:(id)a inGroup:(id)b withSize:({CGSize=dd})c format:(int)d scale:(double)e fillMem:(@?)f alternateCompletion:(@?)g ;
 - (void) removeImagesInGroups:(id)a completion:(@?)b ;
 - (id) _versionPath;
 - (unsigned long long) cacheItemLimit;
 - (^{CGImage=}) copyImageForKey:(id)a ;
 - (id) allGroups;
 - (void) commitTxn;
 - (void) removeImagesInGroups:(id)a ;
 - (unsigned long long) imageCount;


@end
