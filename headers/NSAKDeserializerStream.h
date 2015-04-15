
@protocol NSDeserializerStream;
@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {

    r^v memory;
    r* current;
    Q left;
    Q max;
    BOOL freeWhenDone;
}

 - (id) initFromMemoryNoCopy:(r^v)alength:(Q)bfreeWhenDone:(BOOL)c;
 - (i) readInt;
 - (Q) readAlignedDataSize;
 - (void) readData:(^v)alength:(Q)b;
 - (id) initFromPath:(id)a;
 - (void) dealloc;
 - (void) finalize;


@end
