
@interface CFPDMMAPBuffer : CFPDDataBuffer {

    ^v bytes;
    unsigned long long length;
}

 - (void) dealloc;
 - (void) finalize;
 - (^v) bytes;
 - (id) initWithFileDescriptor:(int)asize:(unsigned long long)ballowMappingIfSafe:(BOOL)c;
 - (id) initWithSize:(unsigned long long)abufferPtr:(^^v)b;
 - (unsigned long long) length;


@end
