
@protocol NSDeserializerStream;
@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {

    r^v memory;
    r* current;
    unsigned long long left;
    unsigned long long max;
    BOOL freeWhenDone;
}

 - (id) initFromMemoryNoCopy:(r^v)a length:(unsigned long long)b freeWhenDone:(BOOL)c ;
 - (int) readInt;
 - (unsigned long long) readAlignedDataSize;
 - (void) readData:(^v)a length:(unsigned long long)b ;
 - (id) initFromPath:(id)a ;
 - (void) dealloc;
 - (void) finalize;


@end
