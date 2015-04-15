
@interface UIPrintActivity : UIActivity {

    UIViewController _wrapperViewController;
}

 - (id) activityType;
 - (void) dealloc;
 - (id) _activityImage;
 - (id) activityTitle;
 - (void) activityDidFinish:(BOOL)a;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (void) performActivity;
 - (id) printInteractionControllerParentViewController:(id)a;
 - (void) prepareWithActivityItems:(id)a;
 - (id) _embeddedActivityViewController;
 - (void) setWrapperViewController:(id)a;
 - (void) cancelPrintOptions;
 - (id) printInteractionController;
 - (id) wrapperViewController;


@end
