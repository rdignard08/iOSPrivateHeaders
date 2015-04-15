
@interface UIMessageActivity : UIActivity {

    BOOL _sourceIsManaged;
    MFMessageComposeViewController _messageComposeViewController;
}
 + (long long) activityCategory;

 - (id) activityType;
 - (void) dealloc;
 - (id) _activityImage;
 - (id) activityTitle;
 - (id) _activitySettingsImage;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (BOOL) sourceIsManaged;
 - (id) activityViewController;
 - (void) setSourceIsManaged:(BOOL)a;
 - (void) prepareWithActivityItems:(id)a;
 - (void) setMessageComposeViewController:(id)a;
 - (id) messageComposeViewController;
 - (void) messageComposeViewController:(id)adidFinishWithResult:(int)b;
 - (void) _cleanup;


@end
