
@protocol NSCopying, BSXPCCoding;
@interface BSMachPort : NSObject <NSCopying, BSXPCCoding> {

    unsigned int _port;
    unsigned long long _sendRights;
    unsigned long long _recvRights;
    BOOL _invalidated;
    unsigned int _portNumber;
    NSString _debugDescription;
}
@property (nonatomic, assign, readonly) NSNumber* port;
 + (id) createSendRight;
 + (id) createReceiveRight;
 + (id) taskNamePortForPID:(int)a;
 + (id) bootstrapLookUpPortWithName:(id)a;
 + (id) wrapSendRight:(unsigned int)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) invalidate;
 - (unsigned int) port;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) initWithRight:(int)a;
 - (id) initWithSendRight:(unsigned int)aassumeOwnership:(BOOL)b;
 - (void) _addRight:(int)a;
 - (BOOL) isUsable;
 - (id) initWithPort:(unsigned int)awithRights:(@?)b;
 - (id) initWithSendRight:(unsigned int)a;


@end
