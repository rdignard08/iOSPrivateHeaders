
@protocol NSFastEnumeration, NSCopying, NSCoding;
@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding> {

    * _g;
    C _select;
    ^v _rankTable;
    d _c;
    I _M;
    I _factor;
    I _numKey;
    ^I _seeds;
    ^@ _keys;
    @"NSSharedKeySet" _subSharedKeySet;
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
 - (Q) count;
 - (void) setSelect:(C)a;
 - (void) setC:(d)a;
 - (void) setM:(I)a;
 - (void) setFactor:(I)a;
 - (void) setNumKey:(I)a;
 - (void) setSeeds:(^I)a;
 - (void) setG:(*)a;
 - (void) setRankTable:(^v)a;
 - (void) setKeys:(^@)a;
 - (void) setSubSharedKeySet:(id)a;
 - (id) initWithKeys:(^@)acount:(Q)b;
 - (BOOL) isEmpty;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) allKeys;
 - (Q) keySetCount;
 - (id) keyAtIndex:(Q)a;
 - (Q) maximumIndex;
 - (*) g;
 - (C) select;
 - (^v) rankTable;
 - (d) c;
 - (I) M;
 - (I) factor;
 - (I) numKey;
 - (^I) seeds;
 - (id) subSharedKeySet;
 - (Q) indexForKey:(id)a;
 - (id) generateSubclassCode:(id)aprintChainOfKeySetIfPossible:(BOOL)bprintSpecialCode:(Q)c;
 - (^@) keys;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
