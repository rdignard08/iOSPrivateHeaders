
@protocol UIPopoverControllerDelegate;
@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate> {

    q _type;
    @"UIViewController" _modalViewController;
    @"UIPopoverController" _popoverController;
    BOOL _isTextEffectsWindow;
    BOOL _dismissed;
    @? _dismissedHandler;
}
@property (nonatomic, copy, readwrite) NSNumber* dismissedHandler;
 + (BOOL) canShowTextServices;
 + (id) showServiceForText:(id)atype:(q)bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})cinView:(id)d;
 + (id) textServiceSessionForType:(q)a;

 - (void) dealloc;
 - (void) dismissTextServiceAnimated:(BOOL)a;
 - (void) setDismissedHandler:(@?)a;
 - (BOOL) isDisplaying;
 - (void) popoverControllerDidDismissPopover:(id)a;
 - (void) _endSession;
 - (void) sessionDidDismiss;
 - (@?) dismissedHandler;
 - (id) init;
 - (q) type;
 - (id) initWithType:(q)a;


@end
