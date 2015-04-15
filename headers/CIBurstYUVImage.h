
@interface CIBurstYUVImage : NSObject {

    * Ybuffer;
    * Cbuffer;
    i width;
    i height;
    i bytesPerRow;
    ^{__CFData=} dataPtr;
    ^{__CVBuffer=} pixelBuffer;
}
@property (atomic, assign, readwrite) NSNumber* width;
@property (atomic, assign, readwrite) NSNumber* height;
@property (atomic, assign, readwrite) NSNumber* bytesPerRow;
@property (atomic, assign, readwrite) NSNumber* Ybuffer;
@property (atomic, assign, readwrite) NSNumber* Cbuffer;

 - (void) dealloc;
 - (id) initWithCGImage:(^{CGImage=})amaxDimension:(i)b;
 - (*) Ybuffer;
 - (i) bytesPerRow;
 - (*) Cbuffer;
 - (void) convertRGBAToYUV420:(*)argbaBytesPerRow:(i)b;
 - (^{__CVBuffer=}) pixelBuffer;
 - (void) setYbuffer:(*)a;
 - (void) setCbuffer:(*)a;
 - (i) width;
 - (i) height;
 - (void) setWidth:(i)a;
 - (void) setHeight:(i)a;
 - (void) setBytesPerRow:(i)a;


@end
