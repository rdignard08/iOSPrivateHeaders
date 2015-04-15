
@protocol NSCoding, NSCopying;
@interface CIColor : NSObject <NSCoding, NSCopying> {

    ^v _priv;
    [3^v] _pad;
}
 + (id) colorWithSRGBRed:(d)agreen:(d)bblue:(d)calpha:(d)d;
 + (id) colorWithSRGBRed:(d)agreen:(d)bblue:(d)c;
 + (id) colorWithRed:(d)agreen:(d)bblue:(d)calpha:(d)d;
 + (id) colorWithCGColor:(^{CGColor=})a;
 + (id) colorWithRed:(d)agreen:(d)bblue:(d)c;
 + (id) colorWithString:(id)a;

 - (id) initWithColor:(id)a;
 - (r^d) components;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithString:(id)a;
 - (Q) numberOfComponents;
 - (^{CGColor=}) cgColor;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (^{CGColor=}) CGColor;
 - (d) red;
 - (d) green;
 - (d) blue;
 - (d) alpha;
 - (id) stringRepresentation;
 - (id) initWithCGColor:(^{CGColor=})a;
 - (id) initWithRed:(d)agreen:(d)bblue:(d)calpha:(d)d;
 - (^{CGColorSpace=}) colorSpace;


@end
