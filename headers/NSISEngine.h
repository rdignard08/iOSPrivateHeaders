
@protocol NSISVariableDelegate;
@interface NSISEngine : NSObject <NSISVariableDelegate> {

    NSMapTable* _rows;
    NSMapTable* _rowsCrossIndex;
    NSISVariable* _headForObjectiveRow;
    NSMutableArray* _variablesWithValueRestrictionViolations;
    NSMutableArray* _pendingRemovals;
    <NSISEngineDelegate>* _delegate;
    NSMapTable* _brokenConstraintPositiveErrors;
    NSMapTable* _brokenConstraintNegativeErrors;
    NSMutableSet* _variablesWithIntegralizationViolations;
    ^{__CFDictionary=} _integralizationAdjustmentsForConstraintMarkers;
    @? _unsatisfiabilityHandler;
    unsigned long long _pivotCount;
    {CGSize="width"d"height"d} _engineScalingCoefficients;
    NSMutableDictionary* _recordedOperations;
    int _automaticOptimizationDisabledCount;
    int _engineDelegateCallsDisabledCount;
    int _variableDelegateCallsDisabledCount;
    unsigned int _totalChangeCount;
    unsigned int _changeCountAtLastOptimization;
    BOOL _lastOptimizationInvolvedIntegralization;
    BOOL _shouldIntegralize;
    BOOL _revertsAfterUnsatisfiabilityHandler;
    BOOL _accumulatingRemovals;
}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, assign, readwrite) NSNumber* shouldIntegralize;
@property (atomic, assign, readwrite) NSNumber* revertsAfterUnsatisfiabilityHandler;
@property (nonatomic, assign, readwrite) NSNumber* engineScalingCoefficients;
@property (atomic, retain, readwrite) NSMapTable* rows;
@property (atomic, retain, readwrite) NSMapTable* rowsCrossIndex;
@property (atomic, retain, readwrite) NSISVariable* headForObjectiveRow;
@property (atomic, retain, readwrite) NSMutableArray* variablesWithValueRestrictionViolations;
@property (atomic, retain, readwrite) NSMutableSet* variablesWithIntegralizationViolations;
@property (atomic, assign, readwrite) NSNumber* integralizationAdjustmentsForConstraintMarkers;

 - (void) setShouldIntegralize:(BOOL)a;
 - (unsigned long long) optimize;
 - (BOOL) tryToAddConstraintWithMarker:(id)aexpression:(id)bintegralizationAdjustment:(double)cmutuallyExclusiveConstraints:(^@)d;
 - (void) addVariableToBeOptimized:(id)apriority:(double)b;
 - (void) removeVariableToBeOptimized:(id)apriority:(double)b;
 - (void) changeVariableToBeOptimized:(id)afromPriority:(double)btoPriority:(double)c;
 - (void) removeConstraintWithMarker:(id)a;
 - (void) constraintDidChangeSuchThatMarker:(id)ashouldBeReplacedByMarkerPlusDelta:(double)b;
 - (BOOL) tryToChangeConstraintSuchThatMarker:(id)aisReplacedByMarkerPlusDelta:(double)bundoHandler:(@?)c;
 - (void) nsis_valueOfVariable:(id)adidChangeInEngine:(id)b;
 - (id) nsis_descriptionOfVariable:(id)a;
 - (BOOL) nsis_shouldIntegralizeVariable:(id)a;
 - (BOOL) nsis_valueOfVariableIsUserObservable:(id)a;
 - (void) verifyInternalIntegrity;
 - (id) _brokenConstraintPositiveErrors;
 - (id) _brokenConstraintPositiveErrorsIfAvailable;
 - (id) _brokenConstraintNegativeErrors;
 - (id) _brokenConstraintNegativeErrorsIfAvailable;
 - (id) markerForBrokenConstraintWithPositiveErrorVar:(id)a;
 - (id) markerForBrokenConstraintWithNegativeErrorVar:(id)a;
 - (void) rawSetRowWithHead:(id)abody:(id)b;
 - (void) rowCrossIndexNoteBodyVariable:(id)awasAddedToRowWithHead:(id)b;
 - (id) rowBodyForHead:(id)a;
 - (void) rowCrossIndexNoteBodyVariable:(id)awasRemovedFromRowWithHead:(id)b;
 - (void) rawRemoveRowWithHead:(id)a;
 - (id) rowHeadsForRowsContainingBodyVar:(id)a;
 - (void) rowCrossIndexNoteDroppedBodyVar:(id)a;
 - (id) rowBodyForNonObjectiveHead:(id)a;
 - (void) removeRowWithHead:(id)a;
 - (void) substituteOutAllOccurencesOfBodyVar:(id)awithExpression:(id)b;
 - (void) setRowWithHead:(id)abody:(id)b;
 - (void) addVariable:(id)acoefficient:(double)btoRowWithHead:(id)cbody:(id)d;
 - (id) rowBodyForObjectiveHead:(id)a;
 - (void) addVariable:(id)apriority:(double)btimes:(double)ctoObjectiveRowWithHead:(id)dbody:(id)e;
 - (void) replaceMarker:(id)awithMarkerPlusCoefficient:(double)btimesVariable:(id)c;
 - (void) setPositiveErrorVar:(id)aforBrokenConstraintWithMarker:(id)b;
 - (void) setNegativeErrorVar:(id)aforBrokenConstraintWithMarker:(id)b;
 - (id) fallbackMarkerForConstraintToBreakInRowWithHead:(id)abody:(id)b;
 - (id) errorVariableIntroducedByBreakingConstraintWithMarker:(id)aerrorIsPositive:(BOOL)b;
 - (id) chooseOutgoingRowHeadForIncomingRowHead:(id)a;
 - (void) pivotToMakeBodyVar:(id)anewHeadOfRowWithHead:(id)bandDropRow:(BOOL)c;
 - (id) handleUnsatisfiableRowWithHead:(id)abody:(id)busingInfeasibilityHandlingBehavior:(long long)cmutuallyExclusiveConstraints:(^@)d;
 - (double) integralizationAdjustmentForMarker:(id)a;
 - (id) variableToWorkOnAmongVariablesWithIntegralizationViolationsIgnoringLostCauses:(id)avarsAlreadyAdjusted:(id)b;
 - (double) valueForVariableWithoutIntegralizationAdjustments:(id)a;
 - (void) setIntegralizationAdjustment:(double)aforMarker:(id)b;
 - (double) valueForVariable:(id)a;
 - (void) withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(@?)a;
 - (id) chooseHeadForRowBody:(id)a;
 - (unsigned long long) minimizeConstantInObjectiveRowWithHead:(id)a;
 - (void) removeBodyVarFromAllRows:(id)a;
 - (void) setRows:(id)a;
 - (void) setRowsCrossIndex:(id)a;
 - (void) setHeadForObjectiveRow:(id)a;
 - (void) setVariablesWithValueRestrictionViolations:(id)a;
 - (void) setVariablesWithIntegralizationViolations:(id)a;
 - (void) setIntegralizationAdjustmentsForConstraintMarkers:(^{__CFDictionary=})a;
 - (id) fixUpValueRestrictionViolationsWithInfeasibilityHandlingBehavior:(long long)a;
 - (void) fixupIntegralizationViolations;
 - (void) _flushPendingRemovals;
 - (void) withBehaviors:(unsigned long long)aperformModifications:(@?)b;
 - (BOOL) hasValue:(^d)aforVariable:(id)b;
 - (id) createExpressionBySubstitutingForRowHeadVariablesInExpression:(id)a;
 - (BOOL) tryAddingDirectly:(id)a;
 - (BOOL) tryUsingArtificialVariableToAddConstraintWithMarker:(id)arowBody:(id)busingInfeasibilityHandlingBehavior:(long long)cmutuallyExclusiveConstraints:(^@)d;
 - (void) addExpression:(id)apriority:(double)btimes:(double)ctoObjectiveRowWithHead:(id)dbody:(id)e;
 - (id) outgoingRowHeadForRemovingConstraintWithMarker:(id)a;
 - (id) positiveErrorVarForBrokenConstraintWithMarker:(id)a;
 - (id) negativeErrorVarForBrokenConstraintWithMarker:(id)a;
 - (void) _coreReplaceMarker:(id)awithMarkerPlusDelta:(double)b;
 - (id) tryToOptimizeReturningMutuallyExclusiveConstraints;
 - (void) enumerateRows:(@?)a;
 - (void) enumerateRowsCrossIndex:(@?)a;
 - (void) enumerateOriginalConstraints:(@?)a;
 - (BOOL) bodyVarIsAmbiguous:(id)awithPivotOfOutgoingRowHead:(^@)b;
 - (BOOL) incoming:(^@)aandOutgoing:(^@)browHeadsThatMakeValueAmbiguousForVariable:(id)c;
 - (^{__CFDictionary=}) integralizationAdjustmentsForConstraintMarkers;
 - (id) allRowHeads;
 - (void) addExpression:(id)atimes:(double)btoRowWithHead:(id)cbody:(id)d;
 - (void) performModifications:(@?)awithUnsatisfiableConstraintsHandler:(@?)b;
 - (unsigned long long) numberOfConstraintsEligibleForAdjustmentToIntegralizeVariable:(id)aignoringConstraintsWithMarkers:(id)b;
 - (void) beginRecording;
 - (id) recordedCommandsData;
 - (unsigned long long) replayCommandsData:(id)averifyingIntegrity:(BOOL)b;
 - (BOOL) shouldIntegralize;
 - (void) withAutomaticOptimizationDisabled:(@?)a;
 - (void) withDelegateCallsDisabled:(@?)a;
 - (id) constraints;
 - (unsigned long long) pivotCount;
 - (BOOL) valueOfVariableIsAmbiguous:(id)a;
 - (id) rowsCrossIndex;
 - (id) headForObjectiveRow;
 - (id) variablesWithValueRestrictionViolations;
 - (id) variablesWithIntegralizationViolations;
 - (BOOL) revertsAfterUnsatisfiabilityHandler;
 - (void) setRevertsAfterUnsatisfiabilityHandler:(BOOL)a;
 - (id) description;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setEngineScalingCoefficients:({CGSize=dd})a;
 - (id) rows;
 - (id) candidateRedundantConstraints;
 - ({CGSize=dd}) engineScalingCoefficients;
 - (id) constraintsAffectingValueOfVariable:(id)a;
 - (BOOL) exerciseAmbiguityInVariable:(id)a;
 - (id) init;
 - (id) delegate;


@end
