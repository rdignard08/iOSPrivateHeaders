
@protocol NSCoding, NSCopying;
@interface UIKBShape : NSObject <NSCoding, NSCopying> {

    UIKBGeometry* m_geometry;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_frame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_paddedFrame;
    unsigned long long m_uid;
    BOOL m_scaled;
    UIKBShape* m_originalShape;
}
@property (nonatomic, retain, readwrite) UIKBGeometry* geometry;
@property (nonatomic, assign, readwrite) NSNumber* frame;
@property (nonatomic, assign, readwrite) NSNumber* paddedFrame;
@property (nonatomic, assign, readonly) NSNumber* uid;
@property (nonatomic, retain, readwrite) UIKBShape* originalShape;
@property (nonatomic, assign, readwrite) NSNumber* scaled;
 + (id) shape;
 + (id) shapeByCombining:(id)awithShape:(id)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithGeometry:(id)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})bpaddedFrame:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - (id) geometry;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) paddedFrame;
 - (void) setPaddedFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setGeometry:(id)a;
 - (id) originalShape;
 - (void) setOriginalShape:(id)a;
 - (unsigned long long) uid;
 - (void) addRectFrom:(id)awidthFraction:(double)bheightFraction:(double)cadjustOriginXFactor:(double)dadjustOriginYFactor:(double)eabsoluteOriginFactors:(BOOL)f;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _scaleRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainYAxis:(BOOL)b;
 - (void) makeLikeOther:(id)a;
 - (BOOL) shouldUseGeometry;
 - (void) addRectFrom:(id)a;
 - (void) addRectFrom:(id)awidthFraction:(double)bheightFraction:(double)cadjustOriginXFactor:(double)dadjustOriginYFactor:(double)e;
 - (void) addRectFrom:(id)amergeActionFactors:(id)b;
 - (void) scaleWidth:(double)a;
 - (void) scaleIfNeeded:(double)aonlyYAxis:(BOOL)b;
 - (BOOL) scaled;
 - (void) setScaled:(BOOL)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
