
@interface AutoCropper : NSObject {

    @"NSNumber" bufferZone;
    BOOL shouldFavorBottom;
    BOOL shouldFavorTop;
    {CGSize="width"d"height"d} originalImageSize;
}
@property (nonatomic, retain, readwrite) NSNumber* bufferZone;
@property (nonatomic, assign, readwrite) NSNumber* shouldFavorBottom;
@property (nonatomic, assign, readwrite) NSNumber* shouldFavorTop;
@property (nonatomic, assign, readwrite) NSNumber* originalImageSize;

 - (id) init;
 - (void) setShouldFavorTop:(BOOL)a;
 - (void) setShouldFavorBottom:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectContainingRect:({CGRect={CGPoint=dd}{CGSize=dd}})aandOtherRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectWithSize:({CGSize=dd})aandPoint:({CGPoint=dd})binPosition:(int)cfromOriginalSize:({CGSize=dd})d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) scaleRect:({CGRect={CGPoint=dd}{CGSize=dd}})atoFitSize:({CGSize=dd})bwithAnchorPoint:({CGPoint=dd})c;
 - (int) determineBestPositionWithinSize:({CGSize=dd})aforImportantRect:({CGRect={CGPoint=dd}{CGSize=dd}})brestrictRect:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) scaleRect:({CGRect={CGPoint=dd}{CGSize=dd}})abyScale:(double)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) expandRect:({CGRect={CGPoint=dd}{CGSize=dd}})atoContainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeClippingWithinSize:({CGSize=dd})aandImportantRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (int) getRatioOfSize:({CGSize=dd})a;
 - (id) clusterRects:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeClippingWithinSize:({CGSize=dd})aandImportantRects:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeClippingWithinSize:({CGSize=dd})aforImportantRect:({CGRect={CGPoint=dd}{CGSize=dd}})bandType:(int)crestrictRect:({CGRect={CGPoint=dd}{CGSize=dd}})d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeClippingWithinSize:({CGSize=dd})aforMultipleRects:(id)b;
 - (id) bufferZone;
 - (void) setBufferZone:(id)a;
 - (BOOL) shouldFavorTop;
 - (BOOL) shouldFavorBottom;
 - ({CGSize=dd}) originalImageSize;
 - (void) setOriginalImageSize:({CGSize=dd})a;


@end
