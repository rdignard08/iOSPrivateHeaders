
@protocol NSISRowBody;
@interface NSISObjectiveLinearExpression : NSObject <NSISRowBody> {

    ^{__CFDictionary=} _priorityMap;
    @"NSMutableArray" _variablesSortedByPriorityVectors;
    ^{__CFData=} _constant;
}

 - (void) verifyInternalIntegrity;
 - (void) enumerateVariables:(@?)a;
 - (void) removeVariable:(id)a;
 - (void) addVariable:(id)apriority:(d)btimes:(d)cprocessVariableNewToReceiver:(@?)dprocessVariableDroppedFromReceiver:(@?)e;
 - (void) addExpression:(id)apriority:(d)btimes:(d)cprocessVariableNewToReceiver:(@?)dprocessVariableDroppedFromReceiver:(@?)e;
 - (void) replaceVariable:(id)awithExpression:(id)bprocessVariableNewToReceiver:(@?)cprocessVariableDroppedFromReceiver:(@?)d;
 - (void) replaceVariable:(id)awithVariablePlusDelta:(d)btimesVariable:(id)cprocessVariableNewToReceiver:(@?)dprocessVariableDroppedFromReceiver:(@?)e;
 - (id) restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
 - (void) leadingPriority:(^d)aandValue:(^d)bforVariable:(id)c;
 - (void) addVariable:(id)apriority:(d)btimes:(d)c;
 - (id) initWithLinearExpression:(id)apriority:(d)b;
 - (BOOL) constantTermIsZero;
 - (void) replaceVariable:(id)awithVariablePlusDelta:(d)b;
 - (Q) variableCount;
 - (void) incrementConstantWithPriority:(d)avalue:(d)b;
 - (^{__CFData=}) priorityVectorForVariable:(id)a;
 - (void) setPriorityVector:(^{__CFData=})aforKnownAbsentVariable:(id)b;
 - (void) incrementConstantWithPriorityVector:(^{__CFData=})atimesScalarCoefficient:(d)b;
 - (id) description;
 - (void) dealloc;
 - (id) init;


@end
