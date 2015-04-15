
@protocol NSCopying, NSCoding;
@interface NSNotification : NSObject <NSCopying, NSCoding> {

}
@property (atomic, copy, readonly) NSString* name;
@property (atomic, retain, readonly) NSNumber* object;
@property (atomic, copy, readonly) NSDictionary* userInfo;
 + (id) notificationWithName:(id)aobject:(id)buserInfo:(id)c;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) notificationWithName:(id)aobject:(id)b;

 - (Class) classForCoder;
 - (id) initWithName:(id)a object:(id)b userInfo:(id)c ;
 - (id) replacementObjectForPortCoder:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (id) userInfo;
 - (id) name;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) object;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
