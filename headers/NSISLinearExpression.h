
@protocol NSISRowBody, NSFastEnumeration;
@interface NSISLinearExpression : NSObject <NSISRowBody, NSFastEnumeration> {

    unsigned int inline_capacity;
    unsigned int var_count;
    double constant;
    (?="extern_data"{?="stored_extern_marker"@"slab"^{?}"capacity"Q}"inline_slab"{?="aligner"Q}"padding"[48C]"_workaround13455311"^v) data;
}
@property (atomic, assign, readwrite) NSNumber* constant;
 + (id) acquireFromPoolForUseCase:(long long)a;
 + (id) newExpressionWithCapacity:(unsigned long long)a;

 - (void) scaleBy:(double)a ;
 - (void) addVariable:(id)a coefficient:(double)b ;
 - (double) incrementConstant:(double)a ;
 - (void) verifyInternalIntegrity;
 - (double) constant;
 - (void) enumerateVariablesAndCoefficients:(@?)a ;
 - (void) enumerateVariables:(@?)a ;
 - (void) removeVariable:(id)a ;
 - (void) addVariable:(id)a coefficient:(double)b processVariableNewToReceiver:(@?)c processVariableDroppedFromReceiver:(@?)d ;
 - (void) addExpression:(id)a times:(double)b processVariableNewToReceiver:(@?)c processVariableDroppedFromReceiver:(@?)d ;
 - (void) replaceVariable:(id)a withExpression:(id)b processVariableNewToReceiver:(@?)c processVariableDroppedFromReceiver:(@?)d ;
 - (double) coefficientForVariable:(id)a ;
 - (void) replaceVariable:(id)a withVariable:(id)b coefficient:(double)c ;
 - (void) replaceVariable:(id)a withVariablePlusDelta:(double)b timesVariable:(id)c processVariableNewToReceiver:(@?)d processVariableDroppedFromReceiver:(@?)e ;
 - (void) addExpression:(id)a times:(double)b ;
 - (id) copyContentsAndReturnToPool;
 - (BOOL) enumerateVariablesAndCoefficientsUntil:(@?)a ;
 - (BOOL) isConstant;
 - (void) replaceVariable:(id)a withVariablePlusDelta:(double)b ;
 - (unsigned long long) variableCount;
 - (void) setConstant:(double)a ;
 - (id) initWithInlineCapacity:(unsigned long long)a ;
 - (void) setCoefficient:(double)a forVariable:(id)b ;
 - (id) variablesArray;
 - (void) returnToPool;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) init;


@end
