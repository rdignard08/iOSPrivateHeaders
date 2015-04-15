
@protocol NSCopying;
@interface _NSSharedKeySetS : NSObject <NSCopying> {

    * _g;
    C _select;
    ^v _rankTable;
    d _c;
    I _M;
    I _factor;
    I _numKey;
    ^I _seeds;
    ^[1S] _keys1;
    ^[2S] _keys2;
    ^[3S] _keys3;
    ^[3C] _ckeys;
    @"_NSSharedKeySetS" _subSharedKeySet;
    I _keyLen;
    I _type;
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

 - (Q) indexForBytes:(*)alength:(Q)b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (I) count;
 - (void) setSelect:(C)a;
 - (void) setC:(d)a;
 - (void) setM:(I)a;
 - (void) setFactor:(I)a;
 - (void) setNumKey:(I)a;
 - (void) setSeeds:(^I)a;
 - (void) setG:(*)a;
 - (void) setRankTable:(^v)a;
 - (void) setSubSharedKeySet:(id)a;
 - (BOOL) isEmpty;
 - (void) setCkeys:(^[3C])a;
 - (void) setKeyLen:(I)a;
 - (void) setType:(I)a;
 - (void) setKeys1:(^[1S])a;
 - (void) setKeys2:(^[2S])a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) allKeys;
 - (I) keySetCount;
 - (id) generateSubclassCode:(id)a;
 - (id) initWithKeys:(^^v)akeyLenghtInBytes:(I)bcount:(I)ctype:(I)d;
 - (^S) keyAtIndex:(Q)a;
 - (*) bytesAtIndex:(Q)a;
 - (I) keyLen;
 - (Q) indexForKey:(^S)alength:(Q)b;
 - (I) maximumIndex;
 - (id) newKeySetWithKeys:(id)aencoding:(I)b;
 - (*) g;
 - (C) select;
 - (^v) rankTable;
 - (d) c;
 - (I) M;
 - (I) factor;
 - (I) numKey;
 - (^I) seeds;
 - (^[1S]) keys1;
 - (^[2S]) keys2;
 - (^[3S]) keys3;
 - (void) setKeys3:(^[3S])a;
 - (^[3C]) ckeys;
 - (id) subSharedKeySet;
 - (id) init;
 - (I) type;


@end
