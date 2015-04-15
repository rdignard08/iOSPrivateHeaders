
@protocol UIPopoverControllerDelegate;
@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate> {

    @"MPAVRoutingController" _routingController;
    @"MPAudioVideoRoutingPopoverController" _popoverController;
    @"MPAudioVideoRoutingActionSheet" _actionSheet;
    @"UIWebDocumentView" _delegate;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) show:(BOOL)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) popoverControllerDidDismissPopover:(id)a;
 - (void) _windowWillRotate:(id)a;
 - (void) _dismissAirPlayRoutePickerIPad;
 - (void) _windowDidRotate:(id)a;
 - (void) _presentAirPlayPopoverAnimated:(BOOL)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) showAirPlayPickerIPad:(Q)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) showAirPlayPickerIPhone:(Q)a;


@end
