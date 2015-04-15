
@protocol CLLocationManagerDelegate;
@interface WebGeolocationCoreLocationProvider : NSObject <CLLocationManagerDelegate> {

    <WebGeolocationCoreLocationUpdateListener>* _positionListener;
    m_ptr* _locationManager;
    BOOL _isWaitingForAuthorization;
    int _lastAuthorizationStatus;
}

 - (void) stop;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (void) start;
 - (void) setEnableHighAccuracy:(BOOL)a;
 - (id) initWithListener:(id)a;
 - (void) requestGeolocationAuthorization;
 - (void) createLocationManager;
 - (void) sendLocation:(id)a;
 - (void) locationManager:(id)adidUpdateLocations:(id)b;
 - (void) locationManager:(id)adidFailWithError:(id)b;
 - (void) locationManager:(id)adidChangeAuthorizationStatus:(int)b;


@end
