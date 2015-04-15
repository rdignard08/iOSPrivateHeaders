
@interface UIAlertView : UIView {

    UIAlertController* _alertController;
    _UIAlertControllerShimPresenter* _presenter;
    NSMutableArray* _actions;
    long long _cancelIndex;
    long long _defaultButtonIndex;
    long long _firstOtherButtonIndex;
    NSString* _message;
    NSString* _subtitle;
    long long _alertViewStyle;
    BOOL _runsModal;
    id _context;
    BOOL _hasPreparedAlertActions;
    BOOL _isPresented;
    BOOL _alertControllerShouldDismiss;
    BOOL _handlingAlertActionShouldDismiss;
    BOOL _dismissingAlertController;
    BOOL __currentlyRunningModal;
    UIViewController* externalViewControllerForPresentation;
    _UIWeakRef* _weakDelegate;
}
 + (void) showAlertViewForTaskWithErrorOnCompletion:(id)adelegate:(id)bcancelButtonTitle:(id)cotherButtonTitles:(id)d;
 + (void) showAlertViewForRequestOperationWithErrorOnCompletion:(id)adelegate:(id)bcancelButtonTitle:(id)cotherButtonTitles:(id)d;
 + (void) showAlertViewForTaskWithErrorOnCompletion:(id)adelegate:(id)b;
 + (void) showAlertViewForRequestOperationWithErrorOnCompletion:(id)adelegate:(id)b;
 + (id) _alertViewForWindow:(id)a;
 + (id) _alertWindow;
 + ({CGSize=dd}) minimumSize;
 + (void) _setSpringBoardAlertDisplayingOverApplicationAlert:(BOOL)a;
 + (BOOL) _springBoardAlertDisplayingOverApplicationAlert;
 + (void) applyTransformToAllAlerts:({CGAffineTransform=dddddd})a;
 + (BOOL) _isAlertControllerShimClass;
 + (id) _alertViewForSessionWithRemoteViewController:(id)a;
 + (id) _remoteAlertViewWithBlock:(@?)a;

 - (id) title;
 - (void) setTitle:(id)a ;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) show;
 - (long long) cancelButtonIndex;
 - (void) dismissWithClickedButtonIndex:(long long)a animated:(BOOL)b ;
 - (long long) addButtonWithTitle:(id)a ;
 - (void) setCancelButtonIndex:(long long)a ;
 - (void) _useUndoStyle:(BOOL)a ;
 - (id) titleLabel;
 - (long long) numberOfRows;
 - (BOOL) _isAnimating;
 - (id) message;
 - (long long) defaultButtonIndex;
 - (id) textFieldAtIndex:(long long)a ;
 - (double) _maxHeight;
 - (id) defaultButton;
 - (void) setDefaultButton:(id)a ;
 - (id) _titleLabel;
 - (id) _defaultButton;
 - (void) _setAccessoryView:(id)a ;
 - (id) subtitle;
 - (void) setSubtitle:(id)a ;
 - (void) setMessage:(id)a ;
 - (id) keyboard;
 - (void) dismiss;
 - (void) dismissAnimated:(BOOL)a ;
 - (void) _setTextFieldsHidden:(BOOL)a ;
 - (void) setDefaultButtonIndex:(long long)a ;
 - (long long) firstOtherButtonIndex;
 - (void) _setFirstOtherButtonIndex:(long long)a ;
 - (void) _dismissForTappedIndex:(long long)a ;
 - (BOOL) _prepareToDismissForTappedIndex:(long long)a ;
 - (id) _preparedAlertActionAtIndex:(unsigned long long)a ;
 - (void) _updateMessageAndSubtitle;
 - (void) setWeakDelegate:(id)a ;
 - (id) weakDelegate;
 - (id) _alertController;
 - (id) addTextFieldWithValue:(id)a label:(id)b ;
 - (void) _performPresentationDismissalWithClickedButtonIndex:(long long)a animated:(BOOL)b ;
 - (void) _prepareAlertActions;
 - (BOOL) runsModal;
 - (void) _setCurrentlyRunningModal:(BOOL)a ;
 - (BOOL) _currentlyRunningModal;
 - (long long) numberOfButtons;
 - (long long) alertViewStyle;
 - (int) textFieldCount;
 - (long long) _maximumNumberOfTextFieldsForCurrentStyle;
 - (void) _textDidChangeInTextField:(id)a ;
 - (id) _addTextFieldWithValue:(id)a label:(id)b ;
 - (void) _updateFirstOtherButtonEnabledState;
 - (void) _showAnimated:(BOOL)a ;
 - (void) _setIsPresented:(BOOL)a ;
 - (id) textField;
 - (void) _beginRunningModallyIfNecessary;
 - (void) _endRunningModallyIfNecessary;
 - (id) bodyTextLabel;
 - (void) _setAccessoryViewController:(id)a ;
 - (id) initWithTitle:(id)a buttons:(id)b defaultButtonIndex:(int)c delegate:(id)d context:(id)e ;
 - (id) initWithTitle:(id)a message:(id)b delegate:(id)c defaultButton:(id)d cancelButton:(id)e otherButtons:(id)f ;
 - (id) initWithTitle:(id)a message:(id)b delegate:(id)c cancelButtonTitle:(id)d otherButtonTitles:(id)e ;
 - (void) _changeButtonTitleAtIndex:(long long)a toTitle:(id)b ;
 - (void) setBodyText:(id)a ;
 - (id) bodyText;
 - (void) setTaglineText:(id)a ;
 - (void) setAlertViewStyle:(long long)a ;
 - (id) _addButtonWithTitleText:(id)a ;
 - (id) _addButtonWithTitle:(id)a ;
 - (id) _addButtonWithTitle:(id)a label:(id)b buttonClass:(Class)c ;
 - (id) addButtonWithTitle:(id)a label:(id)b ;
 - (id) addButtonWithTitle:(id)a buttonClass:(Class)b ;
 - (void) _setDefaultButton:(id)a ;
 - (void) _setDestructiveButton:(id)a ;
 - (id) _destructiveButton;
 - (id) buttonAtIndex:(long long)a ;
 - (void) _updateButtonTitles;
 - (id) _buttonAtIndex:(long long)a ;
 - (id) buttonTitleAtIndex:(long long)a ;
 - (int) buttonCount;
 - (void) setGroupsTextFields:(BOOL)a ;
 - (BOOL) groupsTextFields;
 - (void) popupAlertAnimated:(BOOL)a atOffset:(double)b ;
 - (void) popupAlertAnimated:(BOOL)a animationType:(int)b ;
 - (void) popupAlertAnimated:(BOOL)a ;
 - (void) _presentSheetFromView:(id)a above:(BOOL)b ;
 - (void) presentSheetFromBehindView:(id)a ;
 - (void) presentSheetFromAboveView:(id)a ;
 - (void) presentSheetInView:(id)a ;
 - (void) presentSheetToAboveView:(id)a ;
 - (void) showWithAnimationType:(int)a ;
 - (void) _presentSheetStartingFromYCoordinate:(double)a ;
 - (void) presentSheetFromButtonBar:(id)a ;
 - (void) _performPopup:(BOOL)a ;
 - (BOOL) requiresPortraitOrientation;
 - (long long) _currentOrientation;
 - (void) layoutAnimated:(BOOL)a ;
 - (void) setSuspendTag:(int)a ;
 - (int) suspendTag;
 - (void) setTitleMaxLineCount:(int)a ;
 - (int) titleMaxLineCount;
 - (void) setBodyTextMaxLineCount:(int)a ;
 - (int) bodyMaxLineCount;
 - (void) setTableShouldShowMinimumContent:(BOOL)a ;
 - (BOOL) tableShouldShowMinimumContent;
 - (id) tableView;
 - (void) setShowsOverSpringBoardAlerts:(BOOL)a ;
 - (BOOL) showsOverSpringBoardAlerts;
 - (BOOL) _canShowAlerts;
 - (id) taglineTextLabel;
 - (BOOL) isBodyTextTruncated;
 - (void) setDimView:(id)a ;
 - (id) _dimView;
 - ({CGSize=dd}) backgroundSize;
 - (void) setNumberOfRows:(long long)a ;
 - (void) setAlertSheetStyle:(int)a ;
 - (int) alertSheetStyle;
 - (void) setForceHorizontalButtonsLayout:(BOOL)a ;
 - (BOOL) forceHorizontalButtonsLayout;
 - (void) setDimsBackground:(BOOL)a ;
 - (BOOL) dimsBackground;
 - (void) setRunsModal:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) titleRect;
 - (double) _buttonHeight;
 - (int) numberOfLinesInTitle;
 - (void) _prepareForDisplay;
 - (void) replaceAlert:(id)a ;
 - (id) _representedModalItemView;
 - (id) _representedModalItem;
 - (void) _showByReplacingAlert:(id)a animated:(BOOL)b ;
 - (BOOL) _shouldUseUndoStyle;
 - (void) setKeyboardShowsOnPopup:(BOOL)a ;
 - (void) _prepareToBeReplaced;
 - (void) _updateFrameForDisplay;
 - (BOOL) _isSBAlert;
 - (void) _useLegacyUI:(BOOL)a ;
 - (void) _showByReplacingPreviousAlertAnimated:(BOOL)a ;
 - (id) _externalViewControllerForPresentation;
 - (void) _setExternalViewControllerForPresentation:(id)a ;
 - (id) delegate;
 - (id) window;
 - (void) layout;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setContext:(id)a ;
 - (BOOL) isVisible;
 - (id) context;


@end
