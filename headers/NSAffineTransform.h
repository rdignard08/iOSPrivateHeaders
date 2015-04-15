
@protocol NSCopying, NSCoding;
@interface NSAffineTransform : NSObject <NSCopying, NSCoding> {

    {?="m11"d"m12"d"m21"d"m22"d"tX"d"tY"d} _transformStruct;
}
@property (atomic, assign, readwrite) NSNumber* transformStruct;
 + (id) transform;

 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLType;
 - (id) CA_addValue:(id)amultipliedBy:(i)b;
 - (id) CA_interpolateValue:(id)abyFraction:(f)b;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - ({?=dddddd}) transformStruct;
 - (void) setTransformStruct:({?=dddddd})a;
 - (id) initWithTransform:(id)a;
 - (void) translateXBy:(d)ayBy:(d)b;
 - (void) rotateByDegrees:(d)a;
 - (void) rotateByRadians:(d)a;
 - (void) scaleBy:(d)a;
 - (void) scaleXBy:(d)ayBy:(d)b;
 - (void) appendTransform:(id)a;
 - (void) prependTransform:(id)a;
 - ({CGPoint=dd}) transformPoint:({CGPoint=dd})a;
 - ({CGSize=dd}) transformSize:({CGSize=dd})a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) invert;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
