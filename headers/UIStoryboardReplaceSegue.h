
@interface UIStoryboardReplaceSegue : UIStoryboardSegue {

    long long _destinationContainmentContext;
    long long _splitViewControllerIndex;
}

 - (void) perform;
 - (long long) destinationContainmentContext;
 - (long long) splitViewControllerIndex;
 - (void) setDestinationContainmentContext:(long long)a;
 - (void) setSplitViewControllerIndex:(long long)a;


@end
