
@interface UICGColor : UIColor {

    ^{CGColor=} cachedColor;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) set;
 - (id) colorSpaceName;
 - (BOOL) isPatternColor;
 - (^{CGColor=}) CGColor;
 - (BOOL) getRed:(^d)a green:(^d)b blue:(^d)c alpha:(^d)d ;
 - (void) setFill;
 - (id) colorWithAlphaComponent:(double)a ;
 - (double) alphaComponent;
 - (BOOL) getWhite:(^d)a alpha:(^d)b ;
 - (id) initWithCGColor:(^{CGColor=})a ;
 - (void) setStroke;


@end
