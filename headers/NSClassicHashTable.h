
@interface NSClassicHashTable : NSHashTable {

    {?="hash"^?"isEqual"^?"retain"^?"release"^?"describe"^?} _callBacks;
    ^{__CFBasicHash=} _ht;
}

 - (^v) getItem:(r^v)a;
 - (void) removeItem:(r^v)a;
 - (void) removeAllItems;
 - (void) insertKnownAbsentItem:(r^v)a;
 - (void) getKeys:(r^^v)acount:(^Q)b;
 - (void) insertItem:(r^v)a;
 - (id) description;
 - (void) dealloc;
 - (id) copy;
 - (Q) count;
 - (void) addObject:(id)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) allObjects;
 - (id) init;


@end
