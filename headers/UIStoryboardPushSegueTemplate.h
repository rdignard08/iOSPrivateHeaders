
@interface UIStoryboardPushSegueTemplate : UIStoryboardSegueTemplate {

    long long _destinationContainmentContext;
    long long _splitViewControllerIndex;
}

 - (id) segueWithDestinationViewController:(id)a ;
 - (id) defaultSegueClassName;
 - (long long) destinationContainmentContext;
 - (long long) splitViewControllerIndex;
 - (void) setDestinationContainmentContext:(long long)a ;
 - (void) setSplitViewControllerIndex:(long long)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
