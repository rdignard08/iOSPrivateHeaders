
@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint {

}
 + (id) constraintWithItem:(id)aattribute:(long long)brelatedBy:(long long)ctoItem:(id)dattribute:(long long)emultiplier:(double)fconstant:(double)g;
 + (id) constraintsWithAutoresizingMask:(unsigned long long)asubitem:(id)bframe:({CGRect={CGPoint=dd}{CGSize=dd}})csuperitem:(id)dbounds:({CGRect={CGPoint=dd}{CGSize=dd}})e;

 - (int) _constraintType;
 - (id) descriptionAccessory;
 - (id) _viewForAutoresizingMask;


@end
