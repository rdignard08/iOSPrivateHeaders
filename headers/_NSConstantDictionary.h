
@protocol NSFastEnumeration;
@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration> {

}
 + (void) load;
 + (id) alloc;

 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (void) getObjects:(^@)aandKeys:(^@)b;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) descriptionWithLocale:(id)aindent:(Q)b;
 - (id) objectEnumerator;
 - (id) keyEnumerator;
 - (void) enumerateKeysAndObjectsWithOptions:(Q)ausingBlock:(@?)b;
 - (id) allKeys;
 - (id) allValues;
 - (void) enumerateKeysAndObjectsUsingBlock:(@?)a;
 - (Q) capacity;


@end
