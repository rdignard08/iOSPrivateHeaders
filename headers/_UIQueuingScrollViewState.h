
@interface _UIQueuingScrollViewState : _UITransitionState {

    @"UIView" _view;
    @"UIViewController" _viewController;
    BOOL _manual;
}

 - (id) description;
 - (void) dealloc;
 - (BOOL) isCompatibleWithTransitionInDirection:(q)a;
 - (id) initWithTransitionDirection:(q)aview:(id)bmanual:(BOOL)ccompletion:(@?)d;
 - (BOOL) isManual;
 - (id) view;


@end
