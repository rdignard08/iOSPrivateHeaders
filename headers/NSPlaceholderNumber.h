
@interface NSPlaceholderNumber : NSPlaceholderValue {

}
 + (BOOL) supportsSecureCoding;

 - (id) initWithUnsignedShort:(S)a;
 - (id) initWithShort:(s)a;
 - (id) initWithUnsignedLongLong:(Q)a;
 - (id) initWithLongLong:(q)a;
 - (id) initWithUnsignedLong:(Q)a;
 - (id) initWithLong:(q)a;
 - (id) initWithUnsignedInt:(I)a;
 - (id) initWithInt:(i)a;
 - (id) initWithFloat:(f)a;
 - (id) initWithDouble:(d)a;
 - (id) initWithUnsignedChar:(C)a;
 - (id) initWithChar:(c)a;
 - (id) initWithBool:(BOOL)a;
 - (id) initWithInteger:(q)a;
 - (id) initWithUnsignedInteger:(Q)a;
 - (id) init;
 - (id) initWithCoder:(id)a;


@end
