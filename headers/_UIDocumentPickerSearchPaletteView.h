
@protocol UISearchBarDelegate;
@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate> {

    @"_UINavigationControllerPalette" _palette;
    @"_UIDocumentPickerSearchContainerModel" _searchModel;
    @"UISearchController" _searchController;
    @"_UIDocumentPickerContainerViewController" _resultsController;
    @"NSLayoutConstraint" _searchFieldLeftConstraint;
    @"NSLayoutConstraint" _searchFieldRightConstraint;
}

 - (void) dealloc;
 - (void) willMoveToSuperview:(id)a;
 - (void) searchBar:(id)atextDidChange:(id)b;
 - (void) searchBarTextDidBeginEditing:(id)a;
 - (id) serviceViewController;
 - (void) setPalette:(id)a;
 - (void) setSearchModel:(id)a;
 - (id) searchModel;
 - (void) setResultsController:(id)a;
 - (id) resultsController;
 - (void) setSearchController:(id)a;
 - (id) searchController;
 - (id) palette;
 - (void) searchCanceled:(id)a;
 - (id) searchFieldLeftConstraint;
 - (void) setSearchFieldLeftConstraint:(id)a;
 - (id) searchFieldRightConstraint;
 - (void) setSearchFieldRightConstraint:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
