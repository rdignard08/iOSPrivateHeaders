
@interface UIInputSwitcherView : UIKeyboardMenuView {

    int m_currentInputModeIndex;
    BOOL m_keyboardSettingsFromSwitcher;
    NSMutableArray* m_inputModes;
    UISwitch* m_predictiveSwitch;
}
 + (id) sharedInstance;
 + (id) activeInstance;

 - (void) dealloc;
 - (void) show;
 - (void) setInputMode:(id)a;
 - (id) selectedInputMode;
 - (id) previousInputMode;
 - (id) inputModes;
 - (id) nextInputMode;
 - (void) selectInputMode:(id)a;
 - ({CGSize=dd}) preferredSize;
 - (long long) defaultSelectedIndex;
 - (id) predictiveSwitch;
 - (void) toggleKeyboardPredictionPreference;
 - (void) didSelectItemAtIndex:(int)a;
 - (id) localizedTitleForItemAtIndex:(int)a;
 - (id) fontForItemAtIndex:(int)a;
 - (id) subtitleForItemAtIndex:(int)a;
 - (id) subtitleFontForItemAtIndex:(int)a;
 - (id) titleForItemAtIndex:(int)a;
 - (void) setKeyboardSettingsFromSwitcher:(BOOL)a;
 - (void) setInputModes:(id)a;
 - (BOOL) keyboardSettingsFromSwitcher;
 - (void) switchAction;
 - (void) selectRowForInputMode:(id)a;
 - (void) selectNextInputMode;
 - (void) selectPreviousInputMode;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (long long) numberOfItems;


@end
