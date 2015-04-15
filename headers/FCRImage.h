
@interface FCRImage : NSObject {

    Q width;
    Q height;
    Q bytesPerRow;
    * rawDataBuffer;
    * alignedDataBuffer;
    BOOL freeBufferWhenDone;
}
@property (atomic, assign, readwrite) NSNumber* width;
@property (atomic, assign, readwrite) NSNumber* height;
@property (atomic, assign, readwrite) NSNumber* bytesPerRow;

 - (void) dealloc;
 - (Q) bytesPerRow;
 - (id) initWithWidth:(Q)aheight:(Q)bbytesPerRow:(Q)cbuffer:(*)dfreeBufferWhenDone:(BOOL)e;
 - (Q) width;
 - (Q) height;
 - (*) getAlignedImageData;
 - (void) setWidth:(Q)a;
 - (void) setHeight:(Q)a;
 - (void) setBytesPerRow:(Q)a;


@end
