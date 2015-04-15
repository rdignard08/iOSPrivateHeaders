
@protocol NSSecureCoding, NSCopying;
@interface _NSProgressFraction : NSObject <NSSecureCoding, NSCopying> {

    q _completed;
    q _total;
    BOOL _overflowed;
}
@property (atomic, assign, readwrite) NSNumber* completed;
@property (atomic, assign, readwrite) NSNumber* total;
@property (atomic, assign, readonly) NSNumber* overflowed;
 + (BOOL) supportsSecureCoding;
 + (id) fractionWithCompleted:(q)atotal:(q)b;
 + (id) fractionWithDouble:(d)a;

 - (BOOL) isFinished;
 - (void) simplify;
 - (q) total;
 - (q) completed;
 - (d) fractionCompleted;
 - (id) fractionBySimplifying;
 - (void) _simplifyFromDouble:(d)a;
 - (void) addFraction:(id)a;
 - (void) subtractFraction:(id)a;
 - (void) multiplyByFraction:(id)a;
 - (BOOL) isIndeterminate;
 - (id) initWithCompleted:(q)atotal:(q)b;
 - (BOOL) overflowed;
 - (id) fractionByAddingFraction:(id)a;
 - (id) fractionBySubtractingFraction:(id)a;
 - (void) divideByValue:(q)a;
 - (id) fractionByMultiplyingFraction:(id)a;
 - (void) setCompleted:(q)a;
 - (void) setTotal:(q)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
