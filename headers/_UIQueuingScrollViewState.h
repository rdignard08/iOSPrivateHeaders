
@interface _UIQueuingScrollViewState : _UITransitionState {

    UIView* _view;
    UIViewController* _viewController;
    BOOL _manual;
}

 - (id) description;
 - (void) dealloc;
 - (BOOL) isCompatibleWithTransitionInDirection:(long long)a ;
 - (id) initWithTransitionDirection:(long long)a view:(id)b manual:(BOOL)c completion:(@?)d ;
 - (BOOL) isManual;
 - (id) view;


@end
