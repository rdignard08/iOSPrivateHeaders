
@protocol NSCopying, BSXPCCoding;
@interface BSMachPort : NSObject <NSCopying, BSXPCCoding> {

    I _port;
    Q _sendRights;
    Q _recvRights;
    BOOL _invalidated;
    I _portNumber;
    @"NSString" _debugDescription;
}
@property (nonatomic, assign, readonly) NSNumber* port;
 + (id) createSendRight;
 + (id) createReceiveRight;
 + (id) taskNamePortForPID:(i)a;
 + (id) bootstrapLookUpPortWithName:(id)a;
 + (id) wrapSendRight:(I)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) invalidate;
 - (I) port;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) initWithRight:(i)a;
 - (id) initWithSendRight:(I)aassumeOwnership:(BOOL)b;
 - (void) _addRight:(i)a;
 - (BOOL) isUsable;
 - (id) initWithPort:(I)awithRights:(@?)b;
 - (id) initWithSendRight:(I)a;


@end
