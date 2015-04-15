
@protocol NSCopying;
@interface UIKBRenderGeometry : NSObject <NSCopying> {

    BOOL _detachedVariants;
    BOOL _tallPopup;
    int _roundRectCorners;
    int _popupBias;
    double _roundRectRadius;
    long long _flickDirection;
    NSValue* _splitLeftRect;
    NSValue* _splitRightRect;
    {CGPoint="x"d"y"d} _popupSource;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _paddedFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _displayFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _symbolFrame;
}
@property (nonatomic, assign, readwrite) NSNumber* frame;
@property (nonatomic, assign, readwrite) NSNumber* paddedFrame;
@property (nonatomic, assign, readwrite) NSNumber* displayFrame;
@property (nonatomic, assign, readwrite) NSNumber* symbolFrame;
@property (nonatomic, assign, readwrite) NSNumber* popupSource;
@property (nonatomic, assign, readwrite) NSNumber* roundRectRadius;
@property (nonatomic, assign, readwrite) NSNumber* roundRectCorners;
@property (nonatomic, assign, readwrite) NSNumber* popupBias;
@property (nonatomic, assign, readwrite) NSNumber* flickDirection;
@property (nonatomic, assign, readwrite) NSNumber* detachedVariants;
@property (nonatomic, assign, readwrite) NSNumber* tallPopup;
@property (nonatomic, retain, readwrite) NSValue* splitLeftRect;
@property (nonatomic, retain, readwrite) NSValue* splitRightRect;
@property (nonatomic, assign, readonly) NSNumber* displayInsets;
@property (nonatomic, assign, readonly) NSNumber* paddedInsets;
 + (id) geometryWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})apaddedFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 + (id) geometryWithShape:(id)a;
 + (id) sortedGeometries:(id)aleftToRight:(BOOL)b;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) paddedFrame;
 - (void) setDisplayFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setPopupBias:(int)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) displayFrame;
 - (void) setSymbolFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) symbolFrame;
 - (void) setPaddedFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setRoundRectCorners:(int)a ;
 - (void) setSplitLeftRect:(id)a ;
 - (void) setSplitRightRect:(id)a ;
 - (void) setRoundRectRadius:(double)a ;
 - (id) splitLeftRect;
 - (id) splitRightRect;
 - (void) setFlickDirection:(long long)a ;
 - (long long) flickDirection;
 - ({UIEdgeInsets=dddd}) displayInsets;
 - (id) _copyForDirection:(long long)a positionFactor:(double)b sizeFactor:(double)c scale:(double)d ;
 - (void) applyOffset:({CGPoint=dd})a ;
 - (void) makeIntegralWithScale:(double)a ;
 - (void) adjustToTopWithInsets:({UIEdgeInsets=dddd})a ;
 - (id) copyForFlickDirection:(long long)a scale:(double)b ;
 - (id) copyForPopupDirection:(long long)a scale:(double)b ;
 - (unsigned long long) adjustForTranslucentGapsInFrameWithSize_10Key:({CGSize=dd})a centerX:(double)b isInBottomRow:(BOOL)c ;
 - (void) setPopupSource:({CGPoint=dd})a ;
 - (void) applyInsets:({UIEdgeInsets=dddd})a ;
 - (id) initWithShape:(id)a ;
 - ({CGPoint=dd}) popupSource;
 - (int) roundRectCorners;
 - (int) popupBias;
 - (BOOL) detachedVariants;
 - (BOOL) tallPopup;
 - (double) roundRectRadius;
 - (void) setDetachedVariants:(BOOL)a ;
 - (void) setTallPopup:(BOOL)a ;
 - (void) overlayWithGeometry:(id)a ;
 - (void) applyShadowInsets:({UIEdgeInsets=dddd})a ;
 - (id) iPhoneVariantGeometries:(unsigned long long)a ;
 - (id) iPadVariantGeometries:(unsigned long long)a rowLimit:(long long)b ;
 - (id) similarShape;
 - ({UIEdgeInsets=dddd}) paddedInsets;
 - (unsigned long long) adjustForTranslucentGapsWithSize:({CGSize=dd})a inFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
