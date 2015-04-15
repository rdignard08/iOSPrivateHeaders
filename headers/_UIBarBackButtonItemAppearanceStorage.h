
@interface _UIBarBackButtonItemAppearanceStorage : NSObject {

    @"NSMutableDictionary" backgroundImages;
    @"NSMutableDictionary" miniBackgroundImages;
    @"NSValue" titlePositionOffset;
    @"NSValue" miniTitlePositionOffset;
    @"NSMutableDictionary" backgroundVerticalAdjustmentsForBarMetrics;
}
@property (nonatomic, retain, readwrite) NSValue* titlePositionOffset;
@property (nonatomic, retain, readwrite) NSValue* miniTitlePositionOffset;

 - (void) dealloc;
 - (id) anyBackgroundImage;
 - (id) miniTitlePositionOffset;
 - (id) titlePositionOffset;
 - (d) backgroundVerticalAdjustmentForBarMetrics:(q)a;
 - (void) setBackgroundVerticalAdjustment:(d)aforBarMetrics:(q)b;
 - (void) setMiniTitlePositionOffset:(id)a;
 - (void) setTitlePositionOffset:(id)a;
 - (void) setBackgroundImage:(id)aforState:(Q)bisMini:(BOOL)c;
 - (id) backgroundImageForState:(Q)aisMini:(BOOL)b;


@end
