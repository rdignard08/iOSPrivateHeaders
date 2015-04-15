
@protocol NSCopying, NSCoding;
@interface CIVector : NSObject <NSCopying, NSCoding> {

    Q _count;
    (?="vec"[4d]"ptr"^d) _u;
}
 + (id) vectorWithX:(d)aY:(d)bZ:(d)cW:(d)d;
 + (id) vectorWithString:(id)a;
 + (id) vectorWithX:(d)aY:(d)b;
 + (id) vectorWithX:(d)aY:(d)bZ:(d)c;
 + (id) vectorWithCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) vectorWithValues:(r^d)acount:(Q)b;
 + (id) vectorWithX:(d)a;
 + (id) vectorWithCGPoint:({CGPoint=dd})a;
 + (id) vectorWithCGAffineTransform:({CGAffineTransform=dddddd})a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithString:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({CGAffineTransform=dddddd}) CGAffineTransformValue;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) CGRectValue;
 - (id) stringRepresentation;
 - (d) X;
 - (d) Y;
 - (d) Z;
 - (d) W;
 - (id) initWithValues:(r^d)acount:(Q)b;
 - (id) initWithX:(d)a;
 - (id) initWithX:(d)aY:(d)b;
 - (id) initWithX:(d)aY:(d)bZ:(d)c;
 - (id) initWithX:(d)aY:(d)bZ:(d)cW:(d)d;
 - (id) initWithCGPoint:({CGPoint=dd})a;
 - (id) initWithCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) initWithCGAffineTransform:({CGAffineTransform=dddddd})a;
 - (^d) _values;
 - ({CGPoint=dd}) CGPointValue;
 - (d) valueAtIndex:(Q)a;


@end
