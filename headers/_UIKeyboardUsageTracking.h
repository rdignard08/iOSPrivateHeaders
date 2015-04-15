
@interface _UIKeyboardUsageTracking : NSObject {

}
 + (void) keyboardExtensionPrimaryLanguageChanged;
 + (void) selectedPredictiveInputCandidate:(id)aisAutocorrection:(BOOL)b;
 + (void) keyboardGestureSetPredictionPreference:(BOOL)a;
 + (void) keyboardGestureSelectedPredictiveInputCandidate;
 + (void) keyboardExtensionsOnDevice;
 + (void) predictionViewState:(BOOL)aforInputMode:(id)b;
 + (void) keyboardSetToInputMode:(id)afromPrevious:(id)b;
 + (void) keyboardExtensionCrashed;
 + (void) inputSwitcherSetPredictionPreference:(BOOL)a;



@end
