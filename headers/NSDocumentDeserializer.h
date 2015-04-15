
@interface NSDocumentDeserializer : NSAKDeserializer {

}

 - (id) deserializeNewData;
 - (id) deserializeNewPList;
 - (void) fixupDirInfo:(id)a;


@end
