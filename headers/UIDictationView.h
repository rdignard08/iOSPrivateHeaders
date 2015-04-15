
@protocol _UISiriWaveyViewDelegate;
@interface UIDictationView : UIView <_UISiriWaveyViewDelegate> {

    UIKeyboardDicationBackground* _background;
    UIButton* _endpointButton;
    UIButton* _endpointButtonLandscape;
    UIButton* _waveTapEndpointButton;
    int _state;
    BOOL _keyboardInTransition;
    BOOL _automaticAppearanceWasEnabled;
    _UISiriWaveyView* _waveyView;
    UIDictationMeterView* _meterView;
}
 + (id) sharedInstance;
 + (id) activeInstance;
 + ({CGSize=dd}) layoutSize;
 + (Class) dictationViewClass;
 + ({CGSize=dd}) viewSize;

 - (void) dealloc;
 - (void) show;
 - (void) keyboardDidShow:(id)a;
 - (void) applicationWillResignActive;
 - (void) highlightEndpointButton;
 - (void) finishReturnToKeyboard;
 - (void) prepareForReturnToKeyboard;
 - (BOOL) isShowing;
 - (void) returnToKeyboard;
 - (BOOL) drawsOwnBackground;
 - (float) audioLevelForWaveyView:(id)a;
 - (id) endpointButton;
 - ({CGSize=dd}) currentScreenSize;
 - (void) applicationEnteredBackground;
 - ({CGPoint=dd}) positionForShow;
 - ({CGPoint=dd}) backgroundOffset;
 - (void) endpointButtonPressed;
 - (void) setState:(int)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGPoint=dd}) contentOffset;
 - (BOOL) visible;


@end
