
@protocol NSCopying, NSSecureCoding, CAAction;
@interface NSNull : NSObject <NSCopying, NSSecureCoding, CAAction> {

}
 + (BOOL) supportsSecureCoding;
 + (id) null;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) ml_stringValueForSQL;
 - (void) ml_bindToSQLiteStatement:(^{sqlite3_stmt=})a atPosition:(int)b ;
 - (id) __nil_objc_send;
 - (void) forwardInvocation:(id)a ;
 - (id) methodSignatureForSelector:(SEL)a ;
 - (id) CAMLType;
 - (void) runActionForKey:(id)a object:(id)b arguments:(id)c ;
 - (id) replacementObjectForPortCoder:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) valueForKey:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (unsigned long long) _cfTypeID;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
