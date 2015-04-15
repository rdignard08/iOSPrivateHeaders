
@interface NSClassicMapTable : NSMapTable {

    {?="hash"^?"isEqual"^?"retain"^?"release"^?"describe"^?"notAKeyMarker"^v} _keyCallBacks;
    {?="retain"^?"release"^?"describe"^?} _valueCallBacks;
    ^{__CFBasicHash=} _ht;
}

 - (void) removeAllItems;
 - (void) setItem:(r^v)a forKnownAbsentKey:(r^v)b ;
 - (^v) existingItemForSetItem:(r^v)a forAbsentKey:(r^v)b ;
 - (BOOL) mapMember:(r^v)a originalKey:(r^^v)b value:(r^^v)c ;
 - (unsigned long long) getKeys:(r^^v)a values:(r^^v)b ;
 - (id) description;
 - (void) dealloc;
 - (id) copy;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (void) removeObjectForKey:(id)a ;
 - (BOOL) isEqual:(id)a ;
 - (void) setObject:(id)a forKey:(id)b ;
 - (id) allKeys;
 - (id) allValues;
 - (id) init;


@end
