
@interface WebCoreMotionManager : NSObject {

    CMMotionManager* m_motionManager;
    CLLocationManager* m_locationManager;
    {HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> >="m_impl"{HashTable<WebCore::DeviceMotionClientIOS *, WebCore::DeviceMotionClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> >="m_table"^^{DeviceMotionClientIOS}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} m_deviceMotionClients;
    {HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> >="m_impl"{HashTable<WebCore::DeviceOrientationClientIOS *, WebCore::DeviceOrientationClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> >="m_table"^^{DeviceOrientationClientIOS}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} m_deviceOrientationClients;
    NSTimer* m_updateTimer;
    BOOL m_gyroAvailable;
    BOOL m_headingAvailable;
}
 + (id) sharedManager;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) init;
 - (void) update;
 - (void) addMotionClient:(^{DeviceMotionClientIOS=^^?@^{DeviceMotionController}{RefPtr<WebCore::DeviceMotionData>=^{DeviceMotionData}}B})a ;
 - (void) removeMotionClient:(^{DeviceMotionClientIOS=^^?@^{DeviceMotionController}{RefPtr<WebCore::DeviceMotionData>=^{DeviceMotionData}}B})a ;
 - (void) addOrientationClient:(^{DeviceOrientationClientIOS=^^?@^{DeviceOrientationController}{RefPtr<WebCore::DeviceOrientationData>=^{DeviceOrientationData}}B})a ;
 - (void) removeOrientationClient:(^{DeviceOrientationClientIOS=^^?@^{DeviceOrientationController}{RefPtr<WebCore::DeviceOrientationData>=^{DeviceOrientationData}}B})a ;
 - (void) initializeOnMainThread;
 - (void) checkClientStatus;
 - (BOOL) headingAvailable;
 - (void) sendMotionData:(id)a withHeading:(id)b ;
 - (void) sendAccelerometerData:(id)a ;
 - (BOOL) gyroAvailable;


@end
