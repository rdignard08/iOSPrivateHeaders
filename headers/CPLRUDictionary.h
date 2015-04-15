
@interface CPLRUDictionary : NSObject {

    ^{__CFDictionary=} _dictionary;
    unsigned long long _maxCount;
    @"CPLRUDictionaryNode" _head;
    @"CPLRUDictionaryNode" _tail;
}
 + (id) dictionaryWithMaximumCapacity:(unsigned long long)a;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) count;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) allKeys;
 - (void) _removeNodeFromLinkedList:(id)a;
 - (void) _addNodeToFront:(id)a;
 - (void) _removeNode:(id)a;
 - (void) _moveNodeToFront:(id)a;
 - (id) initWithMaximumCapacity:(unsigned long long)a;
 - (unsigned long long) linkedListCount;
 - (id) allKeysInLRUOrder;
 - (id) allValuesInLRUOrder;
 - (id) objectForKeyWithoutAffectingLRU:(id)a;


@end
