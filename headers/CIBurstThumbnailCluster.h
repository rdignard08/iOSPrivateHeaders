
@interface CIBurstThumbnailCluster : NSObject {

    NSMutableArray* burstImages;
    @? completionBlock;
    NSMutableDictionary* imageProps;
    CIBurstYUVImage* image;
}
@property (atomic, assign, readwrite) NSMutableArray* burstImages;
@property (atomic, assign, readwrite) NSMutableDictionary* imageProps;
@property (atomic, assign, readwrite) CIBurstYUVImage* image;
@property (atomic, assign, readwrite) NSNumber* completionBlock;

 - (@?) completionBlock;
 - (void) setCompletionBlock:(@?)a ;
 - (void) dealloc;
 - (id) init;
 - (void) setImage:(id)a ;
 - (void) releaseImage;
 - (id) burstImages;
 - (id) imageProps;
 - (id) initWithImageData:(id)a dict:(id)b identifier:(id)c imageProps:(id)d completionBlock:(@?)e ;
 - (void) addItemsFromCluster:(id)a ;
 - (void) setImageProps:(id)a ;
 - (float) computeMergeCost:(id)a ;
 - (void) setBurstImages:(id)a ;
 - (id) image;


@end
