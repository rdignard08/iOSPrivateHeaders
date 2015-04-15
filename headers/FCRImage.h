
@interface FCRImage : NSObject {

    unsigned long long width;
    unsigned long long height;
    unsigned long long bytesPerRow;
    char* rawDataBuffer;
    char* alignedDataBuffer;
    BOOL freeBufferWhenDone;
}
@property (atomic, assign, readwrite) NSNumber* width;
@property (atomic, assign, readwrite) NSNumber* height;
@property (atomic, assign, readwrite) NSNumber* bytesPerRow;

 - (void) dealloc;
 - (unsigned long long) bytesPerRow;
 - (id) initWithWidth:(unsigned long long)a height:(unsigned long long)b bytesPerRow:(unsigned long long)c buffer:(char*)d freeBufferWhenDone:(BOOL)e ;
 - (unsigned long long) width;
 - (unsigned long long) height;
 - (char*) getAlignedImageData;
 - (void) setWidth:(unsigned long long)a ;
 - (void) setHeight:(unsigned long long)a ;
 - (void) setBytesPerRow:(unsigned long long)a ;


@end
