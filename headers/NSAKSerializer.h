
@interface NSAKSerializer : NSObject {

    id ss;
}

 - (unsigned long long) serializeData:(id)a ;
 - (unsigned long long) serializeList:(id)a ;
 - (unsigned long long) serializePropertyList:(id)a ;
 - (unsigned long long) serializeString:(id)a ;
 - (unsigned long long) serializeListItemIn:(id)a at:(unsigned long long)b ;
 - (unsigned long long) serializeObject:(id)a ;
 - (unsigned long long) serializePListKeyIn:(id)a key:(id)b value:(id)c ;
 - (unsigned long long) serializePListValueIn:(id)a key:(id)b value:(id)c ;
 - (id) initForSerializerStream:(id)a ;
 - (id) serializerStream;
 - (void) dealloc;


@end
