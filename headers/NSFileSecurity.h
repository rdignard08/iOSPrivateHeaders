
@protocol NSCopying, NSCoding;
@interface NSFileSecurity : NSObject <NSCopying, NSCoding> {

}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (unsigned long long) _cfTypeID;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
