
@protocol UIPopoverControllerDelegate;
@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate> {

    MPAVRoutingController* _routingController;
    MPAudioVideoRoutingPopoverController* _popoverController;
    MPAudioVideoRoutingActionSheet* _actionSheet;
    UIWebDocumentView* _delegate;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) show:(BOOL)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) popoverControllerDidDismissPopover:(id)a ;
 - (void) _windowWillRotate:(id)a ;
 - (void) _dismissAirPlayRoutePickerIPad;
 - (void) _windowDidRotate:(id)a ;
 - (void) _presentAirPlayPopoverAnimated:(BOOL)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) showAirPlayPickerIPad:(unsigned long long)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) showAirPlayPickerIPhone:(unsigned long long)a ;


@end
