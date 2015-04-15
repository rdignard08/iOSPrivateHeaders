
@interface CPBitmapStore : NSObject {

    NSString _path;
    NSString _imagePath;
    NSCache _cache;
    int _version;
    NSString _versionPath;
    NSObject<OS_dispatch_queue> _serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> _serialQueueRemoveImagesDefault;
    BOOL _lockOnRead;
}
@property (nonatomic, assign, readonly) NSNumber* version;
@property (nonatomic, assign, readwrite) NSNumber* lockOnRead;
@property (nonatomic, assign, readwrite) NSNumber* cacheItemLimit;

 - (int) setVersion:(int)a;
 - (void) dealloc;
 - (void) commitTransaction;
 - (id) initWithPath:(id)aversion:(int)b;
 - (void) purge;
 - (^{CGImage=}) copyImageForKey:(id)ainGroup:(id)b;
 - (void) storeImageForKey:(id)ainGroup:(id)bopaque:(BOOL)cimage:(^{CGImage=})d;
 - (void) setLockOnRead:(BOOL)a;
 - (void) setCacheItemLimit:(unsigned long long)a;
 - (void) storeImageDataForKey:(id)ainGroup:(id)bwithSize:({CGSize=dd})copaque:(BOOL)dscale:(double)edata:(id)f;
 - (^{CGImage=}) copyAndStoreImageForKey:(id)ainGroup:(id)bwithSize:({CGSize=dd})copaque:(BOOL)dscale:(double)edraw:(@?)f;
 - (void) storeGrayscaleImageDataForKey:(id)ainGroup:(id)bwithSize:({CGSize=dd})copaque:(BOOL)dscale:(double)edata:(id)f;
 - (int) version;
 - (id) imagePath;
 - (id) imageNameForKey:(id)ainGroup:(id)b;
 - (id) cacheNumberForKey:(id)a;
 - (BOOL) findImageWithKey:(id)ainGroup:(id)bandInfo:(^{_img=@QQQQC})c;
 - (^v) openAndMmap:(id)awithInfo:(^{_img=@QQQQC})b;
 - (BOOL) lockOnRead;
 - (unsigned int) memContentOffset;
 - (BOOL) saveImageWithKey:(id)ainGroup:(id)bandInfo:(^{_img=@QQQQC})c;
 - (^{CGImage=}) _copyAndStoreImageForKey:(id)ainGroup:(id)bwithSize:({CGSize=dd})cformat:(int)dscale:(double)efillMem:(@?)falternateCompletion:(@?)g;
 - (void) removeImagesInGroups:(id)acompletion:(@?)b;
 - (id) _versionPath;
 - (unsigned long long) cacheItemLimit;
 - (^{CGImage=}) copyImageForKey:(id)a;
 - (id) allGroups;
 - (void) commitTxn;
 - (void) removeImagesInGroups:(id)a;
 - (unsigned long long) imageCount;


@end
