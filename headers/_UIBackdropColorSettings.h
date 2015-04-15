
@interface _UIBackdropColorSettings : NSObject {

    BOOL _hasObservedValues;
    d _averageHue;
    d _averageSaturation;
    d _averageBrightness;
    d _contrast;
    @"_UIBackdropViewSettings" _parentSettings;
    d _previousAverageHue;
    d _previousAverageSaturation;
    d _previousAverageBrightness;
    d _previousContrast;
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
 - (void) setAverageHue:(d)a;
 - (void) setAverageSaturation:(d)a;
 - (void) setAverageBrightness:(d)a;
 - (void) setContrast:(d)a;
 - (void) setDefaultValues;
 - (d) averageBrightness;
 - (void) setParentSettings:(id)a;
 - (d) averageHue;
 - (d) averageSaturation;
 - (d) contrast;
 - (void) setPreviousAverageHue:(d)a;
 - (void) setPreviousAverageSaturation:(d)a;
 - (void) setPreviousAverageBrightness:(d)a;
 - (void) setPreviousContrast:(d)a;
 - (void) setHasObservedValues:(BOOL)a;
 - (id) parentSettings;
 - (d) previousAverageHue;
 - (d) previousAverageSaturation;
 - (d) previousAverageBrightness;
 - (d) previousContrast;
 - (BOOL) hasObservedValues;
 - (BOOL) applyCABackdropLayerStatistics:(id)a;
 - (id) color;


@end
