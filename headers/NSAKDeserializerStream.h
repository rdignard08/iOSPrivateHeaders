
@protocol NSDeserializerStream;
@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {

    r^v memory;
    r* current;
    unsigned long long left;
    unsigned long long max;
    BOOL freeWhenDone;
}

 - (id) initFromMemoryNoCopy:(r^v)alength:(unsigned long long)bfreeWhenDone:(BOOL)c;
 - (int) readInt;
 - (unsigned long long) readAlignedDataSize;
 - (void) readData:(^v)alength:(unsigned long long)b;
 - (id) initFromPath:(id)a;
 - (void) dealloc;
 - (void) finalize;


@end
