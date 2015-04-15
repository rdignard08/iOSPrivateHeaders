
@interface NSAKSerializer : NSObject {

    id ss;
}

 - (Q) serializeData:(id)a;
 - (Q) serializeList:(id)a;
 - (Q) serializePropertyList:(id)a;
 - (Q) serializeString:(id)a;
 - (Q) serializeListItemIn:(id)aat:(Q)b;
 - (Q) serializeObject:(id)a;
 - (Q) serializePListKeyIn:(id)akey:(id)bvalue:(id)c;
 - (Q) serializePListValueIn:(id)akey:(id)bvalue:(id)c;
 - (id) initForSerializerStream:(id)a;
 - (id) serializerStream;
 - (void) dealloc;


@end
