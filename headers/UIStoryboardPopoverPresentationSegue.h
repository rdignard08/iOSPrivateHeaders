
@protocol UIPopoverPresentationControllerDelegate;
@interface UIStoryboardPopoverPresentationSegue : UIStoryboardSegue <UIPopoverPresentationControllerDelegate> {

    @"NSArray" _passthroughViews;
    Q _permittedArrowDirections;
    @"UIBarButtonItem" _anchorBarButtonItem;
    @"UIView" _anchorView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _anchorRect;
}

 - (void) dealloc;
 - (void) _prepare;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) anchorRect;
 - (id) anchorView;
 - (id) anchorBarButtonItem;
 - (Q) permittedArrowDirections;
 - (void) setPermittedArrowDirections:(Q)a;
 - (void) perform;
 - (id) passthroughViews;
 - (void) setPassthroughViews:(id)a;
 - (void) setAnchorBarButtonItem:(id)a;
 - (void) setAnchorView:(id)a;
 - (void) setAnchorRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
