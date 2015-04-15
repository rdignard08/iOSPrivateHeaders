
@protocol UIPopoverControllerDelegate;
@interface UIActionSheet : UIView <UIPopoverControllerDelegate> {

    @"UIAlertController" _alertController;
    @"_UIAlertControllerShimPresenter" _presenter;
    @"NSMutableArray" _actions;
    q _cancelIndex;
    q _firstOtherButtonIndex;
    q _destructiveButtonIndex;
    q _actionSheetStyle;
    id _context;
    BOOL _hasPreparedAlertActions;
    BOOL _isPresented;
    BOOL _alertControllerShouldDismiss;
    BOOL _handlingAlertActionShouldDismiss;
    BOOL _dismissingAlertController;
    @"_UIWeakRef" _weakDelegate;
}
 + (BOOL) _isAlertControllerShimClass;
 + (Class) _popoverControllerClass;

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (q) cancelButtonIndex;
 - (void) dismissWithClickedButtonIndex:(q)aanimated:(BOOL)b;
 - (q) addButtonWithTitle:(id)a;
 - (void) setCancelButtonIndex:(q)a;
 - (id) message;
 - (id) _titleLabel;
 - (id) subtitle;
 - (void) showInView:(id)a;
 - (void) setSubtitle:(id)a;
 - (void) setMessage:(id)a;
 - (void) popoverControllerDidDismissPopover:(id)a;
 - (void) setDefaultButtonIndex:(q)a;
 - (q) firstOtherButtonIndex;
 - (void) _setFirstOtherButtonIndex:(q)a;
 - (void) _dismissForTappedIndex:(q)a;
 - (BOOL) _prepareToDismissForTappedIndex:(q)a;
 - (id) _preparedAlertActionAtIndex:(Q)a;
 - (void) setWeakDelegate:(id)a;
 - (id) weakDelegate;
 - (id) _alertController;
 - (void) _performPresentationDismissalWithClickedButtonIndex:(q)aanimated:(BOOL)b;
 - (void) _prepareAlertActions;
 - (q) numberOfButtons;
 - (void) _setIsPresented:(BOOL)a;
 - (void) setBodyText:(id)a;
 - (id) bodyText;
 - (void) setTaglineText:(id)a;
 - (id) addButtonWithTitle:(id)alabel:(id)b;
 - (id) buttonAtIndex:(q)a;
 - (id) _buttonAtIndex:(q)a;
 - (id) buttonTitleAtIndex:(q)a;
 - (void) presentSheetInView:(id)a;
 - (void) setTitleMaxLineCount:(i)a;
 - (void) setDimView:(id)a;
 - (void) setDimsBackground:(BOOL)a;
 - (i) numberOfLinesInTitle;
 - (BOOL) _isSBAlert;
 - (id) _addButtonWithTitle:(id)alabel:(id)b;
 - (void) setDestructiveButtonIndex:(q)a;
 - (void) _didPresent;
 - (void) _showFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)bdirection:(Q)canimated:(BOOL)d;
 - (void) showFromBarButtonItem:(id)aanimated:(BOOL)b;
 - (void) setIndexOfSelectedButton:(q)a;
 - (id) initWithTitle:(id)adelegate:(id)bcancelButtonTitle:(id)cdestructiveButtonTitle:(id)dotherButtonTitles:(id)e;
 - (void) setActionSheetStyle:(q)a;
 - (q) actionSheetStyle;
 - (q) destructiveButtonIndex;
 - (void) showFromToolbar:(id)a;
 - (void) showFromTabBar:(id)a;
 - (void) showFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)banimated:(BOOL)c;
 - (void) presentFromBarButtonItem:(id)adirection:(Q)ballowInteractionWithViews:(id)cbackgroundStyle:(q)danimated:(BOOL)e;
 - (void) presentFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)bdirection:(Q)callowInteractionWithViews:(id)dbackgroundStyle:(q)eanimated:(BOOL)f;
 - (id) _relinquishPopoverController;
 - (void) presentSheetInContentView:(id)a;
 - (void) setInPopover:(BOOL)a;
 - (void) setUseThreeColumnsButtonsLayout:(BOOL)a;
 - (BOOL) useThreeColumnsButtonsLayout;
 - (void) _setIndexesOfSelectedButtons:(id)a;
 - (void) _toggleButtonSelectionAtIndex:(Q)a;
 - (id) _indexesOfSelectedButtons;
 - (void) setSelectedButtonGlyphImage:(id)a;
 - (void) setSelectedButtonGlyphHighlightedImage:(id)a;
 - (void) _setAttributedTitleString:(id)a;
 - (id) _attributedTitleString;
 - (void) _setContentView:(id)a;
 - (id) addMediaButtonWithTitle:(id)aiconView:(id)bandTableIconView:(id)c;
 - (id) _addMediaButtonWithTitle:(id)aiconView:(id)bandTableIconView:(id)c;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setContext:(id)a;
 - (id) _contentView;
 - (BOOL) isVisible;
 - (id) context;


@end