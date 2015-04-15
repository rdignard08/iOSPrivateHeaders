
@interface UIStatusBarLayoutManager : NSObject {

    UIStatusBarForegroundView* _foregroundView;
    int _region;
    UIStatusBarItemView* _itemViews;
    BOOL _persistentAnimationsEnabled;
    BOOL _usesVerticalLayout;
}
@property (nonatomic, assign, readwrite) UIStatusBarForegroundView* foregroundView;
@property (nonatomic, assign, readwrite) NSNumber* persistentAnimationsEnabled;
@property (nonatomic, assign, readonly) NSNumber* usesVerticalLayout;

 - (void) dealloc;
 - (double) _startPosition;
 - (BOOL) usesVerticalLayout;
 - (id) initWithRegion:(int)a foregroundView:(id)b usesVerticalLayout:(BOOL)c ;
 - (void) setForegroundView:(id)a ;
 - (BOOL) prepareEnabledItems:(^B)a withData:(id)b actions:(int)c ;
 - (BOOL) updateItemsWithData:(id)a actions:(int)b animated:(BOOL)c ;
 - (void) setVisibilityOfAllItems:(BOOL)a ;
 - (void) reflowWithVisibleItems:(id)a duration:(double)b ;
 - (void) setVisibilityOfItem:(id)a visible:(BOOL)b ;
 - (void) positionInvisibleItems;
 - (void) removeDisabledItems:(^B)a ;
 - (void) makeVisibleItemsPerformPendedActions;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForItems:(id)a ;
 - (void) clearOverlapFromItems:(id)a ;
 - (double) sizeNeededForItems:(id)a ;
 - (double) distributeOverlap:(double)a amongItems:(id)b ;
 - (double) sizeNeededForItem:(id)a ;
 - (double) removeOverlap:(double)a fromItems:(id)b ;
 - (BOOL) itemIsVisible:(id)a ;
 - (void) setPersistentAnimationsEnabled:(BOOL)a ;
 - (void) _prepareEnabledItemType:(int)a withEnabledItems:(^B)b withData:(id)c actions:(int)d itemAppearing:(^B)e itemDisappearing:(^B)f ;
 - (void) _positionNewItemViewsWithEnabledItems:(^B)a ;
 - (id) _itemViews;
 - (BOOL) _updateItemView:(id)a withData:(id)b actions:(int)c animated:(BOOL)d ;
 - (id) foregroundView;
 - (id) _createViewForItem:(id)a withData:(id)b actions:(int)c ;
 - (id) _itemViewsSortedForLayout;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForItemView:(id)a startPosition:(double)b firstView:(BOOL)c ;
 - (double) _positionAfterPlacingItemView:(id)a startPosition:(double)b firstView:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _repositionedNewFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a sizeDelta:(double)b ;
 - (BOOL) _processDelta:(double)a forView:(id)b ;
 - (id) _viewForItem:(id)a ;
 - (double) _sizeNeededForItemView:(id)a ;
 - (SEL) _itemSortSelector;
 - (void) _setOrigin:(double)a forPoint:(^{CGPoint=dd})b ;
 - (double) _dimensionForSize:({CGSize=dd})a ;
 - (void) _addOriginDelta:(double)a toPoint:(^{CGPoint=dd})b ;
 - (BOOL) prepareDoubleHeightItemWithEnabledItems:(^B)a ;
 - (BOOL) updateDoubleHeightItem;
 - (void) itemView:(id)a sizeChangedBy:(double)b ;
 - (BOOL) persistentAnimationsEnabled;


@end
