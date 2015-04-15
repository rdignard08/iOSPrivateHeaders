
@protocol NSISRowBody, NSFastEnumeration;
@interface NSISLinearExpression : NSObject <NSISRowBody, NSFastEnumeration> {

    I inline_capacity;
    I var_count;
    d constant;
    (?="extern_data"{?="stored_extern_marker"@"slab"^{?}"capacity"Q}"inline_slab"{?="aligner"Q}"padding"[48C]"_workaround13455311"^v) data;
}
@property (atomic, assign, readwrite) NSNumber* constant;
 + (id) acquireFromPoolForUseCase:(q)a;
 + (id) newExpressionWithCapacity:(Q)a;

 - (void) scaleBy:(d)a;
 - (void) addVariable:(id)acoefficient:(d)b;
 - (d) incrementConstant:(d)a;
 - (void) verifyInternalIntegrity;
 - (d) constant;
 - (void) enumerateVariablesAndCoefficients:(@?)a;
 - (void) enumerateVariables:(@?)a;
 - (void) removeVariable:(id)a;
 - (void) addVariable:(id)acoefficient:(d)bprocessVariableNewToReceiver:(@?)cprocessVariableDroppedFromReceiver:(@?)d;
 - (void) addExpression:(id)atimes:(d)bprocessVariableNewToReceiver:(@?)cprocessVariableDroppedFromReceiver:(@?)d;
 - (void) replaceVariable:(id)awithExpression:(id)bprocessVariableNewToReceiver:(@?)cprocessVariableDroppedFromReceiver:(@?)d;
 - (d) coefficientForVariable:(id)a;
 - (void) replaceVariable:(id)awithVariable:(id)bcoefficient:(d)c;
 - (void) replaceVariable:(id)awithVariablePlusDelta:(d)btimesVariable:(id)cprocessVariableNewToReceiver:(@?)dprocessVariableDroppedFromReceiver:(@?)e;
 - (void) addExpression:(id)atimes:(d)b;
 - (id) copyContentsAndReturnToPool;
 - (BOOL) enumerateVariablesAndCoefficientsUntil:(@?)a;
 - (BOOL) isConstant;
 - (void) replaceVariable:(id)awithVariablePlusDelta:(d)b;
 - (Q) variableCount;
 - (void) setConstant:(d)a;
 - (id) initWithInlineCapacity:(Q)a;
 - (void) setCoefficient:(d)aforVariable:(id)b;
 - (id) variablesArray;
 - (void) returnToPool;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) init;


@end
