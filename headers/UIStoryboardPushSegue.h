
@interface UIStoryboardPushSegue : UIStoryboardSegue {

    q _destinationContainmentContext;
    q _splitViewControllerIndex;
}

 - (void) perform;
 - (q) destinationContainmentContext;
 - (q) splitViewControllerIndex;
 - (void) setDestinationContainmentContext:(q)a;
 - (void) setSplitViewControllerIndex:(q)a;


@end
