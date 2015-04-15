
@interface LSObserverTimer : NSObject {

    NSObject<OS_dispatch_queue>* _queue;
    NSString* _name;
    NSTimer* _timer;
    NSDate* _lastFiredDate;
    NSMutableSet* _applications;
    NSMutableSet* _plugins;
    double _minInterval;
    double _latency;
    SEL _appObserverSelector;
}
@property (nonatomic, retain, readwrite) NSString* name;
@property (nonatomic, retain, readwrite) NSTimer* timer;
@property (nonatomic, retain, readwrite) NSDate* lastFiredDate;
@property (nonatomic, retain, readwrite) NSMutableSet* applications;
@property (nonatomic, retain, readwrite) NSMutableSet* plugins;
@property (nonatomic, assign, readonly) NSNumber* minInterval;
@property (nonatomic, assign, readonly) NSNumber* latency;
@property (atomic, assign, readwrite) NSNumber* appObserverSelector;

 - (id) timer;
 - (void) setTimer:(id)a ;
 - (id) applications;
 - (void) stopTimer;
 - (void) addApplication:(id)a ;
 - (id) lastFiredDate;
 - (double) minInterval;
 - (double) latency;
 - (void) setLastFiredDate:(id)a ;
 - (SEL) appObserverSelector;
 - (id) initWithAppSelector:(SEL)a queue:(id)b ;
 - (void) removeApplication:(id)a ;
 - (void) notifyObservers:(id)a withApplication:(id)b ;
 - (void) setApplications:(id)a ;
 - (void) setPlugins:(id)a ;
 - (void) setAppObserverSelector:(SEL)a ;
 - (void) clear;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (void) sendMessage:(id)a ;
 - (void) setName:(id)a ;
 - (id) plugins;


@end
