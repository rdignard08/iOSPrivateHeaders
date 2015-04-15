
@interface UIMessageActivity : UIActivity {

    BOOL _sourceIsManaged;
    @"MFMessageComposeViewController" _messageComposeViewController;
}
 + (q) activityCategory;

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
 - (void) messageComposeViewController:(id)adidFinishWithResult:(i)b;
 - (void) _cleanup;


@end
