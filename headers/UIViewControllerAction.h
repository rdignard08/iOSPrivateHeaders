
@interface UIViewControllerAction : NSObject {

    @"UIViewController" _viewController;
    @"NSString" _name;
    i _transition;
    @? _completion;
    d _curlUpRevealedHeight;
}
@property (nonatomic, assign, readwrite) UIViewController* viewController;
@property (nonatomic, retain, readwrite) NSString* name;
@property (nonatomic, assign, readonly) NSNumber* animated;
@property (nonatomic, assign, readwrite) NSNumber* transition;
@property (nonatomic, copy, readwrite) NSNumber* completion;
@property (nonatomic, assign, readwrite, _setCurlUpRevealedHeight:) NSNumber* _curlUpRevealedHeight;

 - (void) dealloc;
 - (id) name;
 - (d) _curlUpRevealedHeight;
 - (@?) completion;
 - (void) setCompletion:(@?)a;
 - (void) setViewController:(id)a;
 - (void) setTransition:(i)a;
 - (i) transition;
 - (id) initWithViewController:(id)aname:(id)btransition:(i)c;
 - (BOOL) animated;
 - (void) _setCurlUpRevealedHeight:(d)a;
 - (id) viewController;
 - (void) setName:(id)a;


@end
