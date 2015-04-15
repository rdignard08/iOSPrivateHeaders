
@interface UINibCoderValue : NSObject {

    @"NSString" key;
    I scope;
    c type;
    (?="floatValue"f"doubleValue"d"integerValue"Q"bytesValue"^v) value;
    Q length;
}
 + (id) nibValueForInt8:(C)akey:(id)bscope:(I)c;
 + (id) nibValueForInt16:(S)akey:(id)bscope:(I)c;
 + (id) nibValueForInt32:(I)akey:(id)bscope:(I)c;
 + (id) nibValueForInt64:(Q)akey:(id)bscope:(I)c;
 + (id) nibValueForObjectReference:(q)akey:(id)bscope:(I)c;
 + (id) nibValueForInteger:(Q)akey:(id)bscope:(I)c;
 + (id) nibValueForBoolean:(BOOL)akey:(id)bscope:(I)c;
 + (id) nibValueForDouble:(d)akey:(id)bscope:(I)c;
 + (id) nibValueForFloat:(f)akey:(id)bscope:(I)c;
 + (id) nibValueForBytes:(r^v)alength:(Q)bkey:(id)cscope:(I)d;
 + (id) nibValueRepresentingNilReferenceForKey:(id)ascope:(I)b;

 - (void) dealloc;
 - (Q) byteLength;


@end
