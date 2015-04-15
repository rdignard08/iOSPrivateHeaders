
@protocol NSCoding, NSCopying;
@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying> {

    NSArray* colorStops;
    NSArray* colorMidpointLocations;
    NSArray* opacityStops;
    NSArray* opacityMidpointLocations;
    double smoothingCoefficient;
    {_psdGradientColor="red"d"green"d"blue"d"alpha"d} fillColor;
    int blendMode;
    {?="colorEdgePixel"b2"opacityEdgePixel"b2"isDithered"b1"reserved"b3} pgeFlags;
}
@property (nonatomic, assign, readwrite) NSNumber* blendMode;
 + (void) initialize;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (int) blendMode;
 - (id) colorStops;
 - (id) colorMidpointLocations;
 - (id) opacityStops;
 - (id) opacityMidpointLocations;
 - (double) smoothingCoefficient;
 - (BOOL) isDithered;
 - (void) setBlendMode:(int)a ;
 - (id) initWithColorStops:(id)a colorMidpoints:(id)b opacityStops:(id)c opacityMidpoints:(id)d smoothingCoefficient:(double)e fillColor:({_psdGradientColor=dddd})f dither:(BOOL)g ;
 - (id) _cleanedUpMidpointLocationsFromLocations:(id)a ;
 - (void) _createOrderedStops:(^@)a midpoints:(^@)b fromStops:(id)c midpoints:(id)d edgePixel:(^q)e ;
 - (double) _smoothedInterpolationOfLocation:(double)a betweenLower:(double)b upper:(double)c scaledMidpoint:(double)d ;
 - (id) initWithColorStops:(id)a colorMidpoints:(id)b opacityStops:(id)c opacityMidpoints:(id)d smoothingCoefficient:(double)e fillCoefficient:(double)f ;
 - ({_psdGradientColor=dddd}) _smoothedGradientColorAtLocation:(double)a ;
 - (double) fillCoefficient;
 - (BOOL) hasEdgePixel;
 - (void) setColorStops:(id)a midpoints:(id)b ;
 - (void) setOpacityStops:(id)a midpoints:(id)b ;
 - (void) setSmoothingCoefficient:(double)a ;
 - (void) setFillCoefficient:(double)a ;
 - (void) customizeForDistance:(double)a ;
 - ({_psdGradientColor=dddd}) fillColor;


@end
