
@interface UIPrintActivityWrapperNavigationController : UINavigationController {

    @? _completionHandler;
    BOOL _presentedPrintInteractionController;
}

 - (void) dealloc;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidLoad;
 - (BOOL) presentedPrintInteractionController;
 - (void) setPresentedPrintInteractionController:(BOOL)a;
 - (id) initWithCompletion:(@?)a;


@end
