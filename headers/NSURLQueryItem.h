
@protocol NSSecureCoding, NSCopying;
@interface NSURLQueryItem : NSObject <NSSecureCoding, NSCopying> {

    NSString* _name;
    NSString* _value;
}
@property (atomic, assign, readonly) NSString* name;
@property (atomic, assign, readonly) NSString* value;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (BOOL) supportsSecureCoding;
 + (id) queryItemWithName:(id)avalue:(id)b;

 - (id) initWithName:(id)avalue:(id)b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) name;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) value;


@end
