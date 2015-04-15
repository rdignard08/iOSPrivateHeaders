
@interface CFPDDataBuffer : NSObject {

}
 + (id) newBufferFromFile:(i)aallowMappingIfSafe:(BOOL)b;
 + (id) newBufferFromCFData:(^{__CFData=})a;
 + (id) newBufferFromPropertyList:(^v)a;

 - (^v) bytes;
 - (BOOL) validatePlist;
 - (^v) copyPropertyListWithMutability:(Q)a;
 - (^{__CFData=}) copyCFData;
 - (id) copyXPCData;
 - (BOOL) beginAccessing;
 - (void) endAccessing;
 - (Q) length;


@end
