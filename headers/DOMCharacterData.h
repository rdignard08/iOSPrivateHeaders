
@interface DOMCharacterData : DOMNode {

}

 - (id) data;
 - (void) setData:(id)a ;
 - (void) remove;
 - (unsigned int) length;
 - (void) appendData:(id)a ;
 - (id) substringData:(unsigned int)a length:(unsigned int)b ;
 - (id) substringData:(unsigned int)a ;
 - (void) insertData:(unsigned int)a data:(id)b ;
 - (void) insertData:(unsigned int)a ;
 - (void) deleteData:(unsigned int)a length:(unsigned int)b ;
 - (void) deleteData:(unsigned int)a ;
 - (void) replaceData:(unsigned int)a length:(unsigned int)b data:(id)c ;
 - (void) replaceData:(unsigned int)a ;


@end
