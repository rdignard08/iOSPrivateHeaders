
@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate {

    Q _permittedArrowDirections;
    @"NSArray" _passthroughViews;
    @"UIView" _anchorView;
    @"UIBarButtonItem" _anchorBarButtonItem;
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
