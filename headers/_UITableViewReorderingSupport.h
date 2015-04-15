
@interface _UITableViewReorderingSupport : NSObject {

    UITableViewCell* _reorderedCell;
    NSIndexPath* _initialIndexPath;
    NSIndexPath* _targetIndexPath;
    b1 _oldShowHorizontalScrollIndicator;
    b1 _oldShowVerticalScrollIndicator;
    b1 _reloadDataCalled;
    b1 _reorderingCancelled;
    b28 _reserved;
    NSTimer* _autoscrollTimer;
    UIShadowView* _topShadowView;
    UIShadowView* _bottomShadowView;
    BOOL _wasScrollingEnabled;
}



@end
