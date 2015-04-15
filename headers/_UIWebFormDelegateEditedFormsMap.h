
@interface _UIWebFormDelegateEditedFormsMap : NSObject {

    @"NSMutableDictionary" _map;
    @"NSMutableArray" _lifetimeHelper;
}

 - (void) dealloc;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) allValues;
 - (id) _keyForWebFrame:(id)a;
 - (id) init;


@end
