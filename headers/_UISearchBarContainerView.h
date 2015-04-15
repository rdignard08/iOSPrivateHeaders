
@interface _UISearchBarContainerView : UIView {

    UIView* _subview;
    int _resizingMask;
}

 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (void) _addSubview:(id)a positioned:(long long)b relativeTo:(id)c ;
 - (void) _didRemoveSubview:(id)a ;
 - (void) _uncontainerSubview:(id)a ;
 - (void) willRemoveSubview:(id)a ;


@end
