
@interface _CUIPSDStopAndMidpointPair : NSObject {

    id stop;
    double midpoint;
}

 - (id) stop;
 - (void) dealloc;
 - (long long) compare:(id)a;
 - (id) initWithStop:(id)amidpoint:(id)b;
 - (double) midpoint;


@end
