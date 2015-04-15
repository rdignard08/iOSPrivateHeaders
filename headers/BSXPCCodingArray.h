
@protocol NSFastEnumeration, BSXPCCoding;
@interface BSXPCCodingArray : NSObject <NSFastEnumeration, BSXPCCoding> {

    @"NSArray" _array;
}

 - (void) dealloc;
 - (Q) count;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) initWithArray:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
