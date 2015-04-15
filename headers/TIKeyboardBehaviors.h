
@protocol NSCopying, NSSecureCoding;
@interface TIKeyboardBehaviors : NSObject <NSCopying, NSSecureCoding> {

}
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) keyBehaviorsForState:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
