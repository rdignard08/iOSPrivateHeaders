
@interface UIStoryboardReplaceSegueTemplate : UIStoryboardSegueTemplate {

    q _destinationContainmentContext;
    q _splitViewControllerIndex;
}

 - (id) segueWithDestinationViewController:(id)a;
 - (id) defaultSegueClassName;
 - (q) destinationContainmentContext;
 - (q) splitViewControllerIndex;
 - (void) setDestinationContainmentContext:(q)a;
 - (void) setSplitViewControllerIndex:(q)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
