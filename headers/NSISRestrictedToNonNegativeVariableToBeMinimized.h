
@interface NSISRestrictedToNonNegativeVariableToBeMinimized : NSISVariable {

}

 - (i) valueRestriction;
 - (id) markedConstraint;
 - (BOOL) shouldBeMinimized;


@end
