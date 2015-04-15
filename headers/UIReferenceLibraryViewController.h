
@protocol UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate;
@interface UIReferenceLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate> {

    @"NSString" _term;
    @"NSArray" _definitionValues;
    @"UINavigationController" _baseNavController;
    @"UITableViewController" _multiDefViewController;
    @"UIViewController" _longDefViewController;
    q _oldPopoverStyle;
    @"UIWindow" _rotationDecider;
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
 + (id) _viewControllerForReferenceWithString:(id)aoptions:(Q)b;

 - (void) dealloc;
 - (d) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (id) tableView:(id)awillSelectRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (id) tableView:(id)atitleForHeaderInSection:(q)b;
 - (Q) supportedInterfaceOrientations;
 - (id) _backgroundColor;
 - (id) initWithNibName:(id)abundle:(id)b;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) _setPopoverController:(id)a;
 - (void) viewDidLoad;
 - (void) _willBecomeContentViewControllerOfPopover:(id)a;
 - (void) _didResignContentViewControllerOfPopover:(id)a;
 - (void) navigationController:(id)awillShowViewController:(id)banimated:(BOOL)c;
 - (id) _foregroundColor;
 - (@?) dismissCompletionHandler;
 - (void) setDismissCompletionHandler:(@?)a;
 - (id) _colorAttributes;
 - (id) initWithTerm:(id)a;
 - (void) _dismissModalReferenceView:(id)a;
 - (void) _setRotationDecider:(id)a;
 - (void) pushDownloadManager:(id)a;
 - (void) _searchWeb:(id)a;
 - (void) _installRequiredElementsOnViewController:(id)a;
 - (id) _diddlyDoViewLineColor;
 - (id) _defaultButtonImage;
 - (id) _pressedButtonImage;
 - (id) _localizedDictionaryTitleAttributes;
 - (id) _dictionaryDefinitionAttributes;
 - (id) _rotationDecider;


@end
