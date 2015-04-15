
@interface _UITintColorVisitor : _UIViewVisitor {

    unsigned long long _reasons;
    BOOL _visitedViewIsWindow;
    BOOL _viewHasDefinedTintColor;
    BOOL _viewHasNonAutomaticTintAdjustmentMode;
    UIView* _originalVisitedView;
    UIView* _changedSubview;
}

 - (id) initWithNotificationReasons:(unsigned long long)a ;
 - (id) initWithTraversalDirection:(unsigned long long)a ;
 - (BOOL) _prepareVisitor:(id)a toVisitView:(id)b changedSubview:(id)c previousWindow:(id)d previousSuperview:(id)e ;
 - (BOOL) _visitView:(id)a ;
 - (void) _prepareForView:(id)a trackingHierarchy:(BOOL)b ;


@end
