
@protocol WebGeolocationCoreLocationUpdateListener;
@interface _WebCoreLocationUpdateThreadingProxy : NSObject <WebGeolocationCoreLocationUpdateListener> {

    WebGeolocationProviderIOS* _provider;
}

 - (void) resetGeolocation;
 - (id) initWithProvider:(id)a ;
 - (void) geolocationAuthorizationGranted;
 - (void) geolocationAuthorizationDenied;
 - (void) positionChanged:(^{GeolocationPosition=IddddddddBBBB})a ;
 - (void) errorOccurred:(id)a ;


@end
