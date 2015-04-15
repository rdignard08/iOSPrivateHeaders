
@interface _UIModalItem : NSObject {

    @"NSString" _title;
    @"NSString" _message;
    @"NSString" _cancelButtonTitle;
    @"NSString" _defaultButtonTitle;
    @"NSAttributedString" _titleAttributedString;
    @"NSAttributedString" _messageAttributedString;
    @"NSString" _subtitleString;
    long long _titleMaxLineNumber;
    long long _messageMaxLineNumber;
    long long _numberOfButtonsRows;
    BOOL _useUndoStyle;
    BOOL _useWifiPickerLayout;
    BOOL _textFieldsHidden;
    BOOL _dontUpdateFrameForKBChanges;
    @"NSMutableArray" _otherButtonsTitles;
    long long _itemType;
    @"<UIModalItemDelegate>" _delegate;
    @? _completionBlock;
    long long _modalItemInputStyle;
    @"UIView" _popoverTargetView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _popoverTargetRect;
    @"UIViewController" _contentViewController;
    {CGSize="width"d"height"d} _contentViewControllerSize;
    long long _presentAnimationType;
    long long _dismissAnimationType;
    BOOL _isPresented;
    BOOL _isVisible;
    BOOL _isBeingDismissed;
    BOOL _isHidden;
    @"UIViewController" _viewController;
    @"UIViewController" _hostingViewController;
    @"UIViewController" _anchorViewController;
    long long _defaultButtonIndex;
    long long _cancelButtonIndex;
    @"_UIModalItemContentView" _contentView;
    @"_UIModalItemBackgroundView" _backgroundView;
    @"_UIModalItemRepresentationView" _representedView;
    @"NSString" _loginString;
    @"NSString" _passwordString;
    @"NSString" _loginPlaceholderString;
    @"NSString" _passwordPlaceholderString;
    @"UITextInputTraits" _passwordTraits;
    @"UITextInputTraits" _loginTraits;
    BOOL _enableFirstOtherButton;
    BOOL _forceVerticalLayout;
    long long _dismissIndex;
    long long cancelButtonIndex;
    @"NSArray" _buttonTitles;
}
@property (nonatomic, copy, readwrite) NSString* title;
@property (nonatomic, copy, readwrite) NSString* message;
@property (nonatomic, assign, readwrite) NSNumber* type;
@property (nonatomic, assign, readwrite) UIView* targetView;
@property (nonatomic, assign, readwrite) NSNumber* targetRect;
@property (atomic, assign, readonly) NSNumber* isPresented;
@property (nonatomic, assign, readwrite) NSNumber* enableFirstOtherButton;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, copy, readwrite) NSArray* buttonTitles;
@property (nonatomic, assign, readwrite) NSNumber* cancelButtonIndex;
@property (nonatomic, assign, readwrite) NSNumber* defaultButtonIndex;
@property (nonatomic, assign, readwrite) NSNumber* forceVerticalLayout;
@property (nonatomic, assign, readwrite) NSNumber* modalItemInputStyle;
@property (nonatomic, copy, readwrite) NSString* loginString;
@property (nonatomic, copy, readwrite) NSString* passwordString;
@property (nonatomic, copy, readwrite) NSString* loginPlaceholderString;
@property (nonatomic, copy, readwrite) NSString* passwordPlaceholderString;
@property (nonatomic, assign, readonly) UIViewController* viewController;
@property (nonatomic, retain, readwrite) UIViewController* contentViewController;
@property (nonatomic, assign, readwrite) NSNumber* contentViewControllerSize;
@property (nonatomic, assign, readwrite) NSNumber* presentAnimationType;
@property (nonatomic, assign, readwrite) NSNumber* dismissAnimationType;
@property (nonatomic, retain, readwrite, _viewController, _setViewController:) UIViewController* _viewController;
@property (nonatomic, copy, readwrite) NSAttributedString* titleAttributedString;
@property (nonatomic, copy, readwrite) NSAttributedString* messageAttributedString;
@property (nonatomic, copy, readwrite) NSString* subtitleString;
@property (nonatomic, assign, readwrite) NSNumber* titleMaxLineNumber;
@property (nonatomic, assign, readwrite) NSNumber* messageMaxLineNumber;
@property (nonatomic, assign, readwrite) NSNumber* numberOfButtonsRows;
@property (nonatomic, assign, readwrite) NSNumber* useUndoStyle;
@property (nonatomic, assign, readwrite) NSNumber* useWifiPickerLayout;
@property (nonatomic, assign, readwrite) NSNumber* textFieldsHidden;
@property (nonatomic, retain, readwrite) _UIModalItemContentView* contentView;
@property (nonatomic, retain, readwrite) _UIModalItemBackgroundView* backgroundView;
@property (nonatomic, assign, readwrite) NSNumber* isBeingDismissed;
@property (nonatomic, assign, readwrite) NSNumber* dismissIndex;
@property (nonatomic, assign, readwrite) NSNumber* isHidden;
@property (nonatomic, assign, readwrite) NSNumber* dontUpdateFrameForKBChanges;
 + (id) modalItemWithType:(long long)atitle:(id)bmessage:(id)cbuttonTitles:(id)dcompletion:(@?)e;

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (void) setType:(long long)a;
 - (void) setDelegate:(id)a;
 - (id) _backgroundView;
 - (long long) cancelButtonIndex;
 - (long long) addButtonWithTitle:(id)a;
 - (void) setCancelButtonIndex:(long long)a;
 - (BOOL) isBeingDismissed;
 - (void) setBackgroundView:(id)a;
 - (id) backgroundView;
 - (id) subtitleString;
 - (id) message;
 - (long long) modalItemInputStyle;
 - (id) _cancelButtonTitle;
 - (id) _otherButtonsTitles;
 - (id) contentViewController;
 - (long long) defaultButtonIndex;
 - (id) textFieldAtIndex:(long long)a;
 - (id) _passwordTraits;
 - (id) passwordPlaceholderString;
 - (double) _maxWidth;
 - (double) _maxHeight;
 - (void) _passwordFieldTextDidChange;
 - (void) _loginFieldTextDidChange;
 - (BOOL) enableFirstOtherButton;
 - (void) setEnableFirstOtherButton:(BOOL)a;
 - (id) titleAttributedString;
 - (long long) numberOfButtonsRows;
 - (BOOL) forceVerticalLayout;
 - (BOOL) useUndoStyle;
 - (BOOL) useWifiPickerLayout;
 - (long long) titleMaxLineNumber;
 - (long long) messageMaxLineNumber;
 - ({CGSize=dd}) contentViewControllerSize;
 - (BOOL) textFieldsHidden;
 - (void) setDontUpdateFrameForKBChanges:(BOOL)a;
 - (id) _viewController;
 - (id) viewController;
 - (BOOL) dontUpdateFrameForKBChanges;
 - (id) _representedView;
 - (void) _setRepresentedView:(id)a;
 - (long long) presentAnimationType;
 - (void) setIsHidden:(BOOL)a;
 - (void) setMessage:(id)a;
 - (void) setContentViewController:(id)a;
 - (void) setDefaultButtonIndex:(long long)a;
 - (id) initWithTitle:(id)amessage:(id)botherButtonTitles:(id)ccompletion:(@?)ddelegate:(id)e;
 - (void) _updateContentView;
 - (void) setPasswordString:(id)a;
 - (void) setLoginString:(id)a;
 - (id) buttonTitleAtIndex;
 - (id) _popoverBackgroundView;
 - (void) _setViewController:(id)a;
 - (id) _hostingViewController;
 - (void) _setHostingViewController:(id)a;
 - (id) _anchorViewController;
 - (void) _setAnchorViewController:(id)a;
 - (id) _typeKey;
 - (id) _defaultButtonTitle;
 - (void) setSubtitleString:(id)a;
 - (void) refreshButtonTitle;
 - (void) setTextFieldsHidden:(BOOL)a;
 - (id) _loginTraits;
 - (void) setModalItemInputStyle:(long long)a;
 - (BOOL) isPresented;
 - (void) setIsBeingDismissed:(BOOL)a;
 - (long long) dismissIndex;
 - (void) setDismissIndex:(long long)a;
 - (id) targetView;
 - (void) setTargetView:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) targetRect;
 - (void) setTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setPresentAnimationType:(long long)a;
 - (long long) dismissAnimationType;
 - (void) setDismissAnimationType:(long long)a;
 - (id) loginString;
 - (id) passwordString;
 - (id) loginPlaceholderString;
 - (void) setLoginPlaceholderString:(id)a;
 - (void) setPasswordPlaceholderString:(id)a;
 - (void) setContentViewControllerSize:({CGSize=dd})a;
 - (void) setTitleAttributedString:(id)a;
 - (id) messageAttributedString;
 - (void) setMessageAttributedString:(id)a;
 - (void) setTitleMaxLineNumber:(long long)a;
 - (void) setMessageMaxLineNumber:(long long)a;
 - (void) setNumberOfButtonsRows:(long long)a;
 - (void) setUseUndoStyle:(BOOL)a;
 - (void) setUseWifiPickerLayout:(BOOL)a;
 - (id) buttonTitles;
 - (void) setButtonTitles:(id)a;
 - (void) setForceVerticalLayout:(BOOL)a;
 - (id) delegate;
 - (long long) type;
 - (id) contentView;
 - (void) setContentView:(id)a;
 - (BOOL) isHidden;
 - (id) _contentView;


@end
