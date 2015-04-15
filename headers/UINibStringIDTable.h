
@interface UINibStringIDTable : NSObject {

    ^^{UIStringIDTableBucket} table;
    ^{UIStringIDTableBucket=@Q^{UIStringIDTableBucket}} buckets;
    unsigned long long hashMask;
    unsigned long long count;
}

 - (void) dealloc;
 - (long long) count;
 - (BOOL) lookupKey:(id)aidentifier:(^q)b;
 - (id) initWithKeysTransferingOwnership:(^@)acount:(unsigned long long)b;


@end
