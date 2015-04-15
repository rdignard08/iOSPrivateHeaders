
@interface UINibCoderValue : NSObject {

    NSString key;
    unsigned int scope;
    char type;
    (?="floatValue"f"doubleValue"d"integerValue"Q"bytesValue"^v) value;
    unsigned long long length;
}
 + (id) nibValueForInt8:(unsigned char)akey:(id)bscope:(unsigned int)c;
 + (id) nibValueForInt16:(unsigned short)akey:(id)bscope:(unsigned int)c;
 + (id) nibValueForInt32:(unsigned int)akey:(id)bscope:(unsigned int)c;
 + (id) nibValueForInt64:(unsigned long long)akey:(id)bscope:(unsigned int)c;
 + (id) nibValueForObjectReference:(long long)akey:(id)bscope:(unsigned int)c;
 + (id) nibValueForInteger:(unsigned long long)akey:(id)bscope:(unsigned int)c;
 + (id) nibValueForBoolean:(BOOL)akey:(id)bscope:(unsigned int)c;
 + (id) nibValueForDouble:(double)akey:(id)bscope:(unsigned int)c;
 + (id) nibValueForFloat:(float)akey:(id)bscope:(unsigned int)c;
 + (id) nibValueForBytes:(r^v)alength:(unsigned long long)bkey:(id)cscope:(unsigned int)d;
 + (id) nibValueRepresentingNilReferenceForKey:(id)ascope:(unsigned int)b;

 - (void) dealloc;
 - (unsigned long long) byteLength;


@end
