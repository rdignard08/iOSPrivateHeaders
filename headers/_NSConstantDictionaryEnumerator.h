
@interface _NSConstantDictionaryEnumerator : NSEnumerator {

    ^@ currentKey;
    unsigned long long capacity;
    unsigned long long keyIndex;
}

 - (id) nextObject;
 - (id) allObjects;
 - (id) initWithFirstKeyPointer:(^@)a capacity:(unsigned long long)b ;


@end
