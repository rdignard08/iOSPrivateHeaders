
@protocol NSCopying, NSCoding;
@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding> {

}
 + (void) initialize;
 + (id) immutablePlaceholder;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (id) initWithFileSec:(^{_filesec=})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
