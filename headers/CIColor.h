
@protocol NSCoding, NSCopying;
@interface CIColor : NSObject <NSCoding, NSCopying> {

    ^v _priv;
    [3^v] _pad;
}
 + (id) colorWithSRGBRed:(double)agreen:(double)bblue:(double)calpha:(double)d;
 + (id) colorWithSRGBRed:(double)agreen:(double)bblue:(double)c;
 + (id) colorWithRed:(double)agreen:(double)bblue:(double)calpha:(double)d;
 + (id) colorWithCGColor:(^{CGColor=})a;
 + (id) colorWithRed:(double)agreen:(double)bblue:(double)c;
 + (id) colorWithString:(id)a;

 - (id) initWithColor:(id)a ;
 - (r^d) components;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) initWithString:(id)a ;
 - (unsigned long long) numberOfComponents;
 - (^{CGColor=}) cgColor;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (^{CGColor=}) CGColor;
 - (double) red;
 - (double) green;
 - (double) blue;
 - (double) alpha;
 - (id) stringRepresentation;
 - (id) initWithCGColor:(^{CGColor=})a ;
 - (id) initWithRed:(double)a green:(double)b blue:(double)c alpha:(double)d ;
 - (^{CGColorSpace=}) colorSpace;


@end
