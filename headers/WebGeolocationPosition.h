
@interface WebGeolocationPosition : NSObject {

    @"WebGeolocationPositionInternal" _internal;
}

 - (void) dealloc;
 - (id) initWithTimestamp:(double)alatitude:(double)blongitude:(double)caccuracy:(double)d;
 - (id) initWithGeolocationPosition:({PassRefPtr<WebCore::GeolocationPosition>=^{GeolocationPosition}})a;


@end
