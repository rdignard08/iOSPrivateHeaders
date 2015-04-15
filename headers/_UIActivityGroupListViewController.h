
@interface _UIActivityGroupListViewController : UICollectionViewController {

    BOOL _darkStyleOnLegacyApp;
    BOOL _embedded;
    NSArray* _activityGroupViewControllers;
    NSArray* _visibleActivityGroupViewControllers;
    UILabel* _placeholderLabel;
}

 - (void) dealloc;
 - (long long) collectionView:(id)a numberOfItemsInSection:(long long)b ;
 - (id) collectionView:(id)a cellForItemAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInCollectionView:(id)a ;
 - (id) collectionView:(id)a viewForSupplementaryElementOfKind:(id)b atIndexPath:(id)c ;
 - (void) collectionView:(id)a willDisplayCell:(id)b forItemAtIndexPath:(id)c ;
 - (void) preferredContentSizeDidChangeForChildContentContainer:(id)a ;
 - ({CGSize=dd}) collectionView:(id)a layout:(id)b sizeForItemAtIndexPath:(id)c ;
 - (void) viewDidLoad;
 - ({CGSize=dd}) collectionView:(id)a layout:(id)b referenceSizeForFooterInSection:(long long)c ;
 - (BOOL) darkStyleOnLegacyApp;
 - (void) setDarkStyleOnLegacyApp:(BOOL)a ;
 - (BOOL) isEmbedded;
 - (void) setEmbedded:(BOOL)a ;
 - (void) updateVisibleActivityGroupViewControllers;
 - (id) initWithActivityGroupViewControllers:(id)a embedded:(BOOL)b ;
 - (double) displayHeight;
 - (void) setActivityGroupViewControllers:(id)a ;
 - (void) setVisibleActivityGroupViewControllers:(id)a ;
 - (void) setPlaceholderLabel:(id)a ;
 - (id) activityGroupViewControllers;
 - (BOOL) isAirdropViewController:(id)a ;
 - (id) visibleActivityGroupViewControllers;
 - (BOOL) shouldShowNoActionsPlaceholder;
 - (id) placeholderLabel;
 - (id) viewControllerForItemAtIndexPath:(id)a ;
 - (double) preferredContentHeightForViewController:(id)a ;


@end
