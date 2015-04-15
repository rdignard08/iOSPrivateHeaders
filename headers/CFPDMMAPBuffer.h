
@interface CFPDMMAPBuffer : CFPDDataBuffer {

    ^v bytes;
    unsigned long long length;
}

 - (void) dealloc;
 - (void) finalize;
 - (^v) bytes;
 - (id) initWithFileDescriptor:(int)a size:(unsigned long long)b allowMappingIfSafe:(BOOL)c ;
 - (id) initWithSize:(unsigned long long)a bufferPtr:(^^v)b ;
 - (unsigned long long) length;


@end
