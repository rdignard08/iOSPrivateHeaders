
@interface UISearchDisplayControllerContainerView : UIView {

    BOOL _collapsedTopView;
    @"UIView" _topView;
    @"UIView" _bottomView;
    @"UIView" _behindView;
    @"NSLayoutConstraint" _topViewHeightConstraint;
    @"NSLayoutConstraint" _topViewAttributeTopConstraint;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (id) topView;
 - (void) setBottomViewUserInteractionEnabled:(BOOL)a;
 - (void) updateTopViewHeight:(d)a;
 - (void) updateTopAttributeConstant:(d)a;
 - (void) collapseTopView;
 - (void) updateTopViewHeight:(d)aanimateUpdate:(BOOL)b;
 - (void) configureInteractionForContainment:(BOOL)a;
 - (void) adjustTopAttributeConstantByDelta:(d)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atopViewHeight:(d)b;
 - (id) bottomView;
 - (id) behindView;
 - (void) setTopViewHeightConstraint:(id)a;
 - (void) setTopViewAttributeTopConstraint:(id)a;
 - (id) topViewHeightConstraint;
 - (id) topViewAttributeTopConstraint;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
