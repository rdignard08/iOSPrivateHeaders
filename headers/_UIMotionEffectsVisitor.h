
@interface _UIMotionEffectsVisitor : _UIViewVisitor {

    BOOL _subviewAddedToHierarchy;
    Q _countOfMotionEffectsInSubview;
}

 - (BOOL) _prepareVisitor:(id)atoVisitView:(id)bchangedSubview:(id)cpreviousWindow:(id)dpreviousSuperview:(id)e;
 - (BOOL) _visitView:(id)a;


@end
