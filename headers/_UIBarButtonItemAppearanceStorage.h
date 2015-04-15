
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
 - (void) setTintColor:(id)a ;
 - (id) backgroundImageForState:(unsigned long long)a style:(long long)b isMini:(BOOL)c ;
 - (void) setBackgroundImage:(id)a forState:(unsigned long long)b style:(long long)c isMini:(BOOL)d ;
 - (id) backButtonBackgroundImageForState:(unsigned long long)a isMini:(BOOL)b ;
 - (void) setBackButtonBackgroundImage:(id)a forState:(unsigned long long)b isMini:(BOOL)c ;
 - (id) anyBackgroundImage;
 - (id) miniTitlePositionOffset;
 - (id) titlePositionOffset;
 - (double) backgroundVerticalAdjustmentForBarMetrics:(long long)a ;
 - (void) setBackgroundVerticalAdjustment:(double)a forBarMetrics:(long long)b ;
 - (void) setMiniTitlePositionOffset:(id)a ;
 - (void) setTitlePositionOffset:(id)a ;
 - (id) anyBackButtonBackgroundImage;
 - (id) miniBackButtonTitlePositionOffset;
 - (id) backButtonTitlePositionOffset;
 - (double) backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)a ;
 - (void) setBackButtonBackgroundVerticalAdjustment:(double)a forBarMetrics:(long long)b ;
 - (void) setMiniBackButtonTitlePositionOffset:(id)a ;
 - (void) setBackButtonTitlePositionOffset:(id)a ;


@end
