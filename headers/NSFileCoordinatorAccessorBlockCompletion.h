
@interface NSFileCoordinatorAccessorBlockCompletion : NSObject {

    @? block;
    i count;
}
 + (id) completionWithBlock:(@?)a;

 - (void) decrement;
 - (void) increment;
 - (void) dealloc;


@end
