
@interface DOMCharacterData : DOMNode {

}

 - (id) data;
 - (void) setData:(id)a;
 - (void) remove;
 - (I) length;
 - (void) appendData:(id)a;
 - (id) substringData:(I)alength:(I)b;
 - (id) substringData:(I)a;
 - (void) insertData:(I)adata:(id)b;
 - (void) insertData:(I)a;
 - (void) deleteData:(I)alength:(I)b;
 - (void) deleteData:(I)a;
 - (void) replaceData:(I)alength:(I)bdata:(id)c;
 - (void) replaceData:(I)a;


@end
