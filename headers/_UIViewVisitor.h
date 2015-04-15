
@interface _UIViewVisitor : NSObject {

    BOOL _visitMaskViews;
    BOOL _tracksHierarchy;
    BOOL __currentlyVisitingHierarchy;
    unsigned long long _traversalDirection;
}
@property (nonatomic, assign, readwrite) NSNumber* visitMaskViews;
@property (nonatomic, assign, readwrite) NSNumber* tracksHierarchy;
@property (nonatomic, assign, readwrite) NSNumber* _currentlyVisitingHierarchy;
@property (nonatomic, assign, readonly) NSNumber* traversalDirection;
 + (void) _addHierarchyTrackingVisitor:(id)a;
 + (void) _removeHierarchyTrackingVisitor:(id)a;
 + (void) _startTraversalOfVisitor:(id)awithView:(id)b;

 - (id) initWithTraversalDirection:(unsigned long long)a ;
 - (unsigned long long) traversalDirection;
 - (void) setTracksHierarchy:(BOOL)a ;
 - (BOOL) tracksHierarchy;
 - (BOOL) _prepareVisitor:(id)a toVisitView:(id)b changedSubview:(id)c previousWindow:(id)d previousSuperview:(id)e ;
 - (void) set_currentlyVisitingHierarchy:(BOOL)a ;
 - (BOOL) _visitView:(id)a ;
 - (BOOL) visitMaskViews;
 - (void) setVisitMaskViews:(BOOL)a ;
 - (BOOL) _currentlyVisitingHierarchy;


@end
