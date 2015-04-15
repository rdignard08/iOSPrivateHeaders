
@interface _UIGestureRecognizerFailureMap : NSObject {

    NSMutableArray* _gestureRecognizers;
    char* _failureMap;
    int _unmetFailureRequirementCount;
    int _unmetFailureDependentCount;
}
@property (atomic, assign, readonly) NSNumber* hasUnmetFailureRequirementsOrDependents;
 + (void) buildFailureMapForGestureRecognizer:(id)a;
 + (void) buildFailureMapForGestureRecognizers:(id)a;

 - (id) description;
 - (void) dealloc;
 - (void) gestureRecognizerDeallocated:(id)a;
 - (void) reloadFailureMap;
 - (void) gestureRecognizerFinished:(id)awithEvent:(id)b;
 - (BOOL) isGestureRecognizerWaitingForGestureRecognizersToFail:(id)a;
 - (BOOL) hasUnmetFailureRequirementsOrDependents;
 - (void) gestureRecognizerBecameDirty:(id)a;
 - (void) rebuildFailureMap;
 - (void) _rebuildFailureMapDefferingRelease;
 - (void) _gestureRecognizerFinished:(id)awithEvent:(id)b;
 - (void) _queueRecognizersForResetIfFinished;
 - (id) initWithRelatedGestures:(id)a;


@end
