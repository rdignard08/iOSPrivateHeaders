
@interface WebNetworkStateObserver : NSObject {

    r^{NetworkStateNotifier={Vector<std::__1::function<void (bool)>, 0, WTF::CrashOnOverflow>=^{function<void (bool)>}II}BB{RetainPtr<WebNetworkStateObserver>=^v}} _notifier;
}
@property (nonatomic, assign, readwrite) NSNumber* notifier;

 - (void) dealloc;
 - (void) networkStateChanged:(id)a;
 - (id) initWithNotifier:(r^{NetworkStateNotifier={Vector<std::__1::function<void (bool)>, 0, WTF::CrashOnOverflow>=^{function<void (bool)>}II}BB{RetainPtr<WebNetworkStateObserver>=^v}})a;
 - (r^{NetworkStateNotifier={Vector<std::__1::function<void (bool)>, 0, WTF::CrashOnOverflow>=^{function<void (bool)>}II}BB{RetainPtr<WebNetworkStateObserver>=^v}}) notifier;
 - (void) setNotifier:(r^{NetworkStateNotifier={Vector<std::__1::function<void (bool)>, 0, WTF::CrashOnOverflow>=^{function<void (bool)>}II}BB{RetainPtr<WebNetworkStateObserver>=^v}})a;


@end
