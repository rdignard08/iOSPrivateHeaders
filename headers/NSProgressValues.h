
@protocol NSSecureCoding;
@interface NSProgressValues : NSObject <NSSecureCoding> {

    NSMutableDictionary* _userInfo;
    _NSProgressFraction* _selfFraction;
    _NSProgressFraction* _childFraction;
    NSString* _localizedDescription;
    NSString* _localizedAdditionalDescription;
    BOOL _isCancellable;
    BOOL _isPausable;
    BOOL _isCancelled;
    BOOL _isPaused;
    NSString* _kind;
    BOOL _isPrioritizable;
}
 + (BOOL) supportsSecureCoding;
 + (id) decodableClasses;
 + (id) _derivedKeys;

 - (BOOL) isFinished;
 - (void) setCompletedUnitCount:(long long)a;
 - (void) setTotalUnitCount:(long long)a;
 - (double) fractionCompleted;
 - (BOOL) isIndeterminate;
 - (long long) totalUnitCount;
 - (id) _indentedDescription:(unsigned long long)a;
 - (id) overallFraction;
 - (void) setFractionCompleted:(double)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) setIndeterminate:(BOOL)a;
 - (long long) completedUnitCount;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setFinished:(BOOL)a;


@end
