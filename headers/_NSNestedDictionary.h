
@interface _NSNestedDictionary : NSMutableDictionary {

    id _locals;
    id _bindings;
}

 - (id) _recursiveAllKeys;
 - (id) _recursiveAllValues;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (id) objectEnumerator;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;


@end
