
@interface WebDeviceOrientation : NSObject {

    WebDeviceOrientationInternal m_internal;
}

 - (void) dealloc;
 - (id) initWithCoreDeviceOrientation:({PassRefPtr<WebCore::DeviceOrientationData>=^{DeviceOrientationData}})a;
 - (id) initWithCanProvideAlpha:(BOOL)aalpha:(double)bcanProvideBeta:(BOOL)cbeta:(double)dcanProvideGamma:(BOOL)egamma:(double)f;


@end
