
@interface CPLRUDictionary : NSObject {

    ^{__CFDictionary=} _dictionary;
    Q _maxCount;
    @"CPLRUDictionaryNode" _head;
    @"CPLRUDictionaryNode" _tail;
}
 + (id) dictionaryWithMaximumCapacity:(Q)a;

 - (id) description;
 - (void) dealloc;
 - (Q) count;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) allKeys;
 - (void) _removeNodeFromLinkedList:(id)a;
 - (void) _addNodeToFront:(id)a;
 - (void) _removeNode:(id)a;
 - (void) _moveNodeToFront:(id)a;
 - (id) initWithMaximumCapacity:(Q)a;
 - (Q) linkedListCount;
 - (id) allKeysInLRUOrder;
 - (id) allValuesInLRUOrder;
 - (id) objectForKeyWithoutAffectingLRU:(id)a;


@end
