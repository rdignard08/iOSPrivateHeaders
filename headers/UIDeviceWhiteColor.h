
@interface UIDeviceWhiteColor : UIColor {

    d whiteComponent;
    d alphaComponent;
    ^{CGColor=} cachedColor;
    q cachedColorOnceToken;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) set;
 - (id) initWithWhite:(d)aalpha:(d)b;
 - (id) colorSpaceName;
 - (^{CGColor=}) _createCGColorWithAlpha:(d)a;
 - (BOOL) getHue:(^d)asaturation:(^d)bbrightness:(^d)calpha:(^d)d;
 - (^{CGColor=}) CGColor;
 - (BOOL) getRed:(^d)agreen:(^d)bblue:(^d)calpha:(^d)d;
 - (void) setFill;
 - (id) colorWithAlphaComponent:(d)a;
 - (d) alphaComponent;
 - (BOOL) getWhite:(^d)aalpha:(^d)b;
 - (id) initWithCGColor:(^{CGColor=})a;
 - (void) setStroke;


@end
