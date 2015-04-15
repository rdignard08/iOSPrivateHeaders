
@protocol NSCoding;
@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {

    NSString _identifier;
    NSString _segueClassName;
    UIViewController _viewController;
    NSString _destinationViewControllerIdentifier;
    BOOL _performOnViewLoad;
}
@property (nonatomic, assign, readonly) NSString* identifier;
@property (nonatomic, assign, readwrite) UIViewController* viewController;
@property (nonatomic, assign, readwrite) NSNumber* performOnViewLoad;

 - (void) dealloc;
 - (void) perform:(id)a;
 - (void) setViewController:(id)a;
 - (id) viewController;
 - (BOOL) performOnViewLoad;
 - (void) _perform:(id)a;
 - (id) segueWithDestinationViewController:(id)a;
 - (id) defaultSegueClassName;
 - (Class) effectiveSegueClass;
 - (void) setPerformOnViewLoad:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) identifier;


@end
