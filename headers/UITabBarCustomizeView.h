
@interface UITabBarCustomizeView : UIView {

    UITabBar _tabBar;
    NSMutableArray _proxies;
    NSMutableArray _fixedItems;
    UITabBarItemProxy _draggingProxy;
    UITabBarItem _draggingItem;
    UISnapshotView _dragImage;
    UIImageView _replacementGlow;
    UITabBarItem _replaceItem;
    UILabel _titleLabel;
    {CGPoint="x"d"y"d} _startPoint;
    long long _itemsInRowCount;
    double _gridOffset;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _firstItemRect;
    UITabBarItem _selectedBeforeItem;
    NSArray _availableItems;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (long long) _barMetrics;
 - (void) updateProxiesSelection;
 - (void) setAvailableItems:(id)a;
 - (void) tintTabBarItemsForEdit:(BOOL)a;
 - (void) adjustDragImageWithTouches:(id)awithEvent:(id)b;
 - (id) itemInTabBarWithTouches:(id)awithEvent:(id)b;
 - (void) tabBarTouchesEnded:(id)awithEvent:(id)b;
 - (void) setTabBar:(id)acurrentItems:(id)bavailableItems:(id)c;
 - (void) tabBarTouchesBegan:(id)awithEvent:(id)b;
 - (void) tabBarTouchesMoved:(id)awithEvent:(id)b;
 - (void) tabBarTouchesCancelled:(id)awithEvent:(id)b;
 - (id) availableItems;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
