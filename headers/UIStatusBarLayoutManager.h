
@interface UIStatusBarLayoutManager : NSObject {

    @"UIStatusBarForegroundView" _foregroundView;
    i _region;
    [31@"UIStatusBarItemView"] _itemViews;
    BOOL _persistentAnimationsEnabled;
    BOOL _usesVerticalLayout;
}
@property (nonatomic, assign, readwrite) UIStatusBarForegroundView* foregroundView;
@property (nonatomic, assign, readwrite) NSNumber* persistentAnimationsEnabled;
@property (nonatomic, assign, readonly) NSNumber* usesVerticalLayout;

 - (void) dealloc;
 - (d) _startPosition;
 - (BOOL) usesVerticalLayout;
 - (id) initWithRegion:(i)aforegroundView:(id)busesVerticalLayout:(BOOL)c;
 - (void) setForegroundView:(id)a;
 - (BOOL) prepareEnabledItems:(^B)awithData:(id)bactions:(i)c;
 - (BOOL) updateItemsWithData:(id)aactions:(i)banimated:(BOOL)c;
 - (void) setVisibilityOfAllItems:(BOOL)a;
 - (void) reflowWithVisibleItems:(id)aduration:(d)b;
 - (void) setVisibilityOfItem:(id)avisible:(BOOL)b;
 - (void) positionInvisibleItems;
 - (void) removeDisabledItems:(^B)a;
 - (void) makeVisibleItemsPerformPendedActions;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForItems:(id)a;
 - (void) clearOverlapFromItems:(id)a;
 - (d) sizeNeededForItems:(id)a;
 - (d) distributeOverlap:(d)aamongItems:(id)b;
 - (d) sizeNeededForItem:(id)a;
 - (d) removeOverlap:(d)afromItems:(id)b;
 - (BOOL) itemIsVisible:(id)a;
 - (void) setPersistentAnimationsEnabled:(BOOL)a;
 - (void) _prepareEnabledItemType:(i)awithEnabledItems:(^B)bwithData:(id)cactions:(i)ditemAppearing:(^B)eitemDisappearing:(^B)f;
 - (void) _positionNewItemViewsWithEnabledItems:(^B)a;
 - (id) _itemViews;
 - (BOOL) _updateItemView:(id)awithData:(id)bactions:(i)canimated:(BOOL)d;
 - (id) foregroundView;
 - (id) _createViewForItem:(id)awithData:(id)bactions:(i)c;
 - (id) _itemViewsSortedForLayout;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForItemView:(id)astartPosition:(d)bfirstView:(BOOL)c;
 - (d) _positionAfterPlacingItemView:(id)astartPosition:(d)bfirstView:(BOOL)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _repositionedNewFrame:({CGRect={CGPoint=dd}{CGSize=dd}})asizeDelta:(d)b;
 - (BOOL) _processDelta:(d)aforView:(id)b;
 - (id) _viewForItem:(id)a;
 - (d) _sizeNeededForItemView:(id)a;
 - (SEL) _itemSortSelector;
 - (void) _setOrigin:(d)aforPoint:(^{CGPoint=dd})b;
 - (d) _dimensionForSize:({CGSize=dd})a;
 - (void) _addOriginDelta:(d)atoPoint:(^{CGPoint=dd})b;
 - (BOOL) prepareDoubleHeightItemWithEnabledItems:(^B)a;
 - (BOOL) updateDoubleHeightItem;
 - (void) itemView:(id)asizeChangedBy:(d)b;
 - (BOOL) persistentAnimationsEnabled;


@end
