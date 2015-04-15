
@protocol _UIRotatingAlertControllerDelegate;
@interface _UITextViewInteractableItem : NSObject <_UIRotatingAlertControllerDelegate> {

    @"_UIRotatingAlertController" _linkInteractionAlertController;
    BOOL _interactionIsFinished;
    @"UITextView" _textView;
    @"NSArray" _actions;
    @"NSDictionary" _defaultAction;
    @"UIWindow" _windowForActionSheetPresentation;
    {_NSRange="location"Q"length"Q} _range;
}
@property (nonatomic, assign, readwrite) NSNumber* range;
@property (nonatomic, assign, readwrite) UITextView* textView;
@property (nonatomic, assign, readonly) NSString* localizedTitle;
@property (nonatomic, assign, readonly) NSArray* actions;
@property (nonatomic, assign, readonly) NSDictionary* defaultAction;
@property (nonatomic, assign, readwrite) NSNumber* interactionIsFinished;
@property (nonatomic, retain, readwrite) UIWindow* windowForActionSheetPresentation;

 - (void) setTextView:(id)a;
 - (void) _cleanupSheet;
 - (id) hostViewForSheet:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) initialPresentationRectInHostViewForSheet:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) presentationRectInHostViewForSheet:(id)a;
 - (void) handleTap;
 - (id) _actionSheet;
 - (id) defaultAction;
 - (BOOL) allowHighlight;
 - (void) handleLongPress;
 - (void) setInteractionIsFinished:(BOOL)a;
 - (BOOL) allowInteraction;
 - (void) _showActionSheet;
 - (void) _handleActionAndFinish:(id)a;
 - (id) localizedTitle;
 - (id) windowForActionSheetPresentation;
 - (void) setWindowForActionSheetPresentation:(id)a;
 - (void) _cleanupWindowForActionSheetPresentation;
 - (void) setRange:({_NSRange=QQ})a;
 - (BOOL) interactionIsFinished;
 - ({_NSRange=QQ}) range;
 - (id) textView;
 - (id) actions;


@end
