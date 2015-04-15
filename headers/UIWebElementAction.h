
@interface UIWebElementAction : NSObject {

    @"NSString" _title;
    @? _actionHandler;
    @? _dismissalHandler;
    i _type;
}
@property (nonatomic, assign, readonly) NSNumber* type;
@property (nonatomic, copy, readwrite) NSNumber* dismissalHandler;
 + (id) standardElementActionWithType:(i)acustomTitle:(id)b;
 + (id) customElementActionWithTitle:(id)aactionHandler:(@?)b;
 + (id) standardElementActionWithType:(i)a;

 - (void) dealloc;
 - (id) initWithTitle:(id)aactionHandler:(@?)btype:(i)c;
 - (void) _runActionWithElement:(id)atargetURL:(id)bdocumentView:(id)cinteractionLocation:({CGPoint=dd})d;
 - (@?) dismissalHandler;
 - (void) setDismissalHandler:(@?)a;
 - (i) type;
 - (id) _title;


@end
