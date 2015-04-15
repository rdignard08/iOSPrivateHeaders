
@interface NSClassicMapTable : NSMapTable {

    {?="hash"^?"isEqual"^?"retain"^?"release"^?"describe"^?"notAKeyMarker"^v} _keyCallBacks;
    {?="retain"^?"release"^?"describe"^?} _valueCallBacks;
    ^{__CFBasicHash=} _ht;
}

 - (void) removeAllItems;
 - (void) setItem:(r^v)aforKnownAbsentKey:(r^v)b;
 - (^v) existingItemForSetItem:(r^v)aforAbsentKey:(r^v)b;
 - (BOOL) mapMember:(r^v)aoriginalKey:(r^^v)bvalue:(r^^v)c;
 - (unsigned long long) getKeys:(r^^v)avalues:(r^^v)b;
 - (id) description;
 - (void) dealloc;
 - (id) copy;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (BOOL) isEqual:(id)a;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) allKeys;
 - (id) allValues;
 - (id) init;


@end
