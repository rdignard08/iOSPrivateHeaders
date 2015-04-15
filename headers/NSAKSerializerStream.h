
@protocol NSSerializerStream;
@interface NSAKSerializerStream : NSObject <NSSerializerStream> {

    ^v memory;
    unsigned long long current;
    unsigned long long max;
    ^{__CFDictionary=} roomForIntLocations;
}

 - (void) copySerializationInto:(^v)a;
 - (unsigned long long) writeInt:(unsigned long long)a;
 - (unsigned long long) writeAlignedDataSize:(unsigned long long)a;
 - (unsigned long long) writeData:(r^v)alength:(unsigned long long)b;
 - (unsigned long long) writeRoomForInt:(^i)a;
 - (void) writeDelayedInt:(unsigned long long)afor:(int)b;
 - (BOOL) writeToPath:(id)asafely:(BOOL)b;
 - (void) dealloc;
 - (void) finalize;


@end
