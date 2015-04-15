
@interface NSPlaceholderNumber : NSPlaceholderValue {

}
 + (BOOL) supportsSecureCoding;

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
 - (id) init;
 - (id) initWithCoder:(id)a ;


@end
