
@interface UIDeviceWhiteColor : UIColor {

    double whiteComponent;
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
 - (id) initWithWhite:(double)aalpha:(double)b;
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
 - (void) setStroke;


@end
