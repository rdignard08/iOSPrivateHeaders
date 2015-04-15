
@interface CPBitmapStore : NSObject {

    @"NSString" _path;
    @"NSString" _imagePath;
    @"NSCache" _cache;
    i _version;
    @"NSString" _versionPath;
    @"NSObject<OS_dispatch_queue>" _serialQueueRemoveImagesBackground;
    @"NSObject<OS_dispatch_queue>" _serialQueueRemoveImagesDefault;
    BOOL _lockOnRead;
}
@property (nonatomic, assign, readonly) NSNumber* version;
@property (nonatomic, assign, readwrite) NSNumber* lockOnRead;
@property (nonatomic, assign, readwrite) NSNumber* cacheItemLimit;

 - (i) setVersion:(i)a;
 - (void) dealloc;
 - (void) commitTransaction;
 - (id) initWithPath:(id)aversion:(i)b;
 - (void) purge;
 - (^{CGImage=}) copyImageForKey:(id)ainGroup:(id)b;
 - (void) storeImageForKey:(id)ainGroup:(id)bopaque:(BOOL)cimage:(^{CGImage=})d;
 - (void) setLockOnRead:(BOOL)a;
 - (void) setCacheItemLimit:(Q)a;
 - (void) storeImageDataForKey:(id)ainGroup:(id)bwithSize:({CGSize=dd})copaque:(BOOL)dscale:(d)edata:(id)f;
 - (^{CGImage=}) copyAndStoreImageForKey:(id)ainGroup:(id)bwithSize:({CGSize=dd})copaque:(BOOL)dscale:(d)edraw:(@?)f;
 - (void) storeGrayscaleImageDataForKey:(id)ainGroup:(id)bwithSize:({CGSize=dd})copaque:(BOOL)dscale:(d)edata:(id)f;
 - (i) version;
 - (id) imagePath;
 - (id) imageNameForKey:(id)ainGroup:(id)b;
 - (id) cacheNumberForKey:(id)a;
 - (BOOL) findImageWithKey:(id)ainGroup:(id)bandInfo:(^{_img=@QQQQC})c;
 - (^v) openAndMmap:(id)awithInfo:(^{_img=@QQQQC})b;
 - (BOOL) lockOnRead;
 - (I) memContentOffset;
 - (BOOL) saveImageWithKey:(id)ainGroup:(id)bandInfo:(^{_img=@QQQQC})c;
 - (^{CGImage=}) _copyAndStoreImageForKey:(id)ainGroup:(id)bwithSize:({CGSize=dd})cformat:(i)dscale:(d)efillMem:(@?)falternateCompletion:(@?)g;
 - (void) removeImagesInGroups:(id)acompletion:(@?)b;
 - (id) _versionPath;
 - (Q) cacheItemLimit;
 - (^{CGImage=}) copyImageForKey:(id)a;
 - (id) allGroups;
 - (void) commitTxn;
 - (void) removeImagesInGroups:(id)a;
 - (Q) imageCount;


@end
