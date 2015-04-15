
@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator {

    NSSimpleAttributeDictionary* dictionary;
    unsigned long long nextElement;
}

 - (id) initWithAttributeDictionary:(id)a ;
 - (void) dealloc;
 - (void) finalize;
 - (id) nextObject;


@end
