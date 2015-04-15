
@interface CFPDDataBuffer : NSObject {

}
 + (id) newBufferFromFile:(int)aallowMappingIfSafe:(BOOL)b;
 + (id) newBufferFromCFData:(^{__CFData=})a;
 + (id) newBufferFromPropertyList:(^v)a;

 - (^v) bytes;
 - (BOOL) validatePlist;
 - (^v) copyPropertyListWithMutability:(unsigned long long)a ;
 - (^{__CFData=}) copyCFData;
 - (id) copyXPCData;
 - (BOOL) beginAccessing;
 - (void) endAccessing;
 - (unsigned long long) length;


@end
