
@protocol NSCopying, NSCoding;
@interface NSFileSecurity : NSObject <NSCopying, NSCoding> {

}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (Q) _cfTypeID;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
