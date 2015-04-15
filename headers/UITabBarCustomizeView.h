
@interface UITabBarCustomizeView : UIView {

    UITabBar* _tabBar;
    NSMutableArray* _proxies;
    NSMutableArray* _fixedItems;
    UITabBarItemProxy* _draggingProxy;
    UITabBarItem* _draggingItem;
    UISnapshotView* _dragImage;
    UIImageView* _replacementGlow;
    UITabBarItem* _replaceItem;
    UILabel* _titleLabel;
    {CGPoint="x"d"y"d} _startPoint;
    long long _itemsInRowCount;
    double _gridOffset;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _firstItemRect;
    UITabBarItem* _selectedBeforeItem;
    NSArray* _availableItems;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (long long) _barMetrics;
 - (void) updateProxiesSelection;
 - (void) setAvailableItems:(id)a ;
 - (void) tintTabBarItemsForEdit:(BOOL)a ;
 - (void) adjustDragImageWithTouches:(id)a withEvent:(id)b ;
 - (id) itemInTabBarWithTouches:(id)a withEvent:(id)b ;
 - (void) tabBarTouchesEnded:(id)a withEvent:(id)b ;
 - (void) setTabBar:(id)a currentItems:(id)b availableItems:(id)c ;
 - (void) tabBarTouchesBegan:(id)a withEvent:(id)b ;
 - (void) tabBarTouchesMoved:(id)a withEvent:(id)b ;
 - (void) tabBarTouchesCancelled:(id)a withEvent:(id)b ;
 - (id) availableItems;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
