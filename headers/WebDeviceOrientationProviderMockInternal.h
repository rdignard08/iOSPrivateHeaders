
@interface WebDeviceOrientationProviderMockInternal : NSObject {

    m_ptr* m_core;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (id) init;
 - (void) setOrientation:(id)a ;
 - (void) startUpdating;
 - (void) stopUpdating;
 - (id) lastOrientation;
 - (void) setController:(^{DeviceOrientationController=})a ;


@end
