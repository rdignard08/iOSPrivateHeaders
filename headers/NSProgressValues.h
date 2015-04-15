
@protocol NSSecureCoding;
@interface NSProgressValues : NSObject <NSSecureCoding> {

    @"NSMutableDictionary" _userInfo;
    @"_NSProgressFraction" _selfFraction;
    @"_NSProgressFraction" _childFraction;
    @"NSString" _localizedDescription;
    @"NSString" _localizedAdditionalDescription;
    BOOL _isCancellable;
    BOOL _isPausable;
    BOOL _isCancelled;
    BOOL _isPaused;
    @"NSString" _kind;
    BOOL _isPrioritizable;
}
 + (BOOL) supportsSecureCoding;
 + (id) decodableClasses;
 + (id) _derivedKeys;

 - (BOOL) isFinished;
 - (void) setCompletedUnitCount:(q)a;
 - (void) setTotalUnitCount:(q)a;
 - (d) fractionCompleted;
 - (BOOL) isIndeterminate;
 - (q) totalUnitCount;
 - (id) _indentedDescription:(Q)a;
 - (id) overallFraction;
 - (void) setFractionCompleted:(d)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) setIndeterminate:(BOOL)a;
 - (q) completedUnitCount;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setFinished:(BOOL)a;


@end
