
@interface NSStringDrawingContext : NSObject {

    double _minimumScaleFactor;
    double _minimumTrackingAdjustment;
    double _actualScaleFactor;
    double _actualTrackingAdjustment;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _totalBounds;
    @"NSDictionary" _linkAttributes;
    unsigned long long _numberOfLineFragments;
    unsigned long long _maximumNumberOfLines;
    double _baselineOffset;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    double _firstBaselineOffset;
    id _layout;
    {?="_wantsNumberOfLineFragments"b1"_wrapsForTruncationMode"b1"_wantsBaselineOffset"b1"_wantsScaledBaselineOffset"b1"_wantsScaledLineHeight"b1"_drawsDebugBaselines"b1"_cachesLayout"b1"_usesSimpleTextEffects"b1} _sdcFlags;
}
@property (nonatomic, assign, readwrite) NSNumber* minimumScaleFactor;
@property (nonatomic, assign, readwrite) NSNumber* minimumTrackingAdjustment;
@property (nonatomic, assign, readwrite) NSNumber* actualScaleFactor;
@property (nonatomic, assign, readwrite) NSNumber* actualTrackingAdjustment;
@property (nonatomic, assign, readwrite) NSNumber* totalBounds;
@property (nonatomic, assign, readwrite) NSNumber* wantsNumberOfLineFragments;
@property (nonatomic, assign, readwrite) NSNumber* numberOfLineFragments;
@property (nonatomic, assign, readwrite) NSNumber* wrapsForTruncationMode;
@property (nonatomic, assign, readwrite) NSNumber* maximumNumberOfLines;
@property (nonatomic, assign, readwrite) NSNumber* wantsBaselineOffset;
@property (nonatomic, assign, readwrite) NSNumber* baselineOffset;
@property (nonatomic, assign, readwrite) NSNumber* wantsScaledBaselineOffset;
@property (nonatomic, assign, readwrite) NSNumber* scaledBaselineOffset;
@property (nonatomic, assign, readwrite) NSNumber* wantsScaledLineHeight;
@property (nonatomic, assign, readwrite) NSNumber* scaledLineHeight;
@property (nonatomic, assign, readwrite) NSNumber* firstBaselineOffset;
@property (nonatomic, assign, readwrite) NSNumber* drawsDebugBaselines;
@property (nonatomic, assign, readwrite) NSNumber* cachesLayout;
@property (nonatomic, retain, readwrite) NSNumber* layout;
@property (nonatomic, assign, readwrite) NSNumber* usesSimpleTextEffects;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) totalBounds;
 - (double) actualScaleFactor;
 - (double) scaledBaselineOffset;
 - (double) scaledLineHeight;
 - (double) firstBaselineOffset;
 - (double) minimumScaleFactor;
 - (void) setMinimumScaleFactor:(double)a;
 - (double) minimumTrackingAdjustment;
 - (void) setMinimumTrackingAdjustment:(double)a;
 - (BOOL) wantsNumberOfLineFragments;
 - (void) setWantsNumberOfLineFragments:(BOOL)a;
 - (BOOL) wrapsForTruncationMode;
 - (void) setWrapsForTruncationMode:(BOOL)a;
 - (unsigned long long) maximumNumberOfLines;
 - (void) setMaximumNumberOfLines:(unsigned long long)a;
 - (BOOL) wantsBaselineOffset;
 - (void) setWantsBaselineOffset:(BOOL)a;
 - (BOOL) wantsScaledBaselineOffset;
 - (void) setWantsScaledBaselineOffset:(BOOL)a;
 - (BOOL) wantsScaledLineHeight;
 - (void) setWantsScaledLineHeight:(BOOL)a;
 - (BOOL) drawsDebugBaselines;
 - (void) setDrawsDebugBaselines:(BOOL)a;
 - (BOOL) cachesLayout;
 - (void) setCachesLayout:(BOOL)a;
 - (id) layout;
 - (void) setLayout:(id)a;
 - (BOOL) usesSimpleTextEffects;
 - (void) setUsesSimpleTextEffects:(BOOL)a;
 - (void) setActualScaleFactor:(double)a;
 - (double) actualTrackingAdjustment;
 - (void) setActualTrackingAdjustment:(double)a;
 - (void) setTotalBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (unsigned long long) numberOfLineFragments;
 - (void) setNumberOfLineFragments:(unsigned long long)a;
 - (double) baselineOffset;
 - (void) setBaselineOffset:(double)a;
 - (void) setScaledBaselineOffset:(double)a;
 - (void) setScaledLineHeight:(double)a;
 - (void) setFirstBaselineOffset:(double)a;


@end
