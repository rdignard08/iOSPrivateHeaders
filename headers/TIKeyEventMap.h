
@protocol NSSecureCoding;
@interface TIKeyEventMap : NSObject <NSSecureCoding> {

}
 + (BOOL) supportsSecureCoding;

 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) remapKeyWithString:(id)astringWithoutModifiers:(id)bmodifierFlags:(Q)ckeyboardState:(id)d;


@end
