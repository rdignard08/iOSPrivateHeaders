
@interface UINibStringIDTable : NSObject {

    ^^{UIStringIDTableBucket} table;
    ^{UIStringIDTableBucket=@Q^{UIStringIDTableBucket}} buckets;
    Q hashMask;
    Q count;
}

 - (void) dealloc;
 - (q) count;
 - (BOOL) lookupKey:(id)aidentifier:(^q)b;
 - (id) initWithKeysTransferingOwnership:(^@)acount:(Q)b;


@end
