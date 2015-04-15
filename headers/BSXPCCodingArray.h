
@protocol NSFastEnumeration, BSXPCCoding;
@interface BSXPCCodingArray : NSObject <NSFastEnumeration, BSXPCCoding> {

    NSArray* _array;
}

 - (void) dealloc;
 - (unsigned long long) count;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (id) initWithArray:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
