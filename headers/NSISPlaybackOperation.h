
@protocol NSISVariableDelegate;
@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate> {

    NSMutableDictionary* oldIdentsToNewVariables;
    NSMutableSet* variablesToIntegralize;
    NSMutableSet* userObservableVariables;
}

 - (id) unwrapVariable:(id)a ;
 - (id) unwrapLinearExpression:(id)a ;
 - (void) nsis_valueOfVariable:(id)a didChangeInEngine:(id)b ;
 - (id) nsis_descriptionOfVariable:(id)a ;
 - (BOOL) nsis_shouldIntegralizeVariable:(id)a ;
 - (BOOL) nsis_valueOfVariableIsUserObservable:(id)a ;
 - (void) playbackOneAction:(id)a onEngine:(id)b ;
 - (double) nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)a ;
 - (void) dealloc;
 - (id) init;


@end
