
@interface UIInputViewPostPinningReloadState : NSObject {

    UIResponder _responderPreventedFromSettingInputViews;
}
@property (nonatomic, retain, readwrite) UIResponder* responderToReload;
 + (id) stateWithResponder:(id)a;

 - (void) dealloc;
 - (void) setResponderToReload:(id)a;
 - (id) responderToReload;


@end
