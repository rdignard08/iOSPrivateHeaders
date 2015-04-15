
@protocol _UIActivityGroupViewDelegateFlowLayout, UIGestureRecognizerDelegate;
@interface UIActivityGroupViewController : UICollectionViewController <_UIActivityGroupViewDelegateFlowLayout, UIGestureRecognizerDelegate> {

    BOOL _darkStyleOnLegacyApp;
    BOOL _embedded;
    BOOL _picker;
    BOOL _hasActivities;
    BOOL _activityIndexDidChangeWhileDragging;
    BOOL _allowsUserCustomization;
    <UIActivityGroupViewControllerDelegate>* _delegate;
    long long _activityCategory;
    NSDictionary* _customActivityTitles;
    NSArray* _activities;
    <UIActivityGroupViewControllerDataSource>* _dataSource;
    NSArray* _visibleActivities;
    _UIActivityUserDefaults* _userDefaults;
    _UIUserDefaultsActivity* _userDefaultsActivity;
    _UIActivityGroupActivityCell* _prototypeActivityCell;
    UILongPressGestureRecognizer* _editingGestureRecognizer;
    NSIndexPath* _indexPathForMenuActivity;
    NSMutableDictionary* _cachedPreferredItemSizesByString;
    {CGPoint="x"d"y"d} _initialDraggingLocation;
}

 - (id) userDefaults;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (BOOL) gestureRecognizerShouldBegin:(id)a ;
 - (long long) collectionView:(id)a numberOfItemsInSection:(long long)b ;
 - (id) collectionView:(id)a cellForItemAtIndexPath:(id)b ;
 - (BOOL) collectionView:(id)a shouldHighlightItemAtIndexPath:(id)b ;
 - (BOOL) collectionView:(id)a shouldSelectItemAtIndexPath:(id)b ;
 - (void) collectionView:(id)a didSelectItemAtIndexPath:(id)b ;
 - (void) collectionView:(id)a willDisplayCell:(id)b forItemAtIndexPath:(id)c ;
 - (void) traitCollectionDidChange:(id)a ;
 - (BOOL) canBecomeFirstResponder;
 - (void) viewDidLayoutSubviews;
 - (void) setEditing:(BOOL)a animated:(BOOL)b ;
 - (void) viewDidLoad;
 - (id) initWithActivityCategory:(long long)a userDefaults:(id)b userDefaultsIdentifier:(id)c ;
 - (void) setAllowsUserCustomization:(BOOL)a ;
 - (void) setPicker:(BOOL)a ;
 - (void) setCachedPreferredItemSizesByString:(id)a ;
 - (void) setActivityCategory:(long long)a ;
 - (void) setUserDefaults:(id)a ;
 - (BOOL) allowsUserCustomization;
 - (void) setUserDefaultsActivity:(id)a ;
 - (void) unregisterForActivityUserDefaultsChanges;
 - (void) handleEditingGesture:(id)a ;
 - (id) activityGroupViewLayout;
 - (void) setEditingGestureRecognizer:(id)a ;
 - (void) registerForActivityUserDefaultsChanges;
 - (void) setActivities:(id)a animated:(BOOL)b ;
 - (id) userDefaultsActivity;
 - (void) _setActivities:(id)a animated:(BOOL)b ;
 - (void) _updateVisibleActivitiesAnimated:(BOOL)a ;
 - (id) activities;
 - (void) _setVisibleActivities:(id)a animated:(BOOL)b ;
 - (id) indexPathForMenuActivity;
 - (void) hideItemAtIndexPath:(id)a ;
 - (id) visibleActivities;
 - (id) activityForItemAtIndexPath:(id)a ;
 - (id) _titleTextForActivity:(id)a ;
 - (BOOL) darkStyleOnLegacyApp;
 - (long long) activityCategory;
 - (void) _updateItemSizeIfNeeded;
 - (id) editingGestureRecognizer;
 - (void) setIndexPathForMenuActivity:(id)a ;
 - (void) setActivityIndexDidChangeWhileDragging:(BOOL)a ;
 - (BOOL) activityIndexDidChangeWhileDragging;
 - (void) hideActivity:(id)a ;
 - (id) targetIndexPathForMoveFromRowAtIndexPath:(id)a toProposedIndexPath:(id)b ;
 - (void) ignoreUserDefaultsChangesWhileUsingBlock:(@?)a ;
 - (id) prototypeActivityCell;
 - (void) setPrototypeActivityCell:(id)a ;
 - ({CGSize=dd}) _cachedPreferredItemSizeForString:(id)a ;
 - (void) activityUserDefaultsDidChange:(id)a ;
 - (id) collectionView:(id)a layout:(id)b moveItemAtIndexPath:(id)c toIndexPath:(id)d ;
 - (id) collectionView:(id)a layout:(id)b needsContainerViewForDraggingItemAtIndexPath:(id)c ;
 - ({CGSize=dd}) collectionView:(id)a layout:(id)b preferredSizeForItemAtIndexPath:(id)c ;
 - (id) initWithActivityCategory:(long long)a userDefaults:(id)b ;
 - (void) setActivities:(id)a ;
 - (void) reloadItemForActivityOfTypeIfNeeded:(id)a ;
 - (id) customActivityTitles;
 - (void) setCustomActivityTitles:(id)a ;
 - (void) setDarkStyleOnLegacyApp:(BOOL)a ;
 - (BOOL) isEmbedded;
 - (void) setEmbedded:(BOOL)a ;
 - (BOOL) isPicker;
 - (BOOL) hasActivities;
 - (void) setHasActivities:(BOOL)a ;
 - (void) setVisibleActivities:(id)a ;
 - ({CGPoint=dd}) initialDraggingLocation;
 - (void) setInitialDraggingLocation:({CGPoint=dd})a ;
 - (id) cachedPreferredItemSizesByString;
 - (id) delegate;
 - (id) dataSource;
 - (void) setDataSource:(id)a ;


@end
