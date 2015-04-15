
@protocol NSSecureCoding, NSCopying;
@interface _NSProgressFraction : NSObject <NSSecureCoding, NSCopying> {

    long long _completed;
    long long _total;
    BOOL _overflowed;
}
@property (atomic, assign, readwrite) NSNumber* completed;
@property (atomic, assign, readwrite) NSNumber* total;
@property (atomic, assign, readonly) NSNumber* overflowed;
 + (BOOL) supportsSecureCoding;
 + (id) fractionWithCompleted:(long long)atotal:(long long)b;
 + (id) fractionWithDouble:(double)a;

 - (BOOL) isFinished;
 - (void) simplify;
 - (long long) total;
 - (long long) completed;
 - (double) fractionCompleted;
 - (id) fractionBySimplifying;
 - (void) _simplifyFromDouble:(double)a ;
 - (void) addFraction:(id)a ;
 - (void) subtractFraction:(id)a ;
 - (void) multiplyByFraction:(id)a ;
 - (BOOL) isIndeterminate;
 - (id) initWithCompleted:(long long)a total:(long long)b ;
 - (BOOL) overflowed;
 - (id) fractionByAddingFraction:(id)a ;
 - (id) fractionBySubtractingFraction:(id)a ;
 - (void) divideByValue:(long long)a ;
 - (id) fractionByMultiplyingFraction:(id)a ;
 - (void) setCompleted:(long long)a ;
 - (void) setTotal:(long long)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
