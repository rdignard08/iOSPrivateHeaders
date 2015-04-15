
@interface _UITextViewInteractableAttachment : _UITextViewInteractableItem {

    NSTextAttachment* _attachment;
}
 + (id) interactableLinkWithAttachment:(id)arange:({_NSRange=QQ})b;

 - (void) dealloc;
 - (void) setAttachment:(id)a ;
 - (id) attachment;
 - (id) defaultAction;
 - (BOOL) allowInteraction;
 - (id) localizedTitle;
 - (void) _copyImage;
 - (void) _saveToCameraRoll;
 - (id) _image;
 - (id) actions;


@end
