
@interface UIKeyboardSliceStore : NSObject {

    NSMutableDictionary* _store;
}
 + (id) sharedStore;
 + (id) sliceSetForID:(id)a;
 + (id) sliceSetIDForKeyplaneName:(id)atype:(long long)borientation:(long long)c;
 + (void) archiveSet:(id)a;

 - (void) dealloc;
 - (id) sliceSetForID:(id)a;
 - (void) addSet:(id)a;
 - (id) init;


@end
