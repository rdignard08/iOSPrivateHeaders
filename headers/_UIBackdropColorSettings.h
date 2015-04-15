
@interface _UIBackdropColorSettings : NSObject {

    BOOL _hasObservedValues;
    double _averageHue;
    double _averageSaturation;
    double _averageBrightness;
    double _contrast;
    @"_UIBackdropViewSettings" _parentSettings;
    double _previousAverageHue;
    double _previousAverageSaturation;
    double _previousAverageBrightness;
    double _previousContrast;
}
@property (nonatomic, assign, readwrite) NSNumber* averageHue;
@property (nonatomic, assign, readwrite) NSNumber* averageSaturation;
@property (nonatomic, assign, readwrite) NSNumber* averageBrightness;
@property (nonatomic, assign, readwrite) NSNumber* contrast;
@property (nonatomic, assign, readonly) UIColor* color;
@property (nonatomic, assign, readwrite) _UIBackdropViewSettings* parentSettings;
@property (nonatomic, assign, readwrite) NSNumber* previousAverageHue;
@property (nonatomic, assign, readwrite) NSNumber* previousAverageSaturation;
@property (nonatomic, assign, readwrite) NSNumber* previousAverageBrightness;
@property (nonatomic, assign, readwrite) NSNumber* previousContrast;
@property (nonatomic, assign, readwrite) NSNumber* hasObservedValues;

 - (void) setValuesFromModel:(id)a;
 - (void) setAverageHue:(double)a;
 - (void) setAverageSaturation:(double)a;
 - (void) setAverageBrightness:(double)a;
 - (void) setContrast:(double)a;
 - (void) setDefaultValues;
 - (double) averageBrightness;
 - (void) setParentSettings:(id)a;
 - (double) averageHue;
 - (double) averageSaturation;
 - (double) contrast;
 - (void) setPreviousAverageHue:(double)a;
 - (void) setPreviousAverageSaturation:(double)a;
 - (void) setPreviousAverageBrightness:(double)a;
 - (void) setPreviousContrast:(double)a;
 - (void) setHasObservedValues:(BOOL)a;
 - (id) parentSettings;
 - (double) previousAverageHue;
 - (double) previousAverageSaturation;
 - (double) previousAverageBrightness;
 - (double) previousContrast;
 - (BOOL) hasObservedValues;
 - (BOOL) applyCABackdropLayerStatistics:(id)a;
 - (id) color;


@end
