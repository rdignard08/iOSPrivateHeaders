
@protocol NSCopying;
@interface _NSSharedKeySetS : NSObject <NSCopying> {

    char* _g;
    unsigned char _select;
    ^v _rankTable;
    double _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    ^I _seeds;
    ^[1S] _keys1;
    ^[2S] _keys2;
    ^[3S] _keys3;
    ^[3C] _ckeys;
    _NSSharedKeySetS _subSharedKeySet;
    unsigned int _keyLen;
    unsigned int _type;
}
@property (atomic, assign, readwrite) NSNumber* g;
@property (atomic, assign, readwrite) NSNumber* select;
@property (atomic, assign, readwrite) NSNumber* rankTable;
@property (atomic, assign, readwrite) NSNumber* c;
@property (atomic, assign, readwrite) NSNumber* M;
@property (atomic, assign, readwrite) NSNumber* factor;
@property (atomic, assign, readwrite) NSNumber* numKey;
@property (atomic, assign, readwrite) NSNumber* seeds;
@property (atomic, assign, readwrite) NSNumber* keys1;
@property (atomic, assign, readwrite) NSNumber* keys2;
@property (atomic, assign, readwrite) NSNumber* keys3;
@property (atomic, assign, readwrite) NSNumber* ckeys;
@property (atomic, assign, readwrite) NSNumber* keyLen;
@property (atomic, assign, readwrite) NSNumber* type;
@property (atomic, retain, readwrite) _NSSharedKeySetS* subSharedKeySet;

 - (unsigned long long) indexForBytes:(char*)alength:(unsigned long long)b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned int) count;
 - (void) setSelect:(unsigned char)a;
 - (void) setC:(double)a;
 - (void) setM:(unsigned int)a;
 - (void) setFactor:(unsigned int)a;
 - (void) setNumKey:(unsigned int)a;
 - (void) setSeeds:(^I)a;
 - (void) setG:(char*)a;
 - (void) setRankTable:(^v)a;
 - (void) setSubSharedKeySet:(id)a;
 - (BOOL) isEmpty;
 - (void) setCkeys:(^[3C])a;
 - (void) setKeyLen:(unsigned int)a;
 - (void) setType:(unsigned int)a;
 - (void) setKeys1:(^[1S])a;
 - (void) setKeys2:(^[2S])a;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) allKeys;
 - (unsigned int) keySetCount;
 - (id) generateSubclassCode:(id)a;
 - (id) initWithKeys:(^^v)akeyLenghtInBytes:(unsigned int)bcount:(unsigned int)ctype:(unsigned int)d;
 - (^S) keyAtIndex:(unsigned long long)a;
 - (char*) bytesAtIndex:(unsigned long long)a;
 - (unsigned int) keyLen;
 - (unsigned long long) indexForKey:(^S)alength:(unsigned long long)b;
 - (unsigned int) maximumIndex;
 - (id) newKeySetWithKeys:(id)aencoding:(unsigned int)b;
 - (char*) g;
 - (unsigned char) select;
 - (^v) rankTable;
 - (double) c;
 - (unsigned int) M;
 - (unsigned int) factor;
 - (unsigned int) numKey;
 - (^I) seeds;
 - (^[1S]) keys1;
 - (^[2S]) keys2;
 - (^[3S]) keys3;
 - (void) setKeys3:(^[3S])a;
 - (^[3C]) ckeys;
 - (id) subSharedKeySet;
 - (id) init;
 - (unsigned int) type;


@end
