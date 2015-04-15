
@interface _NSConstantDictionaryEnumerator : NSEnumerator {

    ^@ currentKey;
    Q capacity;
    Q keyIndex;
}

 - (id) nextObject;
 - (id) allObjects;
 - (id) initWithFirstKeyPointer:(^@)acapacity:(Q)b;


@end
