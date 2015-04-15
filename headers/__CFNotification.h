
@protocol NSCopying;
@interface __CFNotification : NSNotification <NSCopying> {

    id _name;
    id _object;
    id _userInfo;
    BOOL _fouSemantics;
    BOOL _dyingObject;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (id) userInfo;
 - (id) name;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) object;
 - (id) initWithName:(^{__CFString=})a object:(r^v)b userInfo:(^{__CFDictionary=})c foundation:(BOOL)d ;


@end
