
@interface _NSConstantDictionaryEnumerator : NSEnumerator {

    ^@ currentKey;
    unsigned long long capacity;
    unsigned long long keyIndex;
}

 - (id) nextObject;
 - (id) allObjects;
 - (id) initWithFirstKeyPointer:(^@)acapacity:(unsigned long long)b;


@end
