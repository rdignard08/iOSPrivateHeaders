
@interface _UIActivityGroupListViewController : UICollectionViewController {

    BOOL _darkStyleOnLegacyApp;
    BOOL _embedded;
    @"NSArray" _activityGroupViewControllers;
    @"NSArray" _visibleActivityGroupViewControllers;
    @"UILabel" _placeholderLabel;
}

 - (void) dealloc;
 - (q) collectionView:(id)anumberOfItemsInSection:(q)b;
 - (id) collectionView:(id)acellForItemAtIndexPath:(id)b;
 - (q) numberOfSectionsInCollectionView:(id)a;
 - (id) collectionView:(id)aviewForSupplementaryElementOfKind:(id)batIndexPath:(id)c;
 - (void) collectionView:(id)awillDisplayCell:(id)bforItemAtIndexPath:(id)c;
 - (void) preferredContentSizeDidChangeForChildContentContainer:(id)a;
 - ({CGSize=dd}) collectionView:(id)alayout:(id)bsizeForItemAtIndexPath:(id)c;
 - (void) viewDidLoad;
 - ({CGSize=dd}) collectionView:(id)alayout:(id)breferenceSizeForFooterInSection:(q)c;
 - (BOOL) darkStyleOnLegacyApp;
 - (void) setDarkStyleOnLegacyApp:(BOOL)a;
 - (BOOL) isEmbedded;
 - (void) setEmbedded:(BOOL)a;
 - (void) updateVisibleActivityGroupViewControllers;
 - (id) initWithActivityGroupViewControllers:(id)aembedded:(BOOL)b;
 - (d) displayHeight;
 - (void) setActivityGroupViewControllers:(id)a;
 - (void) setVisibleActivityGroupViewControllers:(id)a;
 - (void) setPlaceholderLabel:(id)a;
 - (id) activityGroupViewControllers;
 - (BOOL) isAirdropViewController:(id)a;
 - (id) visibleActivityGroupViewControllers;
 - (BOOL) shouldShowNoActionsPlaceholder;
 - (id) placeholderLabel;
 - (id) viewControllerForItemAtIndexPath:(id)a;
 - (d) preferredContentHeightForViewController:(id)a;


@end
