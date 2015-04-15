
@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {

    NSMutableDictionary* backgroundImages;
    NSMutableDictionary* miniBackgroundImages;
    UIColor* tintColor;
    NSValue* titlePositionOffset;
    NSValue* miniTitlePositionOffset;
    NSMutableDictionary* backgroundVerticalAdjustmentsForBarMetrics;
    _UIBarBackButtonItemAppearanceStorage* backButtonAppearance;
}

 - (void) dealloc;
 - (id) tintColor;
 - (void) setTintColor:(id)a;
 - (id) backgroundImageForState:(unsigned long long)astyle:(long long)bisMini:(BOOL)c;
 - (void) setBackgroundImage:(id)aforState:(unsigned long long)bstyle:(long long)cisMini:(BOOL)d;
 - (id) backButtonBackgroundImageForState:(unsigned long long)aisMini:(BOOL)b;
 - (void) setBackButtonBackgroundImage:(id)aforState:(unsigned long long)bisMini:(BOOL)c;
 - (id) anyBackgroundImage;
 - (id) miniTitlePositionOffset;
 - (id) titlePositionOffset;
 - (double) backgroundVerticalAdjustmentForBarMetrics:(long long)a;
 - (void) setBackgroundVerticalAdjustment:(double)aforBarMetrics:(long long)b;
 - (void) setMiniTitlePositionOffset:(id)a;
 - (void) setTitlePositionOffset:(id)a;
 - (id) anyBackButtonBackgroundImage;
 - (id) miniBackButtonTitlePositionOffset;
 - (id) backButtonTitlePositionOffset;
 - (double) backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)a;
 - (void) setBackButtonBackgroundVerticalAdjustment:(double)aforBarMetrics:(long long)b;
 - (void) setMiniBackButtonTitlePositionOffset:(id)a;
 - (void) setBackButtonTitlePositionOffset:(id)a;


@end
