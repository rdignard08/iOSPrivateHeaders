
@interface NSPortCoder : NSCoder {

}
 + (id) portCoderWithReceivePort:(id)asendPort:(id)bcomponents:(id)c;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithReceivePort:(id)a sendPort:(id)b components:(id)c ;
 - (id) connection;
 - (id) decodePortObject;
 - (void) encodePortObject:(id)a ;
 - (id) _connection;
 - (BOOL) isByref;
 - (BOOL) isBycopy;
 - (void) dispatch;


@end
