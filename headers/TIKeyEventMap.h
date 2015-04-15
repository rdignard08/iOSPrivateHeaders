
@protocol NSSecureCoding;
@interface TIKeyEventMap : NSObject <NSSecureCoding> {

}
 + (BOOL) supportsSecureCoding;

 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) remapKeyWithString:(id)astringWithoutModifiers:(id)bmodifierFlags:(unsigned long long)ckeyboardState:(id)d;


@end
