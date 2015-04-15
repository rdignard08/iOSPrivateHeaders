
@protocol NSCopying;
@interface UIKBRenderGeometry : NSObject <NSCopying> {

    BOOL _detachedVariants;
    BOOL _tallPopup;
    i _roundRectCorners;
    i _popupBias;
    d _roundRectRadius;
    q _flickDirection;
    @"NSValue" _splitLeftRect;
    @"NSValue" _splitRightRect;
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

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) paddedFrame;
 - (void) setDisplayFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setPopupBias:(i)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) displayFrame;
 - (void) setSymbolFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) symbolFrame;
 - (void) setPaddedFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setRoundRectCorners:(i)a;
 - (void) setSplitLeftRect:(id)a;
 - (void) setSplitRightRect:(id)a;
 - (void) setRoundRectRadius:(d)a;
 - (id) splitLeftRect;
 - (id) splitRightRect;
 - (void) setFlickDirection:(q)a;
 - (q) flickDirection;
 - ({UIEdgeInsets=dddd}) displayInsets;
 - (id) _copyForDirection:(q)apositionFactor:(d)bsizeFactor:(d)cscale:(d)d;
 - (void) applyOffset:({CGPoint=dd})a;
 - (void) makeIntegralWithScale:(d)a;
 - (void) adjustToTopWithInsets:({UIEdgeInsets=dddd})a;
 - (id) copyForFlickDirection:(q)ascale:(d)b;
 - (id) copyForPopupDirection:(q)ascale:(d)b;
 - (Q) adjustForTranslucentGapsInFrameWithSize_10Key:({CGSize=dd})acenterX:(d)bisInBottomRow:(BOOL)c;
 - (void) setPopupSource:({CGPoint=dd})a;
 - (void) applyInsets:({UIEdgeInsets=dddd})a;
 - (id) initWithShape:(id)a;
 - ({CGPoint=dd}) popupSource;
 - (i) roundRectCorners;
 - (i) popupBias;
 - (BOOL) detachedVariants;
 - (BOOL) tallPopup;
 - (d) roundRectRadius;
 - (void) setDetachedVariants:(BOOL)a;
 - (void) setTallPopup:(BOOL)a;
 - (void) overlayWithGeometry:(id)a;
 - (void) applyShadowInsets:({UIEdgeInsets=dddd})a;
 - (id) iPhoneVariantGeometries:(Q)a;
 - (id) iPadVariantGeometries:(Q)arowLimit:(q)b;
 - (id) similarShape;
 - ({UIEdgeInsets=dddd}) paddedInsets;
 - (Q) adjustForTranslucentGapsWithSize:({CGSize=dd})ainFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
