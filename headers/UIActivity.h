
@interface UIActivity : NSObject {

    long long _defaultPriority;
    @? _activityCompletionHandler;
    @? _activityCompletionWithItemsHandler;
}
@property (nonatomic, assign, readonly) NSExtension* applicationExtension;
@property (nonatomic, copy, readwrite) NSNumber* activityCompletionHandler;
@property (nonatomic, copy, readwrite) NSNumber* activityCompletionWithItemsHandler;
 + (long long) activityCategory;
 + (id) _activityFunctionImage:(id)a;
 + (id) _activityImageForApplication:(id)a;
 + (id) _activitySettingsImageForApplication:(id)a;
 + (id) _activityGenericImage:(id)a;

 - (id) activityType;
 - (void) dealloc;
 - ({CGSize=dd}) _thumbnailSize;
 - (id) _activityImage;
 - (id) activityTitle;
 - (id) applicationExtension;
 - (void) activityDidFinish:(BOOL)a;
 - (id) _activitySettingsImage;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (void) performActivity;
 - (id) activityImage;
 - (id) activityViewController;
 - (void) activityDidFinish:(BOOL)aitems:(id)berror:(id)c;
 - (void) _injectedJavaScriptResult:(id)a;
 - (BOOL) _canBeExcludedByActivityViewController:(id)a;
 - (void) prepareWithActivityItems:(id)a;
 - (BOOL) _presentActivityOnViewController:(id)aanimated:(BOOL)bcompletion:(@?)c;
 - (BOOL) _dismissActivityFromViewController:(id)aanimated:(BOOL)bcompletion:(@?)c;
 - (@?) activityCompletionHandler;
 - (void) setActivityCompletionHandler:(@?)a;
 - (@?) activityCompletionWithItemsHandler;
 - (void) setActivityCompletionWithItemsHandler:(@?)a;
 - (id) activitySettingsImage;
 - (BOOL) _canPerformWithSuppliedActivityItems:(id)a;
 - (id) _beforeActivity;
 - (void) _setActivityCompletionHandler:(@?)a;
 - (void) _setActivityCompletionWithItemsHandler:(@?)a;
 - (id) _embeddedActivityViewController;
 - (void) _willPresentAsFormSheet;
 - (void) _setSubject:(id)a;
 - (id) _subjectForActivityItem:(id)a;
 - (id) _dataTypeIdentifierForActivityItem:(id)a;
 - (id) _thumbnailImageForActivityItem:(id)a;
 - (id) _attachmentNameForActivityItem:(id)a;
 - (void) _cleanup;


@end
