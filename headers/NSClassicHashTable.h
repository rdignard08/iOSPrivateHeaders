
@interface NSClassicHashTable : NSHashTable {

    {?="hash"^?"isEqual"^?"retain"^?"release"^?"describe"^?} _callBacks;
    ^{__CFBasicHash=} _ht;
}

 - (^v) getItem:(r^v)a ;
 - (void) removeItem:(r^v)a ;
 - (void) removeAllItems;
 - (void) insertKnownAbsentItem:(r^v)a ;
 - (void) getKeys:(r^^v)a count:(^Q)b ;
 - (void) insertItem:(r^v)a ;
 - (id) description;
 - (void) dealloc;
 - (id) copy;
 - (unsigned long long) count;
 - (void) addObject:(id)a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) allObjects;
 - (id) init;


@end
