
@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {

    NSKeyValueMutatingSetMethodSet* _mutatingMethods;
}

 - (id) _proxyInitWithContainer:(id)agetter:(id)b;
 - (void) _proxyNonGCFinalize;
 - (void) unionSet:(id)a;
 - (void) intersectSet:(id)a;
 - (void) minusSet:(id)a;
 - (void) setSet:(id)a;
 - (void) addObject:(id)a;
 - (void) removeAllObjects;
 - (void) removeObject:(id)a;
 - (void) addObjectsFromArray:(id)a;


@end
