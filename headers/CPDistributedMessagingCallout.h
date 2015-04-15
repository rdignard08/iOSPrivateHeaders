
@interface CPDistributedMessagingCallout : NSObject {

    id _target;
    SEL _selector;
    BOOL _returnsVoid;
    BOOL _returnsVoidIsValid;
}
@property (nonatomic, retain, readonly) NSNumber* target;
@property (nonatomic, assign, readonly) NSNumber* selector;
@property (nonatomic, assign, readonly) NSNumber* returnsVoid;

 - (id) target;
 - (SEL) selector;
 - (void) dealloc;
 - (id) initWithTarget:(id)aselector:(SEL)b;
 - (BOOL) returnsVoid;


@end
