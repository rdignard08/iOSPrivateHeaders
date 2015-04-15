
@protocol UIStateRestoring;
@interface UIMailActivity : UIActivity <UIStateRestoring> {

    BOOL _keyboardVisible;
    BOOL _sourceIsManaged;
    BOOL _hasAnyAccount;
    BOOL _hasFilteredAccount;
    NSString* _autosaveIdentifier;
    MFMailComposeViewController* _mailComposeViewController;
}
 + (long long) activityCategory;

 - (id) activityType;
 - (void) dealloc;
 - (void) encodeRestorableStateWithCoder:(id)a;
 - (void) decodeRestorableStateWithCoder:(id)a;
 - (id) _activityImage;
 - (id) activityTitle;
 - (BOOL) keyboardVisible;
 - (id) _activitySettingsImage;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (BOOL) sourceIsManaged;
 - (void) setSubject:(id)a;
 - (id) activityViewController;
 - (void) setSourceIsManaged:(BOOL)a;
 - (void) prepareWithActivityItems:(id)a;
 - (void) _setSubject:(id)a;
 - (void) autosaveWithHandler:(@?)a;
 - (void) setKeyboardVisible:(BOOL)a;
 - (void) setAutosaveIdentifier:(id)a;
 - (id) _mailDraftRestorationURL;
 - (void) _deleteMailDraftIdentifierRestorationArchive:(id)a;
 - (id) _stateRestorationDraftIsAvailable;
 - (id) mailComposeViewController;
 - (void) setHasAnyAccount:(BOOL)a;
 - (void) setHasFilteredAccount:(BOOL)a;
 - (BOOL) hasAnyAccount;
 - (BOOL) hasFilteredAccount;
 - (id) autosaveIdentifier;
 - (BOOL) _restoreDraft;
 - (void) setMailComposeViewController:(id)a;
 - (void) _saveDraft:(id)a;
 - (void) mailComposeController:(id)adidFinishWithResult:(int)berror:(id)c;
 - (id) init;
 - (void) _cleanup;


@end
