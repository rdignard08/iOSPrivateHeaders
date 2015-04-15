
@interface NSFilePresenterOperationRecord : NSObject {

    NSString* operationDescription;
    long long state;
    id reactor;
}
@property (atomic, assign, readonly) NSString* operationDescription;
@property (atomic, assign, readonly) NSNumber* state;
@property (atomic, assign, readwrite) NSNumber* reactor;
 + (id) operationRecordWithDescription:(id)a;

 - (void) setReactor:(id)a;
 - (void) didBegin;
 - (void) willEnd;
 - (void) didEnd;
 - (id) reactor;
 - (id) operationDescription;
 - (id) description;
 - (void) dealloc;
 - (long long) state;


@end
