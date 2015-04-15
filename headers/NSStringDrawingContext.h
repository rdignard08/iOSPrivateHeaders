
@interface NSStringDrawingContext : NSObject {

    d _minimumScaleFactor;
    d _minimumTrackingAdjustment;
    d _actualScaleFactor;
    d _actualTrackingAdjustment;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _totalBounds;
    @"NSDictionary" _linkAttributes;
    Q _numberOfLineFragments;
    Q _maximumNumberOfLines;
    d _baselineOffset;
    d _scaledBaselineOffset;
    d _scaledLineHeight;
    d _firstBaselineOffset;
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
 - (d) actualScaleFactor;
 - (d) scaledBaselineOffset;
 - (d) scaledLineHeight;
 - (d) firstBaselineOffset;
 - (d) minimumScaleFactor;
 - (void) setMinimumScaleFactor:(d)a;
 - (d) minimumTrackingAdjustment;
 - (void) setMinimumTrackingAdjustment:(d)a;
 - (BOOL) wantsNumberOfLineFragments;
 - (void) setWantsNumberOfLineFragments:(BOOL)a;
 - (BOOL) wrapsForTruncationMode;
 - (void) setWrapsForTruncationMode:(BOOL)a;
 - (Q) maximumNumberOfLines;
 - (void) setMaximumNumberOfLines:(Q)a;
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
 - (void) setActualScaleFactor:(d)a;
 - (d) actualTrackingAdjustment;
 - (void) setActualTrackingAdjustment:(d)a;
 - (void) setTotalBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (Q) numberOfLineFragments;
 - (void) setNumberOfLineFragments:(Q)a;
 - (d) baselineOffset;
 - (void) setBaselineOffset:(d)a;
 - (void) setScaledBaselineOffset:(d)a;
 - (void) setScaledLineHeight:(d)a;
 - (void) setFirstBaselineOffset:(d)a;


@end
