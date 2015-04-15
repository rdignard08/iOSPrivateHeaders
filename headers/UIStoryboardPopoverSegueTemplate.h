
@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {

    Q _permittedArrowDirections;
    @"NSArray" _passthroughViews;
    @"UIBarButtonItem" _anchorBarButtonItem;
    @"UIView" _anchorView;
}

 - (void) dealloc;
 - (id) anchorView;
 - (id) anchorBarButtonItem;
 - (Q) permittedArrowDirections;
 - (void) setPermittedArrowDirections:(Q)a;
 - (id) passthroughViews;
 - (void) setPassthroughViews:(id)a;
 - (void) setAnchorBarButtonItem:(id)a;
 - (void) setAnchorView:(id)a;
 - (id) segueWithDestinationViewController:(id)a;
 - (id) defaultSegueClassName;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
