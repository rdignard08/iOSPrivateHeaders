
@interface UICGColor : UIColor {

    ^{CGColor=} cachedColor;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) set;
 - (id) colorSpaceName;
 - (BOOL) isPatternColor;
 - (^{CGColor=}) CGColor;
 - (BOOL) getRed:(^d)agreen:(^d)bblue:(^d)calpha:(^d)d;
 - (void) setFill;
 - (id) colorWithAlphaComponent:(d)a;
 - (d) alphaComponent;
 - (BOOL) getWhite:(^d)aalpha:(^d)b;
 - (id) initWithCGColor:(^{CGColor=})a;
 - (void) setStroke;


@end
