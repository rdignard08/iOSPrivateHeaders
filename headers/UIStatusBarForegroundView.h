
@interface UIStatusBarForegroundView : UIView {

    BOOL _usesVerticalLayout;
    [31B] _itemIsEnabled;
    [3@"UIStatusBarLayoutManager"] _layoutManagers;
    i _ignoreDataLevel;
    @"NSMutableArray" _actionAnimationStack;
    @"UIStatusBarComposedData" _pendedData;
    i _pendedActions;
    q _idiom;
    @"UIStatusBarForegroundStyleAttributes" _foregroundStyle;
}

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (id) foregroundStyle;
 - (void) startIgnoringData;
 - (void) _cleanUpAfterDataChange;
 - (void) _reflowItemViewsWithDuration:(d)apreserveHistory:(BOOL)b;
 - (BOOL) ignoringData;
 - (void) _setStatusBarData:(id)aactions:(i)banimated:(BOOL)c;
 - (void) stopIgnoringData:(BOOL)a;
 - (void) _reflowItemViewsCrossfadingCenterWithDuration:(d)a;
 - (id) _computeVisibleItemsPreservingHistory:(BOOL)a;
 - (void) _cleanUpAfterSimpleReflow;
 - (void) setStatusBarData:(id)aactions:(i)banimated:(BOOL)c;
 - (d) edgePadding;
 - (BOOL) _tryToPlaceItem:(id)ainItemArray:(id)blayoutManager:(id)croomRemaining:(^d)dallowSwap:(BOOL)eswappedItem:(^@)f;
 - (void) setPersistentAnimationsEnabled:(BOOL)a;
 - (void) reflowItemViews:(BOOL)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aforegroundStyle:(id)busesVerticalLayout:(BOOL)c;
 - (void) reflowItemViewsCrossfadingCenter:(id)aduration:(d)b;
 - (void) reflowItemViewsForgettingEitherSideItemHistory;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setIdiom:(q)a;
 - (q) idiom;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
