
@interface UIInputSwitcherView : UIKeyboardMenuView {

    i m_currentInputModeIndex;
    BOOL m_keyboardSettingsFromSwitcher;
    @"NSMutableArray" m_inputModes;
    @"UISwitch" m_predictiveSwitch;
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
 - (q) defaultSelectedIndex;
 - (id) predictiveSwitch;
 - (void) toggleKeyboardPredictionPreference;
 - (void) didSelectItemAtIndex:(i)a;
 - (id) localizedTitleForItemAtIndex:(i)a;
 - (id) fontForItemAtIndex:(i)a;
 - (id) subtitleForItemAtIndex:(i)a;
 - (id) subtitleFontForItemAtIndex:(i)a;
 - (id) titleForItemAtIndex:(i)a;
 - (void) setKeyboardSettingsFromSwitcher:(BOOL)a;
 - (void) setInputModes:(id)a;
 - (BOOL) keyboardSettingsFromSwitcher;
 - (void) switchAction;
 - (void) selectRowForInputMode:(id)a;
 - (void) selectNextInputMode;
 - (void) selectPreviousInputMode;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (q) numberOfItems;


@end
