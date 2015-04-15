
@interface UIIBApplication : UIApplication {

    long long _statusBarOrientation;
}
 + (BOOL) rendersLocally;

 - (long long) statusBarOrientation;
 - (void) setStatusBarOrientation:(long long)a animationParameters:(id)b ;
 - (id) init;


@end
