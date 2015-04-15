
@interface UIIBApplication : UIApplication {

    long long _statusBarOrientation;
}
 + (BOOL) rendersLocally;

 - (long long) statusBarOrientation;
 - (void) setStatusBarOrientation:(long long)aanimationParameters:(id)b;
 - (id) init;


@end
