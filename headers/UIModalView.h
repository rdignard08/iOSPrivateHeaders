
@protocol UITextFieldDelegate;
@interface UIModalView : UIView <UITextFieldDelegate> {

    <UIModalViewDelegate>* _delegate;
    UILabel* _titleLabel;
    UILabel* _subtitleLabel;
    UILabel* _bodyTextLabel;
    UILabel* _taglineTextLabel;
    double _startX;
    double _startY;
    id _context;
    long long _cancelButton;
    long long _defaultButton;
    long long _firstOtherButton;
    UIToolbar* _toolbar;
    UIWindow* _originalWindow;
    UIWindow* _dimWindow;
    long long _suspendTag;
    long long _dismissButtonIndex;
    double _bodyTextHeight;
    NSMutableArray* _buttons;
    NSMutableArray* _textFields;
    UIView* _keyboard;
    UIView* _table;
    UIView* _dimView;
    UIView* _sheetView;
    {?="numberOfRows"b7"delegateAlertSheetButtonClicked"b1"delegateDidPresentAlertSheet"b1"delegateDidDismissAlertSheet"b1"hideButtonBar"b1"alertStyle"b3"dontDimBackground"b1"dismissSuspended"b1"dontBlockInteraction"b1"sheetWasPoppedUp"b1"animating"b1"hideWhenDoneAnimating"b1"layoutWhenDoneAnimating"b1"titleMaxLineCount"b2"bodyTextMaxLineCount"b3"runsModal"b1"runningModal"b1"addedTextView"b1"addedTableShadows"b1"showOverSBAlerts"b1"showMinTableContent"b1"bodyTextTruncated"b1"orientation"b3"groupsTextFields"b1"delegateBodyTextAlignment"b1"delegateClickedButtonAtIndex"b1"delegateCancel"b1"delegateWillPresent"b1"delegateDidPresent"b1"delegateWillDismiss"b1"delegateDidDismiss"b1"popupFromPoint"b1"extra"b20"dontCallDismissDelegate"b1"useAutomaticKB"b1"shouldHandleFirstKeyUpEvent"b1"cancelWhenDoneAnimating"b1} _modalViewFlags;
}
 + (void) noteOrientationChangingTo:(long long)a;
 + ({CGSize=dd}) minimumSize;
 + (id) _popupAlertBackground;
 + (id) visibleAlert;
 + (BOOL) atLeastOneAlertVisible;
 + (id) topMostAlert;

 - (id) title;
 - (void) setTitle:(id)a ;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (long long) cancelButtonIndex;
 - (void) dismissWithClickedButtonIndex:(long long)a animated:(BOOL)b ;
 - (long long) addButtonWithTitle:(id)a ;
 - (void) setCancelButtonIndex:(long long)a ;
 - (void) _handleKeyUIEvent:(id)a ;
 - (BOOL) canBecomeFirstResponder;
 - (long long) numberOfRows;
 - (BOOL) _isAnimating;
 - (id) message;
 - (long long) defaultButtonIndex;
 - (id) textFieldAtIndex:(long long)a ;
 - (double) _maxHeight;
 - (id) defaultButton;
 - (void) setDefaultButton:(id)a ;
 - (id) _defaultButton;
 - (void) _keyboardWillShow:(id)a ;
 - (void) _keyboardWillHide:(id)a ;
 - (void) userDidCancelPopoverView:(id)a ;
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
 - (id) addTextFieldWithValue:(id)a label:(id)b ;
 - (BOOL) runsModal;
 - (long long) numberOfButtons;
 - (long long) textFieldCount;
 - (id) textField;
 - (id) initWithTitle:(id)a buttons:(id)b defaultButtonIndex:(long long)c delegate:(id)d context:(id)e ;
 - (id) initWithTitle:(id)a message:(id)b delegate:(id)c defaultButton:(id)d cancelButton:(id)e otherButtons:(id)f ;
 - (void) setBodyText:(id)a ;
 - (id) bodyText;
 - (void) setTaglineText:(id)a ;
 - (id) _addButtonWithTitleText:(id)a ;
 - (id) _addButtonWithTitle:(id)a ;
 - (id) addButtonWithTitle:(id)a label:(id)b ;
 - (void) _setDefaultButton:(id)a ;
 - (id) buttonTitleAtIndex:(long long)a ;
 - (long long) buttonCount;
 - (void) setGroupsTextFields:(BOOL)a ;
 - (BOOL) groupsTextFields;
 - (void) popupAlertAnimated:(BOOL)a atOffset:(double)b ;
 - (void) popupAlertAnimated:(BOOL)a ;
 - (void) _presentSheetFromView:(id)a above:(BOOL)b ;
 - (void) presentSheetFromBehindView:(id)a ;
 - (void) presentSheetFromAboveView:(id)a ;
 - (void) presentSheetInView:(id)a ;
 - (void) presentSheetToAboveView:(id)a ;
 - (void) _presentSheetStartingFromYCoordinate:(double)a ;
 - (void) presentSheetFromButtonBar:(id)a ;
 - (void) _performPopup:(BOOL)a ;
 - (BOOL) requiresPortraitOrientation;
 - (long long) _currentOrientation;
 - (void) layoutAnimated:(BOOL)a ;
 - (void) setSuspendTag:(long long)a ;
 - (long long) suspendTag;
 - (void) setTitleMaxLineCount:(long long)a ;
 - (long long) titleMaxLineCount;
 - (void) setBodyTextMaxLineCount:(long long)a ;
 - (long long) bodyMaxLineCount;
 - (void) setTableShouldShowMinimumContent:(BOOL)a ;
 - (BOOL) tableShouldShowMinimumContent;
 - (id) tableView;
 - (void) setShowsOverSpringBoardAlerts:(BOOL)a ;
 - (BOOL) showsOverSpringBoardAlerts;
 - (BOOL) _canShowAlerts;
 - (BOOL) isBodyTextTruncated;
 - (void) setDimView:(id)a ;
 - (id) _dimView;
 - ({CGSize=dd}) backgroundSize;
 - (void) setNumberOfRows:(long long)a ;
 - (void) setAlertSheetStyle:(int)a ;
 - (int) alertSheetStyle;
 - (void) setDimsBackground:(BOOL)a ;
 - (BOOL) dimsBackground;
 - (void) setRunsModal:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) titleRect;
 - (double) _buttonHeight;
 - (long long) numberOfLinesInTitle;
 - (void) _prepareForDisplay;
 - (void) replaceAlert:(id)a ;
 - (void) _prepareToBeReplaced;
 - (BOOL) _isSBAlert;
 - (void) _createBodyTextLabelIfNeeded;
 - (void) _createTaglineTextLabelIfNeeded;
 - (void) _createSubtitleLabelIfNeeded;
 - (void) _alertSheetTextFieldReturn:(id)a ;
 - (void) _buttonClicked:(id)a ;
 - (id) buttons;
 - (id) _addButtonWithTitle:(id)a label:(id)b ;
 - (BOOL) _needsKeyboard;
 - (void) _cancelAnimated:(BOOL)a ;
 - (void) _temporarilyHideAnimated:(BOOL)a ;
 - (void) _growAnimationDidStop:(id)a finished:(id)b ;
 - (void) _cleanupAfterPopupAnimation;
 - (void) _bubbleAnimationShrinkDidStop:(id)a finished:(id)b ;
 - (void) _bubbleAnimationNormalDidStop:(id)a finished:(id)b ;
 - (void) _removeAlertWindowOrShowAnOldAlert;
 - (void) _popoutAnimationDidStop:(id)a finished:(id)b ;
 - (void) _setupInitialFrame;
 - (void) _repopup;
 - (void) _hideAnimated:(BOOL)a ;
 - (void) _performPopoutAnimationAnimated:(BOOL)a ;
 - (void) _rotatingAnimationDidStop:(id)a ;
 - (void) layoutAnimated:(BOOL)a withDuration:(double)b ;
 - (void) _layoutPopupAlertWithOrientation:(long long)a animated:(BOOL)b ;
 - (void) _appSuspended:(id)a ;
 - (void) _setAlertSheetStyleFromButtonBar:(id)a ;
 - (void) _alertSheetAnimationDidStop:(id)a finished:(id)b ;
 - (void) _setupTitleStyle;
 - (double) _titleHorizontalInset;
 - (double) _titleVerticalTopInset;
 - (double) _titleVerticalBottomInset;
 - (double) _bottomVerticalInset;
 - (void) _truncateViewHeight:(id)a toFitInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b withMinimumHeight:(double)c ;
 - (void) _createTitleLabelIfNeeded;
 - (void) setDestructiveButton:(id)a ;
 - (id) destructiveButton;
 - (BOOL) _manualKeyboardIsVisible;
 - (void) _repopupNoAnimation;
 - (BOOL) _dimsBackground;
 - (void) popupAlertAnimated:(BOOL)a fromBarButtonItem:(id)b ;
 - (void) _slideSheetOut:(BOOL)a ;
 - (void) setBlocksInteraction:(BOOL)a ;
 - (BOOL) blocksInteraction;
 - (id) bodyTextView;
 - (id) taglineTextView;
 - (id) _initWithTelephoneNumber:(id)a buttons:(id)b defaultButtonIndex:(long long)c delegate:(id)d context:(id)e ;
 - (id) delegate;
 - (void) layout;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setContext:(id)a ;
 - (void) _layoutIfNeeded;
 - (BOOL) isVisible;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) context;


@end
