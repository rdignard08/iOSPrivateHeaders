
@protocol NSDecimalNumberBehaviors, NSCoding;
@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding> {

    b16 _scale;
    b3 _roundingMode;
    b1 _raiseOnExactness;
    b1 _raiseOnOverflow;
    b1 _raiseOnUnderflow;
    b1 _raiseOnDivideByZero;
    b9 _unused;
    ^v _reserved2;
    ^v _reserved;
}
 + (id) defaultDecimalNumberHandler;
 + (id) decimalNumberHandlerWithRoundingMode:(unsigned long long)ascale:(short)braiseOnExactness:(BOOL)craiseOnOverflow:(BOOL)draiseOnUnderflow:(BOOL)eraiseOnDivideByZero:(BOOL)f;

 - (short) scale;
 - (unsigned long long) roundingMode;
 - (id) initWithRoundingMode:(unsigned long long)a scale:(short)b raiseOnExactness:(BOOL)c raiseOnOverflow:(BOOL)d raiseOnUnderflow:(BOOL)e raiseOnDivideByZero:(BOOL)f ;
 - (id) exceptionDuringOperation:(SEL)a error:(unsigned long long)b leftOperand:(id)c rightOperand:(id)d ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
