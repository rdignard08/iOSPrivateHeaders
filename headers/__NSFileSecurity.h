
@protocol NSCopying, NSCoding;
@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSCoding> {

    ^{_filesec=} _filesec;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(^{_filesec=})a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (^{_filesec=}) _filesec;
 - (BOOL) getOwner:(^I)a ;
 - (BOOL) setOwner:(unsigned int)a ;
 - (BOOL) getGroup:(^I)a ;
 - (BOOL) setGroup:(unsigned int)a ;
 - (BOOL) getMode:(^S)a ;
 - (BOOL) setMode:(unsigned short)a ;
 - (BOOL) getOwnerUUID:(^[16C])a ;
 - (BOOL) setOwnerUUID:([16C])a ;
 - (BOOL) getGroupUUID:(^[16C])a ;
 - (BOOL) setGroupUUID:([16C])a ;
 - (BOOL) copyAccessControlList:(^^{_acl})a ;
 - (BOOL) setAccessControlList:(^{_acl=})a ;
 - (BOOL) clearProperties:(unsigned long long)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
