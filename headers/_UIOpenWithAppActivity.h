
@interface _UIOpenWithAppActivity : UIActivity {

    LSApplicationProxy* _appProxy;
    BOOL _defaultApp;
    UIDocumentInteractionController* _documentInteractionController;
    NSString* _activityType;
}
 + (long long) activityCategory;

 - (id) activityType;
 - (void) dealloc;
 - (id) _activityImage;
 - (id) activityTitle;
 - (id) initWithApplicationIdentifier:(id)adocumentInteractionController:(id)b;
 - (id) _activitySettingsImage;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (void) performActivity;
 - (BOOL) isDefaultApp;
 - (void) setDefaultApp:(BOOL)a;


@end
