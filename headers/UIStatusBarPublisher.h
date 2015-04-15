
@interface UIStatusBarPublisher : NSObject {

    ^{__CFMachPort=} _machPort;
    i _styleOverrides;
    @"NSMutableSet" _statusBarItems;
}

 - (void) dealloc;
 - (i) addStyleOverrides:(i)a;
 - (i) removeStyleOverrides:(i)a;
 - (void) addStatusBarItem:(i)a;
 - (void) removeStatusBarItem:(i)a;
 - (I) publisherPort;
 - (id) initWithCFMachPort:(^{__CFMachPort=})a;
 - (id) statusBarItems;
 - (i) styleOverrides;


@end
