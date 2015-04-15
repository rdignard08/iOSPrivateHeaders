
@interface NSAKSerializer : NSObject {

    id ss;
}

 - (unsigned long long) serializeData:(id)a;
 - (unsigned long long) serializeList:(id)a;
 - (unsigned long long) serializePropertyList:(id)a;
 - (unsigned long long) serializeString:(id)a;
 - (unsigned long long) serializeListItemIn:(id)aat:(unsigned long long)b;
 - (unsigned long long) serializeObject:(id)a;
 - (unsigned long long) serializePListKeyIn:(id)akey:(id)bvalue:(id)c;
 - (unsigned long long) serializePListValueIn:(id)akey:(id)bvalue:(id)c;
 - (id) initForSerializerStream:(id)a;
 - (id) serializerStream;
 - (void) dealloc;


@end
