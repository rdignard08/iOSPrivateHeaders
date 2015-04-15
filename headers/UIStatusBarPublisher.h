
@interface UIStatusBarPublisher : NSObject {

    ^{__CFMachPort=} _machPort;
    int _styleOverrides;
    NSMutableSet _statusBarItems;
}

 - (void) dealloc;
 - (int) addStyleOverrides:(int)a;
 - (int) removeStyleOverrides:(int)a;
 - (void) addStatusBarItem:(int)a;
 - (void) removeStatusBarItem:(int)a;
 - (unsigned int) publisherPort;
 - (id) initWithCFMachPort:(^{__CFMachPort=})a;
 - (id) statusBarItems;
 - (int) styleOverrides;


@end
