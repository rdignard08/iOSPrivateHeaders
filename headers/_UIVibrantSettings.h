
@interface _UIVibrantSettings : NSObject {

    q _style;
    @"UIColor" _referenceColor;
    @"_UILegibilitySettings" _legibilitySettings;
    d _referenceContrast;
    @"UIColor" _tintColor;
    @"UIColor" _shimmerColor;
    @"UIColor" _chevronShimmerColor;
    @"UIColor" _highlightColor;
    @"UIColor" _highlightLimitingColor;
}
@property (nonatomic, assign, readonly) UIColor* referenceColor;
@property (nonatomic, assign, readonly) NSNumber* referenceContrast;
@property (nonatomic, retain, readwrite) UIColor* tintColor;
@property (nonatomic, retain, readwrite) UIColor* shimmerColor;
@property (nonatomic, retain, readwrite) UIColor* chevronShimmerColor;
@property (nonatomic, retain, readwrite) UIColor* highlightColor;
@property (nonatomic, assign, readonly) _UILegibilitySettings* legibilitySettings;
@property (nonatomic, assign, readonly) NSNumber* style;
@property (nonatomic, retain, readwrite) UIColor* highlightLimitingColor;
 + (id) vibrantSettingsWithReferenceColor:(id)areferenceContrast:(d)blegibilitySettings:(id)c;

 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) tintColor;
 - (void) setTintColor:(id)a;
 - (q) _style;
 - (id) referenceColor;
 - (id) legibilitySettings;
 - (id) initWithReferenceColor:(id)areferenceContrast:(d)blegibilitySettings:(id)c;
 - (id) _computeSourceColorDodgeColorForDestinationColor:(id)aproducingLuminanceChange:(d)b;
 - (id) highlightLimitingColor;
 - (id) shimmerColor;
 - (id) chevronShimmerColor;
 - (id) tintViewWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) highlightLimitingViewWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (d) referenceContrast;
 - (void) setShimmerColor:(id)a;
 - (void) setChevronShimmerColor:(id)a;
 - (void) setHighlightLimitingColor:(id)a;
 - (q) style;
 - (void) setHighlightColor:(id)a;
 - (id) highlightColor;


@end
