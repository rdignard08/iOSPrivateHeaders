
@protocol UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate;
@interface UIReferenceLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate> {

    NSString* _term;
    NSArray* _definitionValues;
    UINavigationController* _baseNavController;
    UITableViewController* _multiDefViewController;
    UIViewController* _longDefViewController;
    long long _oldPopoverStyle;
    UIWindow* _rotationDecider;
    @? _dismissCompletionHandler;
}
 + (id) _backgroundColor;
 + (BOOL) _shouldShowDefineForTerm:(id)a;
 + (id) _foregroundColor;
 + (id) _colorAttributes;
 + (id) _diddlyDoViewLineColor;
 + (id) _defaultButtonImage;
 + (id) _pressedButtonImage;
 + (id) _localizedDictionaryTitleAttributes;
 + (id) _dictionaryDefinitionAttributes;
 + (BOOL) dictionaryHasDefinitionForTerm:(id)a;
 + (id) _popoverControllerForReferenceLibraryWithString:(id)a;
 + (id) _viewControllerForReferenceWithString:(id)aoptions:(unsigned long long)b;

 - (void) dealloc;
 - (double) tableView:(id)a heightForRowAtIndexPath:(id)b ;
 - (id) tableView:(id)a willSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (id) tableView:(id)a titleForHeaderInSection:(long long)b ;
 - (unsigned long long) supportedInterfaceOrientations;
 - (id) _backgroundColor;
 - (id) initWithNibName:(id)a bundle:(id)b ;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) _setPopoverController:(id)a ;
 - (void) viewDidLoad;
 - (void) _willBecomeContentViewControllerOfPopover:(id)a ;
 - (void) _didResignContentViewControllerOfPopover:(id)a ;
 - (void) navigationController:(id)a willShowViewController:(id)b animated:(BOOL)c ;
 - (id) _foregroundColor;
 - (@?) dismissCompletionHandler;
 - (void) setDismissCompletionHandler:(@?)a ;
 - (id) _colorAttributes;
 - (id) initWithTerm:(id)a ;
 - (void) _dismissModalReferenceView:(id)a ;
 - (void) _setRotationDecider:(id)a ;
 - (void) pushDownloadManager:(id)a ;
 - (void) _searchWeb:(id)a ;
 - (void) _installRequiredElementsOnViewController:(id)a ;
 - (id) _diddlyDoViewLineColor;
 - (id) _defaultButtonImage;
 - (id) _pressedButtonImage;
 - (id) _localizedDictionaryTitleAttributes;
 - (id) _dictionaryDefinitionAttributes;
 - (id) _rotationDecider;


@end
