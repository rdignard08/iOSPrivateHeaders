
@interface WebDeviceOrientation : NSObject {

    @"WebDeviceOrientationInternal" m_internal;
}

 - (void) dealloc;
 - (id) initWithCoreDeviceOrientation:({PassRefPtr<WebCore::DeviceOrientationData>=^{DeviceOrientationData}})a;
 - (id) initWithCanProvideAlpha:(BOOL)aalpha:(d)bcanProvideBeta:(BOOL)cbeta:(d)dcanProvideGamma:(BOOL)egamma:(d)f;


@end
