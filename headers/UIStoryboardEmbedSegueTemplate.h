
@interface UIStoryboardEmbedSegueTemplate : UIStoryboardSegueTemplate {

    UIView* _containerView;
}

 - (void) dealloc;
 - (id) containerView;
 - (void) setContainerView:(id)a ;
 - (id) segueWithDestinationViewController:(id)a ;
 - (id) defaultSegueClassName;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
