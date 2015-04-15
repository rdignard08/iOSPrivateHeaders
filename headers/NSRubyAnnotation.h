
@protocol NSCopying, NSSecureCoding;
@interface NSRubyAnnotation : NSObject <NSCopying, NSSecureCoding> {

}
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
