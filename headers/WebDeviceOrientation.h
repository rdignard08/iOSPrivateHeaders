
@interface WebDeviceOrientation : NSObject {

    WebDeviceOrientationInternal* m_internal;
}

 - (void) dealloc;
 - (id) initWithCoreDeviceOrientation:({PassRefPtr<WebCore::DeviceOrientationData>=^{DeviceOrientationData}})a ;
 - (id) initWithCanProvideAlpha:(BOOL)a alpha:(double)b canProvideBeta:(BOOL)c beta:(double)d canProvideGamma:(BOOL)e gamma:(double)f ;


@end
