
@interface UIStatusBarForegroundView : UIView {

    BOOL _usesVerticalLayout;
    [31B] _itemIsEnabled;
    UIStatusBarLayoutManager* _layoutManagers;
    int _ignoreDataLevel;
    NSMutableArray* _actionAnimationStack;
    UIStatusBarComposedData* _pendedData;
    int _pendedActions;
    long long _idiom;
    UIStatusBarForegroundStyleAttributes* _foregroundStyle;
}

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (id) foregroundStyle;
 - (void) startIgnoringData;
 - (void) _cleanUpAfterDataChange;
 - (void) _reflowItemViewsWithDuration:(double)a preserveHistory:(BOOL)b ;
 - (BOOL) ignoringData;
 - (void) _setStatusBarData:(id)a actions:(int)b animated:(BOOL)c ;
 - (void) stopIgnoringData:(BOOL)a ;
 - (void) _reflowItemViewsCrossfadingCenterWithDuration:(double)a ;
 - (id) _computeVisibleItemsPreservingHistory:(BOOL)a ;
 - (void) _cleanUpAfterSimpleReflow;
 - (void) setStatusBarData:(id)a actions:(int)b animated:(BOOL)c ;
 - (double) edgePadding;
 - (BOOL) _tryToPlaceItem:(id)a inItemArray:(id)b layoutManager:(id)c roomRemaining:(^d)d allowSwap:(BOOL)e swappedItem:(^@)f ;
 - (void) setPersistentAnimationsEnabled:(BOOL)a ;
 - (void) reflowItemViews:(BOOL)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a foregroundStyle:(id)b usesVerticalLayout:(BOOL)c ;
 - (void) reflowItemViewsCrossfadingCenter:(id)a duration:(double)b ;
 - (void) reflowItemViewsForgettingEitherSideItemHistory;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setIdiom:(long long)a ;
 - (long long) idiom;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
