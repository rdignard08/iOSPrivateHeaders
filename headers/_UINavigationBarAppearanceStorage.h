
@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage {

    @"NSDictionary" textAttributes;
    @"NSMutableDictionary" titleVerticalAdjustmentsForBarMetrics;
    @"UIImage" shadowImage;
    BOOL hidesShadow;
    q barMetrics;
    @"UIImage" backIndicatorImage;
    @"UIImage" backIndicatorTransitionMaskImage;
    @"NSNumber" backIndicatorLeftMargin;
    BOOL reversesShadowOffset;
    @"_UIBarButtonItemAppearanceStorage" buttonAppearanceStorage;
    BOOL _deferShadowToSearchBar;
    q defaultBarMetrics;
    q activeBarMetrics;
    @"NSString" _backdropViewGroupName;
}
 + (q) typicalBarPosition;

 - (void) dealloc;
 - (id) cardBackgroundImage;
 - (id) backgroundImage;
 - (id) miniBackgroundImage;
 - (id) promptBackgroundImage;
 - (id) miniPromptBackgroundImage;
 - (id) condensedBackgroundImage;
 - (void) setTitleVerticalAdjustment:(d)aforBarMetrics:(q)b;
 - (d) titleVerticalAdjustmentForBarMetrics:(q)a;
 - (id) _barButtonAppearanceStorage;
 - (id) barButtonAppearanceStorage;
 - (id) representativeImageForIdiom:(q)a;
 - (BOOL) hidesShadow;
 - (void) setHidesShadow:(BOOL)a;
 - (id) textAttributes;
 - (void) setTextAttributes:(id)a;
 - (BOOL) reversesShadowOffset;
 - (void) setReversesShadowOffset:(BOOL)a;
 - (id) shadowImage;
 - (void) setShadowImage:(id)a;
 - (q) defaultBarMetrics;
 - (void) setDefaultBarMetrics:(q)a;
 - (q) activeBarMetrics;
 - (void) setActiveBarMetrics:(q)a;
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
