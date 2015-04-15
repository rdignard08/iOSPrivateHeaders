
@interface NSSimpleAttributeDictionary : NSDictionary {

    unsigned int numElements;
    unsigned int refCount;
    [1{_NSSimpleAttributeDictionaryElement="hash"Q"key"@"value"@}] elements;
}
 + (id) newWithDictionary:(id)a;
 + (id) emptyAttributeDictionary;

 - (id) newWithKey:(id)aobject:(id)b;
 - (unsigned long long) slotForKey:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a;
 - (id) keyEnumerator;


@end
