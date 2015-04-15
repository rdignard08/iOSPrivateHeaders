
@interface UICIColor : UIColor {

    @"CIColor" _ciColor;
    @"UIColor" _rgbColor;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) set;
 - (id) _rgbColor;
 - (id) CIColor;
 - (^{CGColor=}) CGColor;
 - (BOOL) getRed:(^d)agreen:(^d)bblue:(^d)calpha:(^d)d;
 - (void) setFill;
 - (id) colorWithAlphaComponent:(d)a;
 - (BOOL) getWhite:(^d)aalpha:(^d)b;
 - (id) initWithCIColor:(id)a;
 - (void) setStroke;


@end