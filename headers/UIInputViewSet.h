
@interface UIInputViewSet : NSObject {

    UIView* _inputView;
    UIView* _inputAccessoryView;
    BOOL _isSplit;
    double _splitHeightDelta;
    UIResponder* _restorableResponder;
    BOOL _restoreUsingBecomeFirstResponder;
    UIInputViewController* _inputViewController;
    UIInputViewController* _accessoryViewController;
}
@property (nonatomic, assign, readonly) UIKeyboard* keyboard;
@property (nonatomic, retain, readwrite) UIView* inputView;
@property (nonatomic, retain, readwrite) UIView* inputAccessoryView;
@property (nonatomic, retain, readwrite) UIInputViewController* inputViewController;
@property (nonatomic, retain, readwrite) UIInputViewController* accessoryViewController;
@property (nonatomic, assign, readonly) NSNumber* inputAccessoryViewBounds;
@property (nonatomic, assign, readonly) NSNumber* inputViewBounds;
@property (nonatomic, assign, readonly, getter=isEmpty) NSNumber* empty;
@property (nonatomic, assign, readonly) NSNumber* supportsSplit;
@property (nonatomic, assign, readonly) NSNumber* isSplit;
@property (nonatomic, assign, readonly) NSNumber* inputViewKeyboardCanSplit;
@property (nonatomic, assign, readwrite) UIResponder* restorableResponder;
@property (nonatomic, assign, readonly) NSNumber* isInputViewPlaceholder;
@property (nonatomic, assign, readonly) NSNumber* isInputAccessoryViewPlaceholder;
@property (nonatomic, assign, readonly) NSNumber* _inputViewIsSplit;
@property (nonatomic, assign, readwrite) NSNumber* splitHeightDelta;
@property (nonatomic, assign, readonly) UIView* splitExemptSubview;
@property (nonatomic, assign, readwrite) NSNumber* restoreUsingBecomeFirstResponder;
@property (nonatomic, assign, readonly) UIView* layeringView;
 + (id) emptyInputSet;
 + (id) inputSetWithKeyboardAndAccessoryView:(id)a;
 + (id) inputSetWithInputView:(id)aaccessoryView:(id)b;
 + (id) inputSetWithPlaceholderAndAccessoryView:(id)a;

 - (id) description;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (BOOL) isEqual:(id)a;
 - (BOOL) isSplit;
 - (BOOL) containsView:(id)a;
 - (id) accessoryViewController;
 - (id) inputView;
 - (id) inputAccessoryView;
 - (id) inputViewController;
 - (void) setInputView:(id)a;
 - (void) setInputAccessoryView:(id)a;
 - (void) _setRenderConfig:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) inputViewBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) inputAccessoryViewBounds;
 - (BOOL) supportsSplit;
 - (void) refreshPresentation;
 - (id) keyboard;
 - (id) _themableInputAccessoryView;
 - (long long) keyboardOrientation:(id)a;
 - (BOOL) inputViewKeyboardCanSplit;
 - (BOOL) _inputViewIsSplit;
 - (BOOL) _accessorySuppressesShadow;
 - (id) layeringView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _leftInputViewSetFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _rightInputViewSetFrame;
 - (void) setSplitHeightDelta:(double)a;
 - (BOOL) setAccessoryViewVisible:(BOOL)adelay:(double)b;
 - (void) _beginSplitTransitionIfNeeded;
 - (void) _setSplitProgress:(double)a;
 - (void) _endSplitTransitionIfNeeded;
 - (double) splitHeightDelta;
 - (BOOL) isStrictSupersetOfViewSet:(id)a;
 - (BOOL) isInputViewPlaceholder;
 - (BOOL) containsResponder:(id)a;
 - (id) _splittableInputAccessoryView;
 - (BOOL) canAnimateToInputViewSet:(id)a;
 - (void) setInputViewController:(id)a;
 - (void) setAccessoryViewController:(id)a;
 - (BOOL) usesKeyClicks;
 - (void) setRestorableResponder:(id)a;
 - (void) setRestoreUsingBecomeFirstResponder:(BOOL)a;
 - (id) restorableResponder;
 - (BOOL) restoreUsingBecomeFirstResponder;
 - (BOOL) _inputViewSetSupportsSplit;
 - (id) initWithInputView:(id)aaccessoryView:(id)bisKeyboard:(BOOL)c;
 - (BOOL) _inputViewIsVisible;
 - (BOOL) _isKeyboard;
 - (BOOL) _inputViewSupportsSplit;
 - (BOOL) _inputAccessoryViewSupportsSplit;
 - (BOOL) __isCKAccessoryView;
 - (id) inputSetWithInputAccessoryViewOnly;
 - (id) splitExemptSubview;
 - (BOOL) inSyncWithOrientation:(long long)aforKeyboard:(id)b;
 - (BOOL) isInputAccessoryViewPlaceholder;
 - (BOOL) visible;


@end
