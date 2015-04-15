
@interface NSFileCoordinatorAccessorBlockCompletion : NSObject {

    @? block;
    int count;
}
 + (id) completionWithBlock:(@?)a;

 - (void) decrement;
 - (void) increment;
 - (void) dealloc;


@end
