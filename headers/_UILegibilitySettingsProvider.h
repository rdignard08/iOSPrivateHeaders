
@interface _UILegibilitySettingsProvider : NSObject {

    BOOL _hasContrast;
    BOOL _accumulatorIsPrimed;
    double _mostRecentSaturation;
    double _accumulatedSaturation;
    double _mostRecentBrightness;
    double _accumulatedBrightness;
    @"UIColor" _contentColor;
    double _mostRecentContrast;
    double _accumulatedContrast;
    double _mostRecentLuminance;
    double _accumulatedLuminance;
    double _nextChangeBarrier;
    long long _currentStyle;
}
@property (nonatomic, assign, readwrite) NSNumber* mostRecentSaturation;
@property (nonatomic, assign, readwrite) NSNumber* accumulatedSaturation;
@property (nonatomic, assign, readwrite) NSNumber* mostRecentBrightness;
@property (nonatomic, assign, readwrite) NSNumber* accumulatedBrightness;
@property (nonatomic, retain, readwrite) UIColor* contentColor;
@property (nonatomic, assign, readwrite) NSNumber* mostRecentContrast;
@property (nonatomic, assign, readwrite) NSNumber* accumulatedContrast;
@property (nonatomic, assign, readwrite) NSNumber* mostRecentLuminance;
@property (nonatomic, assign, readwrite) NSNumber* accumulatedLuminance;
@property (nonatomic, assign, readwrite) NSNumber* hasContrast;
@property (nonatomic, assign, readwrite) NSNumber* accumulatorIsPrimed;
@property (nonatomic, assign, readwrite) NSNumber* nextChangeBarrier;
@property (nonatomic, assign, readwrite) NSNumber* currentStyle;
 + (long long) styleForContentColor:(id)acontrast:(double)b;
 + (long long) styleForContentColor:(id)a;

 - (void) dealloc;
 - (id) settings;
 - (long long) currentStyle;
 - (void) clearContentColorAccumulator;
 - (BOOL) accumulateChangesToContentColor:(id)acontrast:(double)b;
 - (double) accumulatedBrightness;
 - (double) accumulatedLuminance;
 - (double) accumulatedSaturation;
 - (void) setContentColor:(id)a;
 - (void) setMostRecentBrightness:(double)a;
 - (void) setMostRecentContrast:(double)a;
 - (void) setMostRecentLuminance:(double)a;
 - (void) setMostRecentSaturation:(double)a;
 - (void) setAccumulatedContrast:(double)a;
 - (void) setHasContrast:(BOOL)a;
 - (BOOL) hasContrast;
 - (BOOL) accumulatorIsPrimed;
 - (void) setAccumulatedBrightness:(double)a;
 - (void) setAccumulatedLuminance:(double)a;
 - (void) setAccumulatedSaturation:(double)a;
 - (void) setAccumulatorIsPrimed:(BOOL)a;
 - (double) accumulatedContrast;
 - (void) setCurrentStyle:(long long)a;
 - (void) setNextChangeBarrier:(double)a;
 - (double) nextChangeBarrier;
 - (id) contentColor;
 - (BOOL) accumulateChangesToContentColor:(id)a;
 - (double) mostRecentSaturation;
 - (double) mostRecentBrightness;
 - (double) mostRecentContrast;
 - (double) mostRecentLuminance;


@end
