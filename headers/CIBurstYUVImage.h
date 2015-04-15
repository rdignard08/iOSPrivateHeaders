
@interface CIBurstYUVImage : NSObject {

    char* Ybuffer;
    char* Cbuffer;
    int width;
    int height;
    int bytesPerRow;
    ^{__CFData=} dataPtr;
    ^{__CVBuffer=} pixelBuffer;
}
@property (atomic, assign, readwrite) NSNumber* width;
@property (atomic, assign, readwrite) NSNumber* height;
@property (atomic, assign, readwrite) NSNumber* bytesPerRow;
@property (atomic, assign, readwrite) NSNumber* Ybuffer;
@property (atomic, assign, readwrite) NSNumber* Cbuffer;

 - (void) dealloc;
 - (id) initWithCGImage:(^{CGImage=})amaxDimension:(int)b;
 - (char*) Ybuffer;
 - (int) bytesPerRow;
 - (char*) Cbuffer;
 - (void) convertRGBAToYUV420:(char*)argbaBytesPerRow:(int)b;
 - (^{__CVBuffer=}) pixelBuffer;
 - (void) setYbuffer:(char*)a;
 - (void) setCbuffer:(char*)a;
 - (int) width;
 - (int) height;
 - (void) setWidth:(int)a;
 - (void) setHeight:(int)a;
 - (void) setBytesPerRow:(int)a;


@end
