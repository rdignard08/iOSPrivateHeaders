
@interface UIMenuItem : NSObject {

    NSString _title;
    SEL _action;
    BOOL _dontDismiss;
}
@property (nonatomic, copy, readwrite) NSString* title;
@property (nonatomic, assign, readwrite) NSNumber* action;
@property (nonatomic, assign, readwrite) NSNumber* dontDismiss;

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (SEL) action;
 - (void) setAction:(SEL)a;
 - (id) initWithTitle:(id)aaction:(SEL)b;
 - (void) setDontDismiss:(BOOL)a;
 - (BOOL) dontDismiss;


@end
