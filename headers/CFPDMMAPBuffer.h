
@interface CFPDMMAPBuffer : CFPDDataBuffer {

    ^v bytes;
    Q length;
}

 - (void) dealloc;
 - (void) finalize;
 - (^v) bytes;
 - (id) initWithFileDescriptor:(i)asize:(Q)ballowMappingIfSafe:(BOOL)c;
 - (id) initWithSize:(Q)abufferPtr:(^^v)b;
 - (Q) length;


@end
