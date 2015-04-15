
@interface WebGeolocationPositionInternal : NSObject {

    {RefPtr<WebCore::GeolocationPosition>="m_ptr"^{GeolocationPosition}} _position;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (id) initWithCoreGeolocationPosition:({PassRefPtr<WebCore::GeolocationPosition>=^{GeolocationPosition}})a;


@end
