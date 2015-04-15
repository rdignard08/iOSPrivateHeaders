
@interface UIDeviceWhiteColor : UIColor {

    double whiteComponent;
    double alphaComponent;
    ^{CGColor=} cachedColor;
    long long cachedColorOnceToken;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) set;
 - (id) initWithWhite:(double)a alpha:(double)b ;
 - (id) colorSpaceName;
 - (^{CGColor=}) _createCGColorWithAlpha:(double)a ;
 - (BOOL) getHue:(^d)a saturation:(^d)b brightness:(^d)c alpha:(^d)d ;
 - (^{CGColor=}) CGColor;
 - (BOOL) getRed:(^d)a green:(^d)b blue:(^d)c alpha:(^d)d ;
 - (void) setFill;
 - (id) colorWithAlphaComponent:(double)a ;
 - (double) alphaComponent;
 - (BOOL) getWhite:(^d)a alpha:(^d)b ;
 - (id) initWithCGColor:(^{CGColor=})a ;
 - (void) setStroke;


@end
