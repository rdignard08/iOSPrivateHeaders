
@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {

    unsigned long long _permittedArrowDirections;
    NSArray* _passthroughViews;
    UIBarButtonItem* _anchorBarButtonItem;
    UIView* _anchorView;
}

 - (void) dealloc;
 - (id) anchorView;
 - (id) anchorBarButtonItem;
 - (unsigned long long) permittedArrowDirections;
 - (void) setPermittedArrowDirections:(unsigned long long)a ;
 - (id) passthroughViews;
 - (void) setPassthroughViews:(id)a ;
 - (void) setAnchorBarButtonItem:(id)a ;
 - (void) setAnchorView:(id)a ;
 - (id) segueWithDestinationViewController:(id)a ;
 - (id) defaultSegueClassName;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
