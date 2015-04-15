
@interface _NSThreadPerformInfo : NSObject {

    id target;
    SEL selector;
    id argument;
    @"NSMutableArray" modes;
    @"NSCondition" waiter;
    * signalled;
}

 - (void) dealloc;


@end
