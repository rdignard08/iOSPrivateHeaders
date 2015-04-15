
@protocol NSSerializerStream;
@interface NSAKSerializerStream : NSObject <NSSerializerStream> {

    ^v memory;
    Q current;
    Q max;
    ^{__CFDictionary=} roomForIntLocations;
}

 - (void) copySerializationInto:(^v)a;
 - (Q) writeInt:(Q)a;
 - (Q) writeAlignedDataSize:(Q)a;
 - (Q) writeData:(r^v)alength:(Q)b;
 - (Q) writeRoomForInt:(^i)a;
 - (void) writeDelayedInt:(Q)afor:(i)b;
 - (BOOL) writeToPath:(id)asafely:(BOOL)b;
 - (void) dealloc;
 - (void) finalize;


@end
