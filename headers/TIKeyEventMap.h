
@protocol NSSecureCoding;
@interface TIKeyEventMap : NSObject <NSSecureCoding> {

}
 + (BOOL) supportsSecureCoding;

 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) remapKeyWithString:(id)a stringWithoutModifiers:(id)b modifierFlags:(unsigned long long)c keyboardState:(id)d ;


@end
