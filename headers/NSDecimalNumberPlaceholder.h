
@interface NSDecimalNumberPlaceholder : NSDecimalNumber {

}
 + (BOOL) supportsSecureCoding;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithUnsignedShort:(unsigned short)a ;
 - (id) initWithShort:(short)a ;
 - (id) initWithUnsignedLongLong:(unsigned long long)a ;
 - (id) initWithLongLong:(long long)a ;
 - (id) initWithUnsignedLong:(unsigned long long)a ;
 - (id) initWithLong:(long long)a ;
 - (id) initWithUnsignedInt:(unsigned int)a ;
 - (id) initWithInt:(int)a ;
 - (id) initWithFloat:(float)a ;
 - (id) initWithDouble:(double)a ;
 - (id) initWithUnsignedChar:(unsigned char)a ;
 - (id) initWithChar:(char)a ;
 - (id) initWithBool:(BOOL)a ;
 - (id) initWithInteger:(long long)a ;
 - (id) initWithUnsignedInteger:(unsigned long long)a ;
 - (id) initWithString:(id)a locale:(id)b ;
 - (id) initWithDecimal:({?=b8b4b1b1b18[8S]})a ;
 - (id) initWithMantissa:(unsigned long long)a exponent:(short)b isNegative:(BOOL)c ;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (id) initWithString:(id)a ;
 - (id) init;
 - (id) initWithCoder:(id)a ;


@end
