
@interface UIControlTargetAction : NSObject {

    id _target;
    SEL _action;
    int _eventMask;
    BOOL _cancelled;
}
@property (nonatomic, assign, readwrite) NSNumber* cancelled;

 - (BOOL) cancelled;
 - (void) setCancelled:(BOOL)a;


@end
