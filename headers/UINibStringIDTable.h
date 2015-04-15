
@interface UINibStringIDTable : NSObject {

    ^^{UIStringIDTableBucket} table;
    ^{UIStringIDTableBucket=@Q^{UIStringIDTableBucket}} buckets;
    unsigned long long hashMask;
    unsigned long long count;
}

 - (void) dealloc;
 - (long long) count;
 - (BOOL) lookupKey:(id)a identifier:(^q)b ;
 - (id) initWithKeysTransferingOwnership:(^@)a count:(unsigned long long)b ;


@end
