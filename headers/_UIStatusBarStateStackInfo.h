
@interface _UIStatusBarStateStackInfo : NSObject {

    int _hostPID;
    long long _statusBarOrientationWithoutHost;
    double _statusBarHeightWithoutHost;
}
@property (atomic, assign, readwrite) NSNumber* statusBarOrientationWithoutHost;
@property (atomic, assign, readwrite) NSNumber* statusBarHeightWithoutHost;
@property (atomic, assign, readwrite) NSNumber* hostPID;

 - (long long) statusBarOrientationWithoutHost;
 - (void) setStatusBarOrientationWithoutHost:(long long)a ;
 - (double) statusBarHeightWithoutHost;
 - (void) setStatusBarHeightWithoutHost:(double)a ;
 - (int) hostPID;
 - (void) setHostPID:(int)a ;


@end
