
@protocol NSSecureCoding;
@interface TIKeyboardLayout : NSObject <NSSecureCoding> {

    unsigned long long _count;
    ^{_ShortRect=ssss} _frames;
    unsigned long long _framesCapacity;
    char* _strings;
    unsigned long long _stringsSize;
    unsigned long long _stringsCapacity;
}
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) initWithCapacity:(unsigned long long)a ;
 - (void) addKeyWithString:(id)a frame:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) ensureFrameCapacity:(unsigned long long)a ;
 - (void) ensureStringCapacity:(unsigned long long)a ;
 - (void) enumerateKeysUsingBlock:(@?)a ;


@end
