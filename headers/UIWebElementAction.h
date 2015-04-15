
@interface UIWebElementAction : NSObject {

    NSString* _title;
    @? _actionHandler;
    @? _dismissalHandler;
    int _type;
}
@property (nonatomic, assign, readonly) NSNumber* type;
@property (nonatomic, copy, readwrite) NSNumber* dismissalHandler;
 + (id) standardElementActionWithType:(int)acustomTitle:(id)b;
 + (id) customElementActionWithTitle:(id)aactionHandler:(@?)b;
 + (id) standardElementActionWithType:(int)a;

 - (void) dealloc;
 - (id) initWithTitle:(id)a actionHandler:(@?)b type:(int)c ;
 - (void) _runActionWithElement:(id)a targetURL:(id)b documentView:(id)c interactionLocation:({CGPoint=dd})d ;
 - (@?) dismissalHandler;
 - (void) setDismissalHandler:(@?)a ;
 - (int) type;
 - (id) _title;


@end
