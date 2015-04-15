
@protocol _UIActivityGroupViewDelegateFlowLayout, UIGestureRecognizerDelegate;
@interface UIActivityGroupViewController : UICollectionViewController <_UIActivityGroupViewDelegateFlowLayout, UIGestureRecognizerDelegate> {

    BOOL _darkStyleOnLegacyApp;
    BOOL _embedded;
    BOOL _picker;
    BOOL _hasActivities;
    BOOL _activityIndexDidChangeWhileDragging;
    BOOL _allowsUserCustomization;
    @"<UIActivityGroupViewControllerDelegate>" _delegate;
    long long _activityCategory;
    @"NSDictionary" _customActivityTitles;
    @"NSArray" _activities;
    @"<UIActivityGroupViewControllerDataSource>" _dataSource;
    @"NSArray" _visibleActivities;
    @"_UIActivityUserDefaults" _userDefaults;
    @"_UIUserDefaultsActivity" _userDefaultsActivity;
    @"_UIActivityGroupActivityCell" _prototypeActivityCell;
    @"UILongPressGestureRecognizer" _editingGestureRecognizer;
    @"NSIndexPath" _indexPathForMenuActivity;
    @"NSMutableDictionary" _cachedPreferredItemSizesByString;
    {CGPoint="x"d"y"d} _initialDraggingLocation;
}

 - (id) userDefaults;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (long long) collectionView:(id)anumberOfItemsInSection:(long long)b;
 - (id) collectionView:(id)acellForItemAtIndexPath:(id)b;
 - (BOOL) collectionView:(id)ashouldHighlightItemAtIndexPath:(id)b;
 - (BOOL) collectionView:(id)ashouldSelectItemAtIndexPath:(id)b;
 - (void) collectionView:(id)adidSelectItemAtIndexPath:(id)b;
 - (void) collectionView:(id)awillDisplayCell:(id)bforItemAtIndexPath:(id)c;
 - (void) traitCollectionDidChange:(id)a;
 - (BOOL) canBecomeFirstResponder;
 - (void) viewDidLayoutSubviews;
 - (void) setEditing:(BOOL)aanimated:(BOOL)b;
 - (void) viewDidLoad;
 - (id) initWithActivityCategory:(long long)auserDefaults:(id)buserDefaultsIdentifier:(id)c;
 - (void) setAllowsUserCustomization:(BOOL)a;
 - (void) setPicker:(BOOL)a;
 - (void) setCachedPreferredItemSizesByString:(id)a;
 - (void) setActivityCategory:(long long)a;
 - (void) setUserDefaults:(id)a;
 - (BOOL) allowsUserCustomization;
 - (void) setUserDefaultsActivity:(id)a;
 - (void) unregisterForActivityUserDefaultsChanges;
 - (void) handleEditingGesture:(id)a;
 - (id) activityGroupViewLayout;
 - (void) setEditingGestureRecognizer:(id)a;
 - (void) registerForActivityUserDefaultsChanges;
 - (void) setActivities:(id)aanimated:(BOOL)b;
 - (id) userDefaultsActivity;
 - (void) _setActivities:(id)aanimated:(BOOL)b;
 - (void) _updateVisibleActivitiesAnimated:(BOOL)a;
 - (id) activities;
 - (void) _setVisibleActivities:(id)aanimated:(BOOL)b;
 - (id) indexPathForMenuActivity;
 - (void) hideItemAtIndexPath:(id)a;
 - (id) visibleActivities;
 - (id) activityForItemAtIndexPath:(id)a;
 - (id) _titleTextForActivity:(id)a;
 - (BOOL) darkStyleOnLegacyApp;
 - (long long) activityCategory;
 - (void) _updateItemSizeIfNeeded;
 - (id) editingGestureRecognizer;
 - (void) setIndexPathForMenuActivity:(id)a;
 - (void) setActivityIndexDidChangeWhileDragging:(BOOL)a;
 - (BOOL) activityIndexDidChangeWhileDragging;
 - (void) hideActivity:(id)a;
 - (id) targetIndexPathForMoveFromRowAtIndexPath:(id)atoProposedIndexPath:(id)b;
 - (void) ignoreUserDefaultsChangesWhileUsingBlock:(@?)a;
 - (id) prototypeActivityCell;
 - (void) setPrototypeActivityCell:(id)a;
 - ({CGSize=dd}) _cachedPreferredItemSizeForString:(id)a;
 - (void) activityUserDefaultsDidChange:(id)a;
 - (id) collectionView:(id)alayout:(id)bmoveItemAtIndexPath:(id)ctoIndexPath:(id)d;
 - (id) collectionView:(id)alayout:(id)bneedsContainerViewForDraggingItemAtIndexPath:(id)c;
 - ({CGSize=dd}) collectionView:(id)alayout:(id)bpreferredSizeForItemAtIndexPath:(id)c;
 - (id) initWithActivityCategory:(long long)auserDefaults:(id)b;
 - (void) setActivities:(id)a;
 - (void) reloadItemForActivityOfTypeIfNeeded:(id)a;
 - (id) customActivityTitles;
 - (void) setCustomActivityTitles:(id)a;
 - (void) setDarkStyleOnLegacyApp:(BOOL)a;
 - (BOOL) isEmbedded;
 - (void) setEmbedded:(BOOL)a;
 - (BOOL) isPicker;
 - (BOOL) hasActivities;
 - (void) setHasActivities:(BOOL)a;
 - (void) setVisibleActivities:(id)a;
 - ({CGPoint=dd}) initialDraggingLocation;
 - (void) setInitialDraggingLocation:({CGPoint=dd})a;
 - (id) cachedPreferredItemSizesByString;
 - (id) delegate;
 - (id) dataSource;
 - (void) setDataSource:(id)a;


@end
