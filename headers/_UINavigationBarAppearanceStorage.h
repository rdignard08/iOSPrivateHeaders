
@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage {

    @"NSDictionary" textAttributes;
    @"NSMutableDictionary" titleVerticalAdjustmentsForBarMetrics;
    @"UIImage" shadowImage;
    BOOL hidesShadow;
    long long barMetrics;
    @"UIImage" backIndicatorImage;
    @"UIImage" backIndicatorTransitionMaskImage;
    @"NSNumber" backIndicatorLeftMargin;
    BOOL reversesShadowOffset;
    @"_UIBarButtonItemAppearanceStorage" buttonAppearanceStorage;
    BOOL _deferShadowToSearchBar;
    long long defaultBarMetrics;
    long long activeBarMetrics;
    @"NSString" _backdropViewGroupName;
}
 + (long long) typicalBarPosition;

 - (void) dealloc;
 - (id) cardBackgroundImage;
 - (id) backgroundImage;
 - (id) miniBackgroundImage;
 - (id) promptBackgroundImage;
 - (id) miniPromptBackgroundImage;
 - (id) condensedBackgroundImage;
 - (void) setTitleVerticalAdjustment:(double)aforBarMetrics:(long long)b;
 - (double) titleVerticalAdjustmentForBarMetrics:(long long)a;
 - (id) _barButtonAppearanceStorage;
 - (id) barButtonAppearanceStorage;
 - (id) representativeImageForIdiom:(long long)a;
 - (BOOL) hidesShadow;
 - (void) setHidesShadow:(BOOL)a;
 - (id) textAttributes;
 - (void) setTextAttributes:(id)a;
 - (BOOL) reversesShadowOffset;
 - (void) setReversesShadowOffset:(BOOL)a;
 - (id) shadowImage;
 - (void) setShadowImage:(id)a;
 - (long long) defaultBarMetrics;
 - (void) setDefaultBarMetrics:(long long)a;
 - (long long) activeBarMetrics;
 - (void) setActiveBarMetrics:(long long)a;
 - (id) backIndicatorImage;
 - (void) setBackIndicatorImage:(id)a;
 - (id) backIndicatorTransitionMaskImage;
 - (void) setBackIndicatorTransitionMaskImage:(id)a;
 - (id) backIndicatorLeftMargin;
 - (void) setBackIndicatorLeftMargin:(id)a;
 - (BOOL) deferShadowToSearchBar;
 - (void) setDeferShadowToSearchBar:(BOOL)a;
 - (id) backdropViewGroupName;
 - (void) setBackdropViewGroupName:(id)a;


@end
