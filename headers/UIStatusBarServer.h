
@interface UIStatusBarServer : NSObject {

    @"<UIStatusBarServerClient>" _statusBar;
    ^{__CFRunLoopSource=} _source;
}
@property (nonatomic, retain, readwrite) NSNumber* statusBar;
 + (void) addStyleOverrides:(i)a;
 + (void) removeStyleOverrides:(i)a;
 + (void) postGlowAnimationState:(BOOL)aforStyle:(q)b;
 + (void) postDoubleHeightStatusString:(id)aforStyle:(q)b;
 + (void) addStatusBarItem:(i)a;
 + (void) removeStatusBarItem:(i)a;
 + (d) getGlowAnimationEndTimeForStyle:(q)a;
 + (I) _publisherPort;
 + (void) postStatusBarData:(r^{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I})awithActions:(i)b;
 + (void) postStatusBarOverrideData:(^{?=[26B]b1b1b1b1b2b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I}})a;
 + (void) permanentizeStatusBarOverrideData;
 + (r^{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I}) getStatusBarData;
 + (^{?=[26B]b1b1b1b1b2b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I}}) getStatusBarOverrideData;
 + (i) getStyleOverrides;
 + (BOOL) getGlowAnimationStateForStyle:(q)a;
 + (id) getDoubleHeightStatusStringForStyle:(q)a;
 + (void) runServer;
 + (I) _serverPort;

 - (void) dealloc;
 - (id) statusBar;
 - (void) setStatusBar:(id)a;
 - (void) _receivedStatusBarData:(^{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I})aactions:(i)b;
 - (void) _receivedStyleOverrides:(i)a;
 - (void) _receivedGlowAnimationState:(BOOL)aforStyle:(q)b;
 - (void) _receivedDoubleHeightStatus:(r*)aforStyle:(q)b;
 - (id) initWithStatusBar:(id)a;


@end
