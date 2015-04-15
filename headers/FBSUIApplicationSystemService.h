
@interface FBSUIApplicationSystemService : NSObject {

    @"NSObject<OS_dispatch_queue>" _delegateQueue;
    @"<FBSUIApplicationSystemServiceDelegate>" _delegate;
}
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readwrite) NSNumber* badgeNumber;
@property (nonatomic, copy, readwrite) NSString* badgeString;
@property (nonatomic, assign, readonly) NSNumber* backgroundTimeRemaining;
@property (nonatomic, assign, readwrite) NSNumber* currentBacklightLevel;

 - (id) initWithQueue:(id)a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setBadgeString:(id)a;
 - (long long) badgeNumber;
 - (void) setBadgeNumber:(long long)a;
 - (BOOL) setNextWakeInterval:(double)a;
 - (void) setCurrentBacklightLevel:(double)a;
 - (double) currentBacklightLevel;
 - (id) init;
 - (id) delegate;
 - (id) _getBadgeValue;
 - (double) backgroundTimeRemaining;
 - (id) badgeString;


@end
