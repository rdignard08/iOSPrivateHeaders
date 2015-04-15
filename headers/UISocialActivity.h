
@interface UISocialActivity : UIApplicationExtensionActivity {

    NSString _builtinActivityType;
    SLComposeViewController _socialComposeViewController;
}
 + (long long) activityCategory;

 - (id) initWithActivityType:(id)a;
 - (id) activityType;
 - (void) dealloc;
 - ({CGSize=dd}) _thumbnailSize;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (id) activityViewController;
 - (id) initWithApplicationExtension:(id)a;
 - (BOOL) _canBeExcludedByActivityViewController:(id)a;
 - (void) prepareWithActivityItems:(id)a;
 - (BOOL) _presentActivityOnViewController:(id)aanimated:(BOOL)bcompletion:(@?)c;
 - (BOOL) _dismissActivityFromViewController:(id)aanimated:(BOOL)bcompletion:(@?)c;
 - (void) setBuiltinActivityType:(id)a;
 - (id) builtinActivityType;
 - (void) setSocialComposeViewController:(id)a;
 - (id) socialComposeViewController;
 - (id) debugDescription;
 - (void) _cleanup;


@end
