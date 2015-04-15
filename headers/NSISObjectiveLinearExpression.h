
@protocol NSISRowBody;
@interface NSISObjectiveLinearExpression : NSObject <NSISRowBody> {

    ^{__CFDictionary=} _priorityMap;
    NSMutableArray* _variablesSortedByPriorityVectors;
    ^{__CFData=} _constant;
}

 - (void) verifyInternalIntegrity;
 - (void) enumerateVariables:(@?)a ;
 - (void) removeVariable:(id)a ;
 - (void) addVariable:(id)a priority:(double)b times:(double)c processVariableNewToReceiver:(@?)d processVariableDroppedFromReceiver:(@?)e ;
 - (void) addExpression:(id)a priority:(double)b times:(double)c processVariableNewToReceiver:(@?)d processVariableDroppedFromReceiver:(@?)e ;
 - (void) replaceVariable:(id)a withExpression:(id)b processVariableNewToReceiver:(@?)c processVariableDroppedFromReceiver:(@?)d ;
 - (void) replaceVariable:(id)a withVariablePlusDelta:(double)b timesVariable:(id)c processVariableNewToReceiver:(@?)d processVariableDroppedFromReceiver:(@?)e ;
 - (id) restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
 - (void) leadingPriority:(^d)a andValue:(^d)b forVariable:(id)c ;
 - (void) addVariable:(id)a priority:(double)b times:(double)c ;
 - (id) initWithLinearExpression:(id)a priority:(double)b ;
 - (BOOL) constantTermIsZero;
 - (void) replaceVariable:(id)a withVariablePlusDelta:(double)b ;
 - (unsigned long long) variableCount;
 - (void) incrementConstantWithPriority:(double)a value:(double)b ;
 - (^{__CFData=}) priorityVectorForVariable:(id)a ;
 - (void) setPriorityVector:(^{__CFData=})a forKnownAbsentVariable:(id)b ;
 - (void) incrementConstantWithPriorityVector:(^{__CFData=})a timesScalarCoefficient:(double)b ;
 - (id) description;
 - (void) dealloc;
 - (id) init;


@end
