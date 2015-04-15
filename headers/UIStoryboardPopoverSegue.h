
@interface UIStoryboardPopoverSegue : UIStoryboardSegue {

    UIPopoverController* _popoverController;
    NSArray* _passthroughViews;
    unsigned long long _permittedArrowDirections;
    UIView* _anchorView;
    UIBarButtonItem* _anchorBarButtonItem;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _anchorRect;
}

 - (void) dealloc;
 - (id) _passthroughViews;
 - (void) perform;
 - (unsigned long long) _permittedArrowDirections;
 - (id) _anchorBarButtonItem;
 - (id) _anchorView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _anchorRect;
 - (id) popoverController;
 - (void) _setPassthroughViews:(id)a;
 - (void) _setPermittedArrowDirections:(unsigned long long)a;
 - (void) _setAnchorBarButtonItem:(id)a;
 - (void) _setAnchorView:(id)a;
 - (void) _setAnchorRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
