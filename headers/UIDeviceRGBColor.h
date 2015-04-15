
@interface UIDeviceRGBColor : UIColor {

    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    ^{CGColor=} cachedColor;
    long long cachedColorOnceToken;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) set;
 - (id) initWithHue:(double)asaturation:(double)bbrightness:(double)calpha:(double)d;
 - (id) colorSpaceName;
 - (^{CGColor=}) _createCGColorWithAlpha:(double)a;
 - (BOOL) getHue:(^d)asaturation:(^d)bbrightness:(^d)calpha:(^d)d;
 - (^{CGColor=}) CGColor;
 - (BOOL) getRed:(^d)agreen:(^d)bblue:(^d)calpha:(^d)d;
 - (void) setFill;
 - (id) colorWithAlphaComponent:(double)a;
 - (double) alphaComponent;
 - (BOOL) getWhite:(^d)aalpha:(^d)b;
 - (id) initWithCGColor:(^{CGColor=})a;
 - (id) initWithRed:(double)agreen:(double)bblue:(double)calpha:(double)d;
 - (void) setStroke;


@end
