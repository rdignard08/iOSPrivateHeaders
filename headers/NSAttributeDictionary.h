
@interface NSAttributeDictionary : NSDictionary {

    Q numElements;
    [1{_NSAttributeDictionaryElement="hash"Q"key"@"value"@}] elements;
}
 + (id) newWithDictionary:(id)a;
 + (id) emptyAttributeDictionary;
 + (void) initialize;

 - (id) newWithKey:(id)aobject:(id)b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (void) getObjects:(^@)aandKeys:(^@)b;
 - (id) keyEnumerator;
 - (BOOL) isEqualToDictionary:(id)a;


@end
