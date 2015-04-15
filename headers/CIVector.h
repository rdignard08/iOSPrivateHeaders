
@protocol NSCopying, NSCoding;
@interface CIVector : NSObject <NSCopying, NSCoding> {

    unsigned long long _count;
    (?="vec"[4d]"ptr"^d) _u;
}
 + (id) vectorWithX:(double)aY:(double)bZ:(double)cW:(double)d;
 + (id) vectorWithString:(id)a;
 + (id) vectorWithX:(double)aY:(double)b;
 + (id) vectorWithX:(double)aY:(double)bZ:(double)c;
 + (id) vectorWithCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) vectorWithValues:(r^d)acount:(unsigned long long)b;
 + (id) vectorWithX:(double)a;
 + (id) vectorWithCGPoint:({CGPoint=dd})a;
 + (id) vectorWithCGAffineTransform:({CGAffineTransform=dddddd})a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) initWithString:(id)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - ({CGAffineTransform=dddddd}) CGAffineTransformValue;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) CGRectValue;
 - (id) stringRepresentation;
 - (double) X;
 - (double) Y;
 - (double) Z;
 - (double) W;
 - (id) initWithValues:(r^d)a count:(unsigned long long)b ;
 - (id) initWithX:(double)a ;
 - (id) initWithX:(double)a Y:(double)b ;
 - (id) initWithX:(double)a Y:(double)b Z:(double)c ;
 - (id) initWithX:(double)a Y:(double)b Z:(double)c W:(double)d ;
 - (id) initWithCGPoint:({CGPoint=dd})a ;
 - (id) initWithCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) initWithCGAffineTransform:({CGAffineTransform=dddddd})a ;
 - (^d) _values;
 - ({CGPoint=dd}) CGPointValue;
 - (double) valueAtIndex:(unsigned long long)a ;


@end
