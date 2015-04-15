
@interface NSWeakPointerValue : NSValue {

    ^v _value;
    ^v _weakValue;
}

 - (void) getValue:(^v)a;
 - (BOOL) isEqualToValue:(id)a;
 - (id) nonretainedObjectValue;
 - (id) initWithPointer:(^v)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (Q) hash;
 - (r*) objCType;


@end
