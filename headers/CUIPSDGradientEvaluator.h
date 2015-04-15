
@protocol NSCoding, NSCopying;
@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying> {

    @"NSArray" colorStops;
    @"NSArray" colorMidpointLocations;
    @"NSArray" opacityStops;
    @"NSArray" opacityMidpointLocations;
    d smoothingCoefficient;
    {_psdGradientColor="red"d"green"d"blue"d"alpha"d} fillColor;
    i blendMode;
    {?="colorEdgePixel"b2"opacityEdgePixel"b2"isDithered"b1"reserved"b3} pgeFlags;
}
@property (nonatomic, assign, readwrite) NSNumber* blendMode;
 + (void) initialize;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (i) blendMode;
 - (id) colorStops;
 - (id) colorMidpointLocations;
 - (id) opacityStops;
 - (id) opacityMidpointLocations;
 - (d) smoothingCoefficient;
 - (BOOL) isDithered;
 - (void) setBlendMode:(i)a;
 - (id) initWithColorStops:(id)acolorMidpoints:(id)bopacityStops:(id)copacityMidpoints:(id)dsmoothingCoefficient:(d)efillColor:({_psdGradientColor=dddd})fdither:(BOOL)g;
 - (id) _cleanedUpMidpointLocationsFromLocations:(id)a;
 - (void) _createOrderedStops:(^@)amidpoints:(^@)bfromStops:(id)cmidpoints:(id)dedgePixel:(^q)e;
 - (d) _smoothedInterpolationOfLocation:(d)abetweenLower:(d)bupper:(d)cscaledMidpoint:(d)d;
 - (id) initWithColorStops:(id)acolorMidpoints:(id)bopacityStops:(id)copacityMidpoints:(id)dsmoothingCoefficient:(d)efillCoefficient:(d)f;
 - ({_psdGradientColor=dddd}) _smoothedGradientColorAtLocation:(d)a;
 - (d) fillCoefficient;
 - (BOOL) hasEdgePixel;
 - (void) setColorStops:(id)amidpoints:(id)b;
 - (void) setOpacityStops:(id)amidpoints:(id)b;
 - (void) setSmoothingCoefficient:(d)a;
 - (void) setFillCoefficient:(d)a;
 - (void) customizeForDistance:(d)a;
 - ({_psdGradientColor=dddd}) fillColor;


@end
