
@interface _UILegibilitySettingsProvider : NSObject {

    BOOL _hasContrast;
    BOOL _accumulatorIsPrimed;
    d _mostRecentSaturation;
    d _accumulatedSaturation;
    d _mostRecentBrightness;
    d _accumulatedBrightness;
    @"UIColor" _contentColor;
    d _mostRecentContrast;
    d _accumulatedContrast;
    d _mostRecentLuminance;
    d _accumulatedLuminance;
    d _nextChangeBarrier;
    q _currentStyle;
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
 + (q) styleForContentColor:(id)acontrast:(d)b;
 + (q) styleForContentColor:(id)a;

 - (void) dealloc;
 - (id) settings;
 - (q) currentStyle;
 - (void) clearContentColorAccumulator;
 - (BOOL) accumulateChangesToContentColor:(id)acontrast:(d)b;
 - (d) accumulatedBrightness;
 - (d) accumulatedLuminance;
 - (d) accumulatedSaturation;
 - (void) setContentColor:(id)a;
 - (void) setMostRecentBrightness:(d)a;
 - (void) setMostRecentContrast:(d)a;
 - (void) setMostRecentLuminance:(d)a;
 - (void) setMostRecentSaturation:(d)a;
 - (void) setAccumulatedContrast:(d)a;
 - (void) setHasContrast:(BOOL)a;
 - (BOOL) hasContrast;
 - (BOOL) accumulatorIsPrimed;
 - (void) setAccumulatedBrightness:(d)a;
 - (void) setAccumulatedLuminance:(d)a;
 - (void) setAccumulatedSaturation:(d)a;
 - (void) setAccumulatorIsPrimed:(BOOL)a;
 - (d) accumulatedContrast;
 - (void) setCurrentStyle:(q)a;
 - (void) setNextChangeBarrier:(d)a;
 - (d) nextChangeBarrier;
 - (id) contentColor;
 - (BOOL) accumulateChangesToContentColor:(id)a;
 - (d) mostRecentSaturation;
 - (d) mostRecentBrightness;
 - (d) mostRecentContrast;
 - (d) mostRecentLuminance;


@end
