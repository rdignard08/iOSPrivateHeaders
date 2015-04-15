
@interface WebMediaSessionHelper : NSObject {

    ^{MediaSessionManageriOS=^^?^^?^^?[4I]{Vector<WebCore::MediaSession *, 0, WTF::CrashOnOverflow>=^^{MediaSession}II}{Vector<WebCore::MediaSessionManagerClient *, 0, WTF::CrashOnOverflow>=^^{MediaSessionManagerClient}II}{unique_ptr<WebCore::RemoteCommandListener, std::__1::default_delete<WebCore::RemoteCommandListener> >={__compressed_pair<WebCore::RemoteCommandListener *, std::__1::default_delete<WebCore::RemoteCommandListener> >=^{RemoteCommandListener}}}{unique_ptr<WebCore::SystemSleepListener, std::__1::default_delete<WebCore::SystemSleepListener> >={__compressed_pair<WebCore::SystemSleepListener *, std::__1::default_delete<WebCore::SystemSleepListener> >=^{SystemSleepListener}}}{RefPtr<WebCore::AudioHardwareListener>=^{AudioHardwareListener}}B{RetainPtr<WebMediaSessionHelper>=^v}} _callback;
    {RetainPtr<MPVolumeView>="m_ptr"^v} _volumeView;
    {RetainPtr<MPAVRoutingController>="m_ptr"^v} _airPlayPresenceRoutingController;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) initWithCallback:(^{MediaSessionManageriOS=^^?^^?^^?[4I]{Vector<WebCore::MediaSession *, 0, WTF::CrashOnOverflow>=^^{MediaSession}II}{Vector<WebCore::MediaSessionManagerClient *, 0, WTF::CrashOnOverflow>=^^{MediaSessionManagerClient}II}{unique_ptr<WebCore::RemoteCommandListener, std::__1::default_delete<WebCore::RemoteCommandListener> >={__compressed_pair<WebCore::RemoteCommandListener *, std::__1::default_delete<WebCore::RemoteCommandListener> >=^{RemoteCommandListener}}}{unique_ptr<WebCore::SystemSleepListener, std::__1::default_delete<WebCore::SystemSleepListener> >={__compressed_pair<WebCore::SystemSleepListener *, std::__1::default_delete<WebCore::SystemSleepListener> >=^{SystemSleepListener}}}{RefPtr<WebCore::AudioHardwareListener>=^{AudioHardwareListener}}B{RetainPtr<WebMediaSessionHelper>=^v}})a;
 - (void) clearCallback;
 - (BOOL) hasWirelessTargetsAvailable;
 - (void) startMonitoringAirPlayRoutes;
 - (void) stopMonitoringAirPlayRoutes;
 - (void) wirelessRoutesAvailableDidChange:(id)a;
 - (void) interruption:(id)a;
 - (void) applicationWillEnterForeground:(id)a;
 - (void) applicationDidBecomeActive:(id)a;
 - (void) applicationWillResignActive:(id)a;
 - (void) allocateVolumeView;


@end
