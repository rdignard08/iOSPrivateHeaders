
@interface WebGeolocationPosition : NSObject {

    WebGeolocationPositionInternal* _internal;
}

 - (void) dealloc;
 - (id) initWithTimestamp:(double)a latitude:(double)b longitude:(double)c accuracy:(double)d ;
 - (id) initWithGeolocationPosition:({PassRefPtr<WebCore::GeolocationPosition>=^{GeolocationPosition}})a ;


@end
