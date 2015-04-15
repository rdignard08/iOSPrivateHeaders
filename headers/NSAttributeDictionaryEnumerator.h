
@interface NSAttributeDictionaryEnumerator : NSEnumerator {

    @"NSAttributeDictionary" dictionary;
    Q nextElement;
}

 - (id) initWithAttributeDictionary:(id)a;
 - (void) dealloc;
 - (id) nextObject;


@end
