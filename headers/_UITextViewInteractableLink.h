
@protocol DDDetectionControllerInteractionDelegate;
@interface _UITextViewInteractableLink : _UITextViewInteractableItem <DDDetectionControllerInteractionDelegate> {

    NSURL* _link;
}
 + (id) interactableLinkWithURL:(id)arange:({_NSRange=QQ})b;

 - (void) dealloc;
 - (void) action:(id)adidDismissAlertController:(id)b;
 - (void) actionDidFinish:(id)a;
 - (id) defaultAction;
 - (BOOL) allowInteraction;
 - (id) localizedTitle;
 - (void) setLink:(id)a;
 - (id) link;
 - (id) dataDetectorActionsForTextView:(id)a;
 - (id) linkActions;
 - (void) _linkInteractionOpenURL;
 - (void) _linkInteractionAddToReadingList;
 - (void) _linkInteractionCopyLink;
 - (void) _dataDetectorAction:(id)a;
 - (id) actions;


@end
