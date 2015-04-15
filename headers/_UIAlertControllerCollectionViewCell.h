
@interface _UIAlertControllerCollectionViewCell : UICollectionViewCell {

    _UIAlertControllerActionView* _actionView;
}

 - (void) dealloc;
 - (id) focusedView;
 - (void) setHighlighted:(BOOL)a;
 - (void) applyLayoutAttributes:(id)a;
 - (id) actionView;
 - (void) setActionView:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
