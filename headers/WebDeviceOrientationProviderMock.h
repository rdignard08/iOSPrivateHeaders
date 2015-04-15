
@protocol WebDeviceOrientationProvider;
@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {

    WebDeviceOrientationProviderMockInternal* m_internal;
}
 + (id) shared;

 - (void) dealloc;
 - (id) init;
 - (void) setOrientation:(id)a ;
 - (void) startUpdating;
 - (void) stopUpdating;
 - (id) lastOrientation;
 - (void) setController:(^{DeviceOrientationController=})a ;


@end
