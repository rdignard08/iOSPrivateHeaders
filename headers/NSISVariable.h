
@interface NSISVariable : NSObject {

    <NSISVariableDelegate> _delegate;
    int _refCount;
    unsigned int _ident;
}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, assign, readonly) NSNumber* shouldBeMinimized;
@property (atomic, assign, readonly) NSNumber* valueRestriction;
 + (id) variableWithDelegate:(id)avalueRestriction:(int)bshouldBeMinimized:(BOOL)c;
 + (id) variableWithName:(id)avalueRestriction:(int)bshouldBeMinimized:(BOOL)c;
 + (id) variableMarkingConstraint:(id)avalueRestriction:(int)bshouldBeMinimized:(BOOL)c;

 - (BOOL) shouldBeIntegral;
 - (int) valueRestriction;
 - (id) markedConstraint;
 - (BOOL) markedConstraintIsEligibleForIntegralizationAdjustment;
 - (double) allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
 - (BOOL) valueIsUserVisible;
 - (BOOL) shouldBeMinimized;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) hash;
 - (void) setDelegate:(id)a;
 - (id) init;
 - (id) delegate;


@end
