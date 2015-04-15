
@protocol NSCopying, NSSecureCoding, CAAction;
@interface NSNull : NSObject <NSCopying, NSSecureCoding, CAAction> {

}
 + (BOOL) supportsSecureCoding;
 + (id) null;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) ml_stringValueForSQL;
 - (void) ml_bindToSQLiteStatement:(^{sqlite3_stmt=})aatPosition:(i)b;
 - (id) __nil_objc_send;
 - (void) forwardInvocation:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) CAMLType;
 - (void) runActionForKey:(id)aobject:(id)barguments:(id)c;
 - (id) replacementObjectForPortCoder:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) valueForKey:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (Q) _cfTypeID;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
