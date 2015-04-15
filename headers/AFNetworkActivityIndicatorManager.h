
@interface AFNetworkActivityIndicatorManager : NSObject {

    BOOL _enabled;
    q _activityCount;
    @"NSTimer" _activityIndicatorVisibilityTimer;
}
@property (nonatomic, assign, readwrite, isEnabled) NSNumber* enabled;
@property (nonatomic, assign, readonly) NSNumber* isNetworkActivityIndicatorVisible;
@property (nonatomic, assign, readwrite) NSNumber* activityCount;
@property (nonatomic, retain, readwrite) NSTimer* activityIndicatorVisibilityTimer;
@property (nonatomic, assign, readonly, isNetworkActivityIndicatorVisible) NSNumber* networkActivityIndicatorVisible;
 + (id) keyPathsForValuesAffectingIsNetworkActivityIndicatorVisible;
 + (id) sharedManager;

 - (void) networkRequestDidStart:(id)a;
 - (void) networkRequestDidFinish:(id)a;
 - (BOOL) isNetworkActivityIndicatorVisible;
 - (id) activityIndicatorVisibilityTimer;
 - (void) updateNetworkActivityIndicatorVisibility;
 - (void) setActivityIndicatorVisibilityTimer:(id)a;
 - (q) activityCount;
 - (void) updateNetworkActivityIndicatorVisibilityDelayed;
 - (void) incrementActivityCount;
 - (void) decrementActivityCount;
 - (void) setActivityCount:(q)a;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) init;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end
