
@protocol NSCopying, NSCoding;
@interface NSAffineTransform : NSObject <NSCopying, NSCoding> {

    {?="m11"d"m12"d"m21"d"m22"d"tX"d"tY"d} _transformStruct;
}
@property (atomic, assign, readwrite) NSNumber* transformStruct;
 + (id) transform;

 - (void) encodeWithCAMLWriter:(id)a ;
 - (id) CAMLType;
 - (id) CA_addValue:(id)a multipliedBy:(int)b ;
 - (id) CA_interpolateValue:(id)a byFraction:(float)b ;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - ({?=dddddd}) transformStruct;
 - (void) setTransformStruct:({?=dddddd})a ;
 - (id) initWithTransform:(id)a ;
 - (void) translateXBy:(double)a yBy:(double)b ;
 - (void) rotateByDegrees:(double)a ;
 - (void) rotateByRadians:(double)a ;
 - (void) scaleBy:(double)a ;
 - (void) scaleXBy:(double)a yBy:(double)b ;
 - (void) appendTransform:(id)a ;
 - (void) prependTransform:(id)a ;
 - ({CGPoint=dd}) transformPoint:({CGPoint=dd})a ;
 - ({CGSize=dd}) transformSize:({CGSize=dd})a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) invert;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
