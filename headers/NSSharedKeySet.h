
@protocol NSFastEnumeration, NSCopying, NSCoding;
@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding> {

    char* _g;
    unsigned char _select;
    ^v _rankTable;
    double _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    ^I _seeds;
    ^@ _keys;
    NSSharedKeySet* _subSharedKeySet;
}
@property (atomic, assign, readwrite) NSNumber* g;
@property (atomic, assign, readwrite) NSNumber* select;
@property (atomic, assign, readwrite) NSNumber* rankTable;
@property (atomic, assign, readwrite) NSNumber* c;
@property (atomic, assign, readwrite) NSNumber* M;
@property (atomic, assign, readwrite) NSNumber* factor;
@property (atomic, assign, readwrite) NSNumber* numKey;
@property (atomic, assign, readwrite) NSNumber* seeds;
@property (atomic, assign, readwrite) NSNumber* keys;
@property (atomic, retain, readwrite) NSSharedKeySet* subSharedKeySet;
 + (id) keySetWithKeys:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (void) setSelect:(unsigned char)a;
 - (void) setC:(double)a;
 - (void) setM:(unsigned int)a;
 - (void) setFactor:(unsigned int)a;
 - (void) setNumKey:(unsigned int)a;
 - (void) setSeeds:(^I)a;
 - (void) setG:(char*)a;
 - (void) setRankTable:(^v)a;
 - (void) setKeys:(^@)a;
 - (void) setSubSharedKeySet:(id)a;
 - (id) initWithKeys:(^@)acount:(unsigned long long)b;
 - (BOOL) isEmpty;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (id) allKeys;
 - (unsigned long long) keySetCount;
 - (id) keyAtIndex:(unsigned long long)a;
 - (unsigned long long) maximumIndex;
 - (char*) g;
 - (unsigned char) select;
 - (^v) rankTable;
 - (double) c;
 - (unsigned int) M;
 - (unsigned int) factor;
 - (unsigned int) numKey;
 - (^I) seeds;
 - (id) subSharedKeySet;
 - (unsigned long long) indexForKey:(id)a;
 - (id) generateSubclassCode:(id)aprintChainOfKeySetIfPossible:(BOOL)bprintSpecialCode:(unsigned long long)c;
 - (^@) keys;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
