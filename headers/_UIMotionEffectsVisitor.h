
@interface _UIMotionEffectsVisitor : _UIViewVisitor {

    BOOL _subviewAddedToHierarchy;
    unsigned long long _countOfMotionEffectsInSubview;
}

 - (BOOL) _prepareVisitor:(id)a toVisitView:(id)b changedSubview:(id)c previousWindow:(id)d previousSuperview:(id)e ;
 - (BOOL) _visitView:(id)a ;


@end
