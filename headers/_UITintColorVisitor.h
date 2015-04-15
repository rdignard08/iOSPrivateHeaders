
@interface _UITintColorVisitor : _UIViewVisitor {

    Q _reasons;
    BOOL _visitedViewIsWindow;
    BOOL _viewHasDefinedTintColor;
    BOOL _viewHasNonAutomaticTintAdjustmentMode;
    @"UIView" _originalVisitedView;
    @"UIView" _changedSubview;
}

 - (id) initWithNotificationReasons:(Q)a;
 - (id) initWithTraversalDirection:(Q)a;
 - (BOOL) _prepareVisitor:(id)atoVisitView:(id)bchangedSubview:(id)cpreviousWindow:(id)dpreviousSuperview:(id)e;
 - (BOOL) _visitView:(id)a;
 - (void) _prepareForView:(id)atrackingHierarchy:(BOOL)b;


@end
