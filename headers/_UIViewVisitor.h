
@interface _UIViewVisitor : NSObject {

    BOOL _visitMaskViews;
    BOOL _tracksHierarchy;
    BOOL __currentlyVisitingHierarchy;
    Q _traversalDirection;
}
@property (nonatomic, assign, readwrite) NSNumber* visitMaskViews;
@property (nonatomic, assign, readwrite) NSNumber* tracksHierarchy;
@property (nonatomic, assign, readwrite) NSNumber* _currentlyVisitingHierarchy;
@property (nonatomic, assign, readonly) NSNumber* traversalDirection;
 + (void) _addHierarchyTrackingVisitor:(id)a;
 + (void) _removeHierarchyTrackingVisitor:(id)a;
 + (void) _startTraversalOfVisitor:(id)awithView:(id)b;

 - (id) initWithTraversalDirection:(Q)a;
 - (Q) traversalDirection;
 - (void) setTracksHierarchy:(BOOL)a;
 - (BOOL) tracksHierarchy;
 - (BOOL) _prepareVisitor:(id)atoVisitView:(id)bchangedSubview:(id)cpreviousWindow:(id)dpreviousSuperview:(id)e;
 - (void) set_currentlyVisitingHierarchy:(BOOL)a;
 - (BOOL) _visitView:(id)a;
 - (BOOL) visitMaskViews;
 - (void) setVisitMaskViews:(BOOL)a;
 - (BOOL) _currentlyVisitingHierarchy;


@end
