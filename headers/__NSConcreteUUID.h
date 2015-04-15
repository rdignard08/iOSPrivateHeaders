
@interface __NSConcreteUUID : NSUUID {

    [16C] _uuidBytes;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (id) initWithUUIDString:(id)a;
 - (Class) classForCoder;
 - (id) initWithUUIDBytes:([16C])a;
 - ({?=CCCCCCCCCCCCCCCC}) _cfUUIDBytes;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (BOOL) isEqual:(id)a;
 - (void) getUUIDBytes:([16C])a;
 - (id) init;
 - (id) UUIDString;


@end
