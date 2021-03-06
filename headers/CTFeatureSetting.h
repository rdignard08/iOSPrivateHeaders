
@interface CTFeatureSetting : NSDictionary {

    NSDictionary* _dictionary;
}

 - (id) selector;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (id) keyEnumerator;
 - (BOOL) isEqualToDictionary:(id)a ;
 - (id) type;
 - (id) value;
 - (id) initWithDictionary:(id)a ;
 - (id) initWithType:(id)a selector:(id)b tag:(id)c value:(id)d ;
 - (id) initWithNormalizedDictionary:(id)a ;
 - (BOOL) isEqualToFeatureSetting:(id)a ;
 - (id) tag;


@end
