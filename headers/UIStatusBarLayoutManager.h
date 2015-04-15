
@interface UIStatusBarLayoutManager : NSObject {

    @"UIStatusBarForegroundView" _foregroundView;
    int _region;
    [31@"UIStatusBarItemView"] _itemViews;
    BOOL _persistentAnimationsEnabled;
    BOOL _usesVerticalLayout;
}
@property (nonatomic, assign, readwrite) UIStatusBarForegroundView* foregroundView;
@property (nonatomic, assign, readwrite) NSNumber* persistentAnimationsEnabled;
@property (nonatomic, assign, readonly) NSNumber* usesVerticalLayout;

 - (void) dealloc;
 - (double) _startPosition;
 - (BOOL) usesVerticalLayout;
 - (id) initWithRegion:(int)aforegroundView:(id)busesVerticalLayout:(BOOL)c;
 - (void) setForegroundView:(id)a;
 - (BOOL) prepareEnabledItems:(^B)awithData:(id)bactions:(int)c;
 - (BOOL) updateItemsWithData:(id)aactions:(int)banimated:(BOOL)c;
 - (void) setVisibilityOfAllItems:(BOOL)a;
 - (void) reflowWithVisibleItems:(id)aduration:(double)b;
 - (void) setVisibilityOfItem:(id)avisible:(BOOL)b;
 - (void) positionInvisibleItems;
 - (void) removeDisabledItems:(^B)a;
 - (void) makeVisibleItemsPerformPendedActions;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForItems:(id)a;
 - (void) clearOverlapFromItems:(id)a;
 - (double) sizeNeededForItems:(id)a;
 - (double) distributeOverlap:(double)aamongItems:(id)b;
 - (double) sizeNeededForItem:(id)a;
 - (double) removeOverlap:(double)afromItems:(id)b;
 - (BOOL) itemIsVisible:(id)a;
 - (void) setPersistentAnimationsEnabled:(BOOL)a;
 - (void) _prepareEnabledItemType:(int)awithEnabledItems:(^B)bwithData:(id)cactions:(int)ditemAppearing:(^B)eitemDisappearing:(^B)f;
 - (void) _positionNewItemViewsWithEnabledItems:(^B)a;
 - (id) _itemViews;
 - (BOOL) _updateItemView:(id)awithData:(id)bactions:(int)canimated:(BOOL)d;
 - (id) foregroundView;
 - (id) _createViewForItem:(id)awithData:(id)bactions:(int)c;
 - (id) _itemViewsSortedForLayout;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForItemView:(id)astartPosition:(double)bfirstView:(BOOL)c;
 - (double) _positionAfterPlacingItemView:(id)astartPosition:(double)bfirstView:(BOOL)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _repositionedNewFrame:({CGRect={CGPoint=dd}{CGSize=dd}})asizeDelta:(double)b;
 - (BOOL) _processDelta:(double)aforView:(id)b;
 - (id) _viewForItem:(id)a;
 - (double) _sizeNeededForItemView:(id)a;
 - (SEL) _itemSortSelector;
 - (void) _setOrigin:(double)aforPoint:(^{CGPoint=dd})b;
 - (double) _dimensionForSize:({CGSize=dd})a;
 - (void) _addOriginDelta:(double)atoPoint:(^{CGPoint=dd})b;
 - (BOOL) prepareDoubleHeightItemWithEnabledItems:(^B)a;
 - (BOOL) updateDoubleHeightItem;
 - (void) itemView:(id)asizeChangedBy:(double)b;
 - (BOOL) persistentAnimationsEnabled;


@end
