
@protocol NSCopying, NSSecureCoding;
@interface NSUUID : NSObject <NSCopying, NSSecureCoding> {

}
@property (atomic, copy, readonly) NSString* UUIDString;
 + (BOOL) supportsSecureCoding;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) UUID;

 - (id) initWithUUIDString:(id)a;
 - (id) initWithUUIDBytes:([16C])a;
 - (^{__CFString=}) _cfUUIDString;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) _cfTypeID;
 - (void) getUUIDBytes:([16C])a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) UUIDString;


@end
