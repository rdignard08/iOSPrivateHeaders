
@interface BSSignal : NSObject {

    BOOL _signalled;
}

 - (void) signal;
 - (void) reset;
 - (id) init;
 - (BOOL) hasBeenSignalled;


@end
