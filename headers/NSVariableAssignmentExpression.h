
@interface NSVariableAssignmentExpression : NSExpression {

    @"NSVariableExpression" _assignmentVariable;
    @"NSExpression" _subexpression;
}
 + (BOOL) supportsSecureCoding;

 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (void) acceptVisitor:(id)aflags:(unsigned long long)b;
 - (id) _expressionWithSubstitutionVariables:(id)a;
 - (id) initWithAssignmentVariable:(id)aexpression:(id)b;
 - (id) subexpression;
 - (id) initWithAssignmentExpression:(id)aexpression:(id)b;
 - (id) assignmentVariable;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) expressionValueWithObject:(id)acontext:(id)b;
 - (id) variable;


@end
