
@interface WebGeolocationPosition : NSObject {

    @"WebGeolocationPositionInternal" _internal;
}

 - (void) dealloc;
 - (id) initWithTimestamp:(d)alatitude:(d)blongitude:(d)caccuracy:(d)d;
 - (id) initWithGeolocationPosition:({PassRefPtr<WebCore::GeolocationPosition>=^{GeolocationPosition}})a;


@end
