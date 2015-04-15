
@interface NSISVariable : NSObject {

    @"<NSISVariableDelegate>" _delegate;
    i _refCount;
    I _ident;
}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, assign, readonly) NSNumber* shouldBeMinimized;
@property (atomic, assign, readonly) NSNumber* valueRestriction;
 + (id) variableWithDelegate:(id)avalueRestriction:(i)bshouldBeMinimized:(BOOL)c;
 + (id) variableWithName:(id)avalueRestriction:(i)bshouldBeMinimized:(BOOL)c;
 + (id) variableMarkingConstraint:(id)avalueRestriction:(i)bshouldBeMinimized:(BOOL)c;

 - (BOOL) shouldBeIntegral;
 - (i) valueRestriction;
 - (id) markedConstraint;
 - (BOOL) markedConstraintIsEligibleForIntegralizationAdjustment;
 - (d) allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
 - (BOOL) valueIsUserVisible;
 - (BOOL) shouldBeMinimized;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (Q) hash;
 - (void) setDelegate:(id)a;
 - (id) init;
 - (id) delegate;


@end
