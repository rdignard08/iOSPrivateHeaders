
@protocol _UITextDocumentInterfaceDelegate, UITextInputDelegate;
@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate> {

    BOOL _alignsToContentViewController;
    NSObject<UITextDocumentProxy>* _textDocumentProxy;
    NSString* _primaryLanguage;
}
 + (BOOL) _requiresProxyInterface;

 - (void) dealloc;
 - (void) didReceiveMemoryWarning;
 - (void) setView:(id)a ;
 - (id) initWithNibName:(id)a bundle:(id)b ;
 - (void) loadView;
 - (void) textWillChange:(id)a ;
 - (void) textDidChange:(id)a ;
 - (void) viewDidLoad;
 - (void) _setExtensionContext:(id)a ;
 - ({CGSize=dd}) _systemLayoutSizeFittingSize:({CGSize=dd})a withHorizontalFittingPriority:(float)b verticalFittingPriority:(float)c ;
 - (id) inputView;
 - (void) setInputView:(id)a ;
 - (id) primaryLanguage;
 - (void) selectionWillChange:(id)a ;
 - (void) selectionDidChange:(id)a ;
 - (void) setPrimaryLanguage:(id)a ;
 - (void) dismissKeyboard;
 - (id) _keyboard;
 - (id) _compatibilityController;
 - (void) _willResetDocumentState;
 - (void) _didResetDocumentState;
 - (void) _setupInputController;
 - (id) _proxyInterface;
 - (id) _textDocumentInterface;
 - (id) textDocumentProxy;
 - (void) _setTextDocumentProxy:(id)a ;
 - (id) _extensionContext;
 - (BOOL) _shouldForwardSystemLayoutFittingSizeChanges;
 - (void) advanceToNextInputMode;
 - (void) returnToPreviousInputMode;
 - (void) requestSupplementaryLexiconWithCompletion:(@?)a ;
 - (BOOL) _alignsToContentViewController;
 - (void) set_alignsToContentViewController:(BOOL)a ;
 - (id) initWithCoder:(id)a ;


@end
