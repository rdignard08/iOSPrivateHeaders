
@protocol NSISRowBody;
@interface NSISObjectiveLinearExpression : NSObject <NSISRowBody> {

    ^{__CFDictionary=} _priorityMap;
    @"NSMutableArray" _variablesSortedByPriorityVectors;
    ^{__CFData=} _constant;
}

 - (void) verifyInternalIntegrity;
 - (void) enumerateVariables:(@?)a;
 - (void) removeVariable:(id)a;
 - (void) addVariable:(id)apriority:(double)btimes:(double)cprocessVariableNewToReceiver:(@?)dprocessVariableDroppedFromReceiver:(@?)e;
 - (void) addExpression:(id)apriority:(double)btimes:(double)cprocessVariableNewToReceiver:(@?)dprocessVariableDroppedFromReceiver:(@?)e;
 - (void) replaceVariable:(id)awithExpression:(id)bprocessVariableNewToReceiver:(@?)cprocessVariableDroppedFromReceiver:(@?)d;
 - (void) replaceVariable:(id)awithVariablePlusDelta:(double)btimesVariable:(id)cprocessVariableNewToReceiver:(@?)dprocessVariableDroppedFromReceiver:(@?)e;
 - (id) restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
 - (void) leadingPriority:(^d)aandValue:(^d)bforVariable:(id)c;
 - (void) addVariable:(id)apriority:(double)btimes:(double)c;
 - (id) initWithLinearExpression:(id)apriority:(double)b;
 - (BOOL) constantTermIsZero;
 - (void) replaceVariable:(id)awithVariablePlusDelta:(double)b;
 - (unsigned long long) variableCount;
 - (void) incrementConstantWithPriority:(double)avalue:(double)b;
 - (^{__CFData=}) priorityVectorForVariable:(id)a;
 - (void) setPriorityVector:(^{__CFData=})aforKnownAbsentVariable:(id)b;
 - (void) incrementConstantWithPriorityVector:(^{__CFData=})atimesScalarCoefficient:(double)b;
 - (id) description;
 - (void) dealloc;
 - (id) init;


@end
