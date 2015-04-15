
@interface _UIDecompressionInfo : NSObject {

    NSObject<OS_dispatch_semaphore>* syncSemaphore;
    NSObject<OS_dispatch_semaphore>* metadataSemaphore;
    NSData* imageData;
    {CGSize="width"d"height"d} maxSize;
    int renderingIntent;
    BOOL decompressionComplete;
    BOOL metadataComplete;
}

 - (void) dealloc;
 - (id) initWithData:(id)a maxSize:({CGSize=dd})b renderingIntent:(int)c ;


@end
