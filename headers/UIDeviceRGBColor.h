
@interface UIDeviceRGBColor : UIColor {

    double redComponent;
    double greenComponent;
    double blueComponent;
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
 - (id) initWithHue:(double)a saturation:(double)b brightness:(double)c alpha:(double)d ;
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
 - (id) initWithRed:(double)a green:(double)b blue:(double)c alpha:(double)d ;
 - (void) setStroke;


@end
