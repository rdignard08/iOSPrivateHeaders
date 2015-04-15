
@interface UIStatusBarServer : NSObject {

    <UIStatusBarServerClient> _statusBar;
    ^{__CFRunLoopSource=} _source;
}
@property (nonatomic, retain, readwrite) NSNumber* statusBar;
 + (void) addStyleOverrides:(int)a;
 + (void) removeStyleOverrides:(int)a;
 + (void) postGlowAnimationState:(BOOL)aforStyle:(long long)b;
 + (void) postDoubleHeightStatusString:(id)aforStyle:(long long)b;
 + (void) addStatusBarItem:(int)a;
 + (void) removeStatusBarItem:(int)a;
 + (double) getGlowAnimationEndTimeForStyle:(long long)a;
 + (unsigned int) _publisherPort;
 + (void) postStatusBarData:(r^{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I})awithActions:(int)b;
 + (void) postStatusBarOverrideData:(^{?=[26B]b1b1b1b1b2b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I}})a;
 + (void) permanentizeStatusBarOverrideData;
 + (r^{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I}) getStatusBarData;
 + (^{?=[26B]b1b1b1b1b2b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I}}) getStatusBarOverrideData;
 + (int) getStyleOverrides;
 + (BOOL) getGlowAnimationStateForStyle:(long long)a;
 + (id) getDoubleHeightStatusStringForStyle:(long long)a;
 + (void) runServer;
 + (unsigned int) _serverPort;

 - (void) dealloc;
 - (id) statusBar;
 - (void) setStatusBar:(id)a;
 - (void) _receivedStatusBarData:(^{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I})aactions:(int)b;
 - (void) _receivedStyleOverrides:(int)a;
 - (void) _receivedGlowAnimationState:(BOOL)aforStyle:(long long)b;
 - (void) _receivedDoubleHeightStatus:(r*)aforStyle:(long long)b;
 - (id) initWithStatusBar:(id)a;


@end
