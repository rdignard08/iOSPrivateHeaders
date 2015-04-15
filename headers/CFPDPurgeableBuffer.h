
@interface CFPDPurgeableBuffer : CFPDDataBuffer {

    ^{__CFData=} handle;
    Q allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

 - (void) dealloc;
 - (^v) bytes;
 - (id) initWithPropertyList:(^v)a;
 - (BOOL) beginAccessing;
 - (void) endAccessing;
 - (Q) length;


@end
