
@interface CFPDPurgeableBuffer : CFPDDataBuffer {

    ^{__CFData=} handle;
    unsigned long long allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

 - (void) dealloc;
 - (^v) bytes;
 - (id) initWithPropertyList:(^v)a;
 - (BOOL) beginAccessing;
 - (void) endAccessing;
 - (unsigned long long) length;


@end
