
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
 + (id) decimalNumberHandlerWithRoundingMode:(Q)ascale:(s)braiseOnExactness:(BOOL)craiseOnOverflow:(BOOL)draiseOnUnderflow:(BOOL)eraiseOnDivideByZero:(BOOL)f;

 - (s) scale;
 - (Q) roundingMode;
 - (id) initWithRoundingMode:(Q)ascale:(s)braiseOnExactness:(BOOL)craiseOnOverflow:(BOOL)draiseOnUnderflow:(BOOL)eraiseOnDivideByZero:(BOOL)f;
 - (id) exceptionDuringOperation:(SEL)aerror:(Q)bleftOperand:(id)crightOperand:(id)d;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
