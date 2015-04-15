
@protocol NSCopying, BSXPCCoding;
@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding> {

    {?="val"[8I]} _auditToken;
}
@property (nonatomic, assign, readonly) NSNumber* realToken;
 + (id) tokenFromMachMessage:(^{?=IIIIIi})a;
 + (id) tokenFromAuditToken:({?=[8I]})a;
 + (id) tokenFromXPCMessage:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) bundleID;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) initWithAuditToken:({?=[8I]})a;
 - (id) initWithXPCMessage:(id)a;
 - (id) initWithMachMessage:(^{?=IIIIIi})a;
 - (id) _valueFromData:(id)aofType:(r*)b;
 - (id) _dataWithValue:(id)a;
 - ({?=[8I]}) realToken;
 - (BOOL) hasEntitlement:(id)a;
 - (int) pid;


@end
