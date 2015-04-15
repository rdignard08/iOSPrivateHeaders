
@interface NSAKDeserializer : NSObject {

    id ds;
}

 - (id) deserializeNewData;
 - (id) deserializeNewList;
 - (id) deserializeNewPList;
 - (id) deserializeNewString;
 - (id) deserializeData:(id)a ;
 - (id) deserializeString:(id)a ;
 - (id) deserializeList:(id)a ;
 - (id) deserializeListItemIn:(id)a at:(unsigned long long)b length:(unsigned long long)c ;
 - (id) deserializeNewObject;
 - (id) deserializePList:(id)a ;
 - (id) deserializePListKeyIn:(id)a ;
 - (id) deserializePListValueIn:(id)a key:(id)b length:(unsigned long long)c ;
 - (id) deserializeNewKeyString;
 - (id) initForDeserializerStream:(id)a ;
 - (id) deserializerStream;
 - (void) dealloc;


@end
