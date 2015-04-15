
@protocol UITextDocumentProxy;
@interface _UITextDocumentInterface : UIInputViewControllerInterface <UITextDocumentProxy> {

    <_UITextDocumentInterfaceDelegate> _delegate;
    _UIInputViewControllerState _controllerState;
    _UIInputViewControllerOutput _controllerOutput;
    TIKeyboardOutput _keyboardOutput;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) _textInputTraits;
 - (BOOL) hasText;
 - (void) deleteBackward;
 - (BOOL) isSecureTextEntry;
 - (void) _handleInputViewControllerState:(id)a;
 - (void) setForwardingInterface:(id)a;
 - (id) _controllerState;
 - (void) _createControllerOutputIfNecessary;
 - (id) _documentState;
 - (void) _willPerformOutputOperation;
 - (id) _controllerOutput;
 - (void) _didPerformOutputOperation;
 - (void) adjustTextPositionByCharacterOffset:(long long)a;
 - (void) setControllerState:(id)a;
 - (void) setControllerOutput:(id)a;
 - (id) documentContextBeforeInput;
 - (id) documentContextAfterInput;
 - (void) _setPrimaryLanguage:(id)a;
 - (void) _setShouldDismiss;
 - (void) _setShouldAdvanceInputMode;
 - (id) _keyboardOutput;
 - (id) _delegate;
 - (long long) keyboardType;
 - (long long) autocapitalizationType;
 - (long long) autocorrectionType;
 - (long long) spellCheckingType;
 - (long long) keyboardAppearance;
 - (long long) returnKeyType;
 - (BOOL) enablesReturnKeyAutomatically;
 - (void) insertText:(id)a;


@end
