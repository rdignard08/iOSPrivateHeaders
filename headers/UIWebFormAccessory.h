
@interface UIWebFormAccessory : UIInputView {

    @"UIToolbar" _leftToolbar;
    @"UIToolbar" _rightToolbar;
    @"UIBarButtonItem" _doneButton;
    @"UIBarButtonItem" _flexibleSpaceItem;
    @"UIBarButtonItem" _previousItem;
    @"UIBarButtonItem" _nextItem;
    @"UISegmentedControl" _tab;
    @"UIBarButtonItem" _autofill;
    @"UIBarButtonItem" _clearButton;
    @"<UIWebFormAccessoryDelegate>" delegate;
}
 + (id) toolbarWithItems:(id)a;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) layoutSubviews;
 - (void) _setRenderConfig:(id)a;
 - (id) _clearButton;
 - (void) _tabSegmentedControlDidChange:(id)a;
 - (void) _previousTapped:(id)a;
 - (void) _nextTapped:(id)a;
 - (void) done:(id)a;
 - (void) _updateFrame;
 - (void) _orientationDidChange:(id)a;
 - (void) _refreshAutofillPresentation;
 - (void) _applyTreatmentToAutoFillLabel;
 - (id) _autoFillButton;
 - (void) set_autofill:(id)a;
 - (void) autoFill:(id)a;
 - (void) showAutoFillButtonWithTitle:(id)a;
 - (void) clear:(id)a;
 - (void) set_clearButton:(id)a;
 - (void) hideAutoFillButton;
 - (void) showAutoFillButton;
 - (void) setClearVisible:(BOOL)a;
 - (void) setNextEnabled:(BOOL)a;
 - (BOOL) isNextEnabled;
 - (void) setPreviousEnabled:(BOOL)a;
 - (BOOL) isPreviousEnabled;
 - (id) _tab;
 - (void) set_tab:(id)a;
 - (id) _autofill;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
