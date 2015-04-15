
@interface BSEventQueueEvent : NSObject {

    NSString _name;
    @? _handler;
}
@property (nonatomic, copy, readwrite) NSString* name;
@property (nonatomic, copy, readwrite) NSNumber* handler;
 + (id) eventWithName:(id)ahandler:(@?)b;

 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (void) setName:(id)a;
 - (@?) handler;
 - (void) executeFromEventQueue;
 - (void) setHandler:(@?)a;
 - (void) _execute;
 - (void) execute;
 - (BOOL) isEqualToEvent:(id)a;


@end
