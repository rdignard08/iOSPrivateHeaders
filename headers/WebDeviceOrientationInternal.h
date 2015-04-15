
@interface WebDeviceOrientationInternal : NSObject {

    {RefPtr<WebCore::DeviceOrientationData>="m_ptr"^{DeviceOrientationData}} m_orientation;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (id) initWithCoreDeviceOrientation:({PassRefPtr<WebCore::DeviceOrientationData>=^{DeviceOrientationData}})a;


@end
