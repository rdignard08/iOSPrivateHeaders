
@interface UIStoryboardSegue : NSObject {

    NSString* _identifier;
    id _sourceViewController;
    id _destinationViewController;
    @? _performHandler;
    id _sender;
}
@property (nonatomic, assign, readonly) NSString* identifier;
@property (nonatomic, assign, readonly) NSNumber* sourceViewController;
@property (nonatomic, assign, readonly) NSNumber* destinationViewController;
@property (nonatomic, copy, readwrite) NSNumber* performHandler;
@property (nonatomic, retain, readwrite) NSNumber* sender;
 + (id) segueWithIdentifier:(id)asource:(id)bdestination:(id)cperformHandler:(@?)d;

 - (void) dealloc;
 - (void) _prepare;
 - (id) destinationViewController;
 - (id) sourceViewController;
 - (void) perform;
 - (id) initWithIdentifier:(id)a source:(id)b destination:(id)c ;
 - (void) setSender:(id)a ;
 - (void) setPerformHandler:(@?)a ;
 - (@?) performHandler;
 - (id) sender;
 - (id) identifier;


@end
