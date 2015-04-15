
@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint {

}
 + (id) constraintWithItem:(id)aattribute:(q)brelatedBy:(q)ctoItem:(id)dattribute:(q)emultiplier:(d)fconstant:(d)g;
 + (id) constraintsWithAutoresizingMask:(Q)asubitem:(id)bframe:({CGRect={CGPoint=dd}{CGSize=dd}})csuperitem:(id)dbounds:({CGRect={CGPoint=dd}{CGSize=dd}})e;

 - (i) _constraintType;
 - (id) descriptionAccessory;
 - (id) _viewForAutoresizingMask;


@end
