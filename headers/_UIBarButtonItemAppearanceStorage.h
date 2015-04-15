
@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {

    @"NSMutableDictionary" backgroundImages;
    @"NSMutableDictionary" miniBackgroundImages;
    @"UIColor" tintColor;
    @"NSValue" titlePositionOffset;
    @"NSValue" miniTitlePositionOffset;
    @"NSMutableDictionary" backgroundVerticalAdjustmentsForBarMetrics;
    @"_UIBarBackButtonItemAppearanceStorage" backButtonAppearance;
}

 - (void) dealloc;
 - (id) tintColor;
 - (void) setTintColor:(id)a;
 - (id) backgroundImageForState:(Q)astyle:(q)bisMini:(BOOL)c;
 - (void) setBackgroundImage:(id)aforState:(Q)bstyle:(q)cisMini:(BOOL)d;
 - (id) backButtonBackgroundImageForState:(Q)aisMini:(BOOL)b;
 - (void) setBackButtonBackgroundImage:(id)aforState:(Q)bisMini:(BOOL)c;
 - (id) anyBackgroundImage;
 - (id) miniTitlePositionOffset;
 - (id) titlePositionOffset;
 - (d) backgroundVerticalAdjustmentForBarMetrics:(q)a;
 - (void) setBackgroundVerticalAdjustment:(d)aforBarMetrics:(q)b;
 - (void) setMiniTitlePositionOffset:(id)a;
 - (void) setTitlePositionOffset:(id)a;
 - (id) anyBackButtonBackgroundImage;
 - (id) miniBackButtonTitlePositionOffset;
 - (id) backButtonTitlePositionOffset;
 - (d) backButtonBackgroundVerticalAdjustmentForBarMetrics:(q)a;
 - (void) setBackButtonBackgroundVerticalAdjustment:(d)aforBarMetrics:(q)b;
 - (void) setMiniBackButtonTitlePositionOffset:(id)a;
 - (void) setBackButtonTitlePositionOffset:(id)a;


@end
