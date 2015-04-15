
@interface _UIDecompressionInfo : NSObject {

    @"NSObject<OS_dispatch_semaphore>" syncSemaphore;
    @"NSObject<OS_dispatch_semaphore>" metadataSemaphore;
    @"NSData" imageData;
    {CGSize="width"d"height"d} maxSize;
    i renderingIntent;
    BOOL decompressionComplete;
    BOOL metadataComplete;
}

 - (void) dealloc;
 - (id) initWithData:(id)amaxSize:({CGSize=dd})brenderingIntent:(i)c;


@end
