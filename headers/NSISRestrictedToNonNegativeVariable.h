
@interface NSISRestrictedToNonNegativeVariable : NSISVariable {

}

 - (int) valueRestriction;
 - (id) markedConstraint;
 - (BOOL) shouldBeMinimized;


@end
