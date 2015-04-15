
@interface DOMCharacterData : DOMNode {

}

 - (id) data;
 - (void) setData:(id)a;
 - (void) remove;
 - (unsigned int) length;
 - (void) appendData:(id)a;
 - (id) substringData:(unsigned int)alength:(unsigned int)b;
 - (id) substringData:(unsigned int)a;
 - (void) insertData:(unsigned int)adata:(id)b;
 - (void) insertData:(unsigned int)a;
 - (void) deleteData:(unsigned int)alength:(unsigned int)b;
 - (void) deleteData:(unsigned int)a;
 - (void) replaceData:(unsigned int)alength:(unsigned int)bdata:(id)c;
 - (void) replaceData:(unsigned int)a;


@end
