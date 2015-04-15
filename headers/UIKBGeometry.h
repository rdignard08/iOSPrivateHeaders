
@protocol NSCoding, NSCopying;
@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {

    NSString* m_name;
    {?="amount"d"unit"i} m_x;
    {?="amount"d"unit"i} m_y;
    {?="amount"d"unit"i} m_w;
    {?="amount"d"unit"i} m_h;
    {?="amount"d"unit"i} m_paddingTop;
    {?="amount"d"unit"i} m_paddingLeft;
    {?="amount"d"unit"i} m_paddingBottom;
    {?="amount"d"unit"i} m_paddingRight;
    BOOL m_explicitlySpecified;
}
@property (nonatomic, retain, readwrite) NSString* name;
@property (nonatomic, assign, readwrite, setter=setX:) NSNumber* x;
@property (nonatomic, assign, readwrite, setter=setY:) NSNumber* y;
@property (nonatomic, assign, readwrite, setter=setW:) NSNumber* w;
@property (nonatomic, assign, readwrite, setter=setH:) NSNumber* h;
@property (nonatomic, assign, readwrite, setter=setPaddingTop:) NSNumber* paddingTop;
@property (nonatomic, assign, readwrite, setter=setPaddingLeft:) NSNumber* paddingLeft;
@property (nonatomic, assign, readwrite, setter=setPaddingBottom:) NSNumber* paddingBottom;
@property (nonatomic, assign, readwrite, setter=setPaddingRight:) NSNumber* paddingRight;
@property (nonatomic, assign, readwrite) NSNumber* explicitlySpecified;
 + (id) geometry;
 + (void) performOperations:(@?)awithScale:(double)b;
 + (id) geometryWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) geometryWithOriginValue:({?=di})asizeValue:({?=di})b;
 + (id) codeStringForValue:({?=di})a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (BOOL) isEqual:(id)a ;
 - ({?=di}) x;
 - (void) setX:({?=di})a ;
 - ({?=di}) y;
 - (void) setY:({?=di})a ;
 - ({?=di}) paddingTop;
 - (void) setPaddingTop:({?=di})a ;
 - (void) setPaddingLeft:({?=di})a ;
 - ({?=di}) paddingLeft;
 - ({?=di}) paddingRight;
 - (id) shortDescription;
 - ({?=di}) w;
 - ({?=di}) h;
 - (void) setW:({?=di})a ;
 - (void) setH:({?=di})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) paddedFrameWithResolvedFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameWithContainingFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({?=di}) paddingBottom;
 - (void) setPaddingBottom:({?=di})a ;
 - (void) setPaddingRight:({?=di})a ;
 - (BOOL) explicitlySpecified;
 - (void) setExplicitlySpecified:(BOOL)a ;
 - (id) initWithName:(id)a rect:({?=[4{?=di}]})b padding:({?=[4{?=di}]})c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) paddedFrameWithContainingFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) overrideGeometry:(id)a ;
 - (BOOL) usesPercentages;
 - (BOOL) usesAutomaticMetrics;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) setName:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;


@end
