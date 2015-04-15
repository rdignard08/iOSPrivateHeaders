
@interface CFPDCFDataBuffer : CFPDDataBuffer {

    ^{__CFData=} data;
}

 - (void) dealloc;
 - (void) finalize;
 - (^v) bytes;
 - (id) initWithCFData:(^{__CFData=})a;
 - (^{__CFData=}) copyCFData;
 - (Q) length;


@end
