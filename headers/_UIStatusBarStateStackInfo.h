
@interface _UIStatusBarStateStackInfo : NSObject {

    i _hostPID;
    q _statusBarOrientationWithoutHost;
    d _statusBarHeightWithoutHost;
}
@property (atomic, assign, readwrite) NSNumber* statusBarOrientationWithoutHost;
@property (atomic, assign, readwrite) NSNumber* statusBarHeightWithoutHost;
@property (atomic, assign, readwrite) NSNumber* hostPID;

 - (q) statusBarOrientationWithoutHost;
 - (void) setStatusBarOrientationWithoutHost:(q)a;
 - (d) statusBarHeightWithoutHost;
 - (void) setStatusBarHeightWithoutHost:(d)a;
 - (i) hostPID;
 - (void) setHostPID:(i)a;


@end
