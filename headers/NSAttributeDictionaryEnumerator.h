
@interface NSAttributeDictionaryEnumerator : NSEnumerator {

    NSAttributeDictionary* dictionary;
    unsigned long long nextElement;
}

 - (id) initWithAttributeDictionary:(id)a;
 - (void) dealloc;
 - (id) nextObject;


@end
