
@interface NSAttributeDictionary : NSDictionary {

    unsigned long long numElements;
    [1{_NSAttributeDictionaryElement="hash"Q"key"@"value"@}] elements;
}
 + (id) newWithDictionary:(id)a;
 + (id) emptyAttributeDictionary;
 + (void) initialize;

 - (id) newWithKey:(id)a object:(id)b ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (void) getObjects:(^@)a andKeys:(^@)b ;
 - (id) keyEnumerator;
 - (BOOL) isEqualToDictionary:(id)a ;


@end
