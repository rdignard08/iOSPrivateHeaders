
@protocol UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate;
@interface _UIModalItemContentView : UIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

    _UIModalItem* _modalItem;
    UILabel* _titleLabel;
    UILabel* _subtitleLabel;
    UILabel* _messageLabel;
    UITextField* _loginTextField;
    UITextField* _passwordTextField;
    UIViewController* _accessoryViewController;
    {CGSize="width"d"height"d} _accessoryViewControllerSize;
    UIView* _accessoryViewControllerContrainerView;
    {CGSize="width"d"height"d} _actualViewControllerSize;
    UIButton* _cancelButton;
    UIButton* _defaultButton;
    long long _cancelButtonIndex;
    long long _defaultButtonIndex;
    UITableView* _buttonTable;
    {CGSize="width"d"height"d} _presentingSize;
    _UIModalItemsPresentingViewController* _presentingViewController;
    {CGSize="width"d"height"d} _maxSize;
    BOOL _enableFirstOtherButton;
}

 - (void) dealloc;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) cancelButtonIndex;
 - (id) presentingViewController;
 - ({CGSize=dd}) maxSize;
 - (id) titleLabel;
 - (void) setModalItem:(id)a skipLayout:(BOOL)b ;
 - (void) _createAndConfigureTitleLabel;
 - (void) _createAndConfigureSubtitleLabel;
 - (void) _createAndConfigureMessageLabel;
 - (void) _createAndConfigureTextFieldsForInputStyle:(long long)a ;
 - (void) _createAndConfigureButtonTable;
 - (void) _createViewControllerContentView;
 - (long long) defaultButtonIndex;
 - (id) modalItem;
 - (void) textFieldValueDidChange:(id)a ;
 - (id) passwordTextField;
 - (id) loginTextField;
 - (void) setModalItem:(id)a ;
 - (void) _reloadButtons;
 - ({CGSize=dd}) presentingSize;
 - (void) setPresentingSize:({CGSize=dd})a ;
 - (void) setPresentingViewController:(id)a ;
 - ({CGSize=dd}) actualViewControllerSize;
 - (void) setActualViewControllerSize:({CGSize=dd})a ;
 - (BOOL) enableFirstOtherButton;
 - (void) setEnableFirstOtherButton:(BOOL)a ;
 - (id) subtitleLabel;
 - (id) messageLabel;
 - (id) accessoryViewController;
 - ({CGSize=dd}) accessoryViewControllerSize;
 - (id) accessoryViewControllerContrainerView;
 - (id) cancelButton;
 - (void) setCancelButton:(id)a ;
 - (id) defaultButton;
 - (void) setDefaultButton:(id)a ;
 - (id) buttonTable;
 - (void) setMaxSize:({CGSize=dd})a ;
 - (void) layout;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
