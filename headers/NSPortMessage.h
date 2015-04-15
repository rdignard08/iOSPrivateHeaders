
@interface NSPortMessage : NSObject {

    @"NSPort" localPort;
    @"NSPort" remotePort;
    @"NSMutableArray" components;
    I msgid;
    ^v reserved2;
    ^v reserved;
}
@property (atomic, copy, readonly) NSArray* components;
@property (atomic, retain, readonly) NSPort* receivePort;
@property (atomic, retain, readonly) NSPort* sendPort;
@property (atomic, assign, readwrite) NSNumber* msgid;

 - (id) receivePort;
 - (id) sendPort;
 - (id) components;
 - (id) initWithSendPort:(id)areceivePort:(id)bcomponents:(id)c;
 - (void) setMsgid:(I)a;
 - (id) initWithReceivePort:(id)asendPort:(id)bcomponents:(id)c;
 - (I) msgid;
 - (BOOL) sendBeforeDate:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;


@end
