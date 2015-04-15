
@protocol NSSecureCoding;
@interface TIKeyboardLayout : NSObject <NSSecureCoding> {

    Q _count;
    ^{_ShortRect=ssss} _frames;
    Q _framesCapacity;
    * _strings;
    Q _stringsSize;
    Q _stringsCapacity;
}
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithCapacity:(Q)a;
 - (void) addKeyWithString:(id)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) ensureFrameCapacity:(Q)a;
 - (void) ensureStringCapacity:(Q)a;
 - (void) enumerateKeysUsingBlock:(@?)a;


@end
