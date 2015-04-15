
@interface NSSimpleAttributeDictionary : NSDictionary {

    I numElements;
    I refCount;
    [1{_NSSimpleAttributeDictionaryElement="hash"Q"key"@"value"@}] elements;
}
 + (id) newWithDictionary:(id)a;
 + (id) emptyAttributeDictionary;

 - (id) newWithKey:(id)aobject:(id)b;
 - (Q) slotForKey:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (id) keyEnumerator;


@end
