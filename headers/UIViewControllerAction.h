
@interface UIViewControllerAction : NSObject {

    UIViewController* _viewController;
    NSString* _name;
    int _transition;
    @? _completion;
    double _curlUpRevealedHeight;
}
@property (nonatomic, assign, readwrite) UIViewController* viewController;
@property (nonatomic, retain, readwrite) NSString* name;
@property (nonatomic, assign, readonly) NSNumber* animated;
@property (nonatomic, assign, readwrite) NSNumber* transition;
@property (nonatomic, copy, readwrite) NSNumber* completion;
@property (nonatomic, assign, readwrite, setter=_setCurlUpRevealedHeight:) NSNumber* _curlUpRevealedHeight;

 - (void) dealloc;
 - (id) name;
 - (double) _curlUpRevealedHeight;
 - (@?) completion;
 - (void) setCompletion:(@?)a ;
 - (void) setViewController:(id)a ;
 - (void) setTransition:(int)a ;
 - (int) transition;
 - (id) initWithViewController:(id)a name:(id)b transition:(int)c ;
 - (BOOL) animated;
 - (void) _setCurlUpRevealedHeight:(double)a ;
 - (id) viewController;
 - (void) setName:(id)a ;


@end
