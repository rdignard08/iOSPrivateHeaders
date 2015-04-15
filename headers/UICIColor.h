
@interface UICIColor : UIColor {

    CIColor* _ciColor;
    UIColor* _rgbColor;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) set;
 - (id) _rgbColor;
 - (id) CIColor;
 - (^{CGColor=}) CGColor;
 - (BOOL) getRed:(^d)a green:(^d)b blue:(^d)c alpha:(^d)d ;
 - (void) setFill;
 - (id) colorWithAlphaComponent:(double)a ;
 - (BOOL) getWhite:(^d)a alpha:(^d)b ;
 - (id) initWithCIColor:(id)a ;
 - (void) setStroke;


@end
