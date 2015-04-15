
@protocol NSFastEnumeration;
@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration> {

}
 + (void) load;
 + (id) alloc;

 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (void) getObjects:(^@)a andKeys:(^@)b ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) descriptionWithLocale:(id)a indent:(unsigned long long)b ;
 - (id) objectEnumerator;
 - (id) keyEnumerator;
 - (void) enumerateKeysAndObjectsWithOptions:(unsigned long long)a usingBlock:(@?)b ;
 - (id) allKeys;
 - (id) allValues;
 - (void) enumerateKeysAndObjectsUsingBlock:(@?)a ;
 - (unsigned long long) capacity;


@end
