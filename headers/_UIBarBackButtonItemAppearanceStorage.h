
@interface _UIBarBackButtonItemAppearanceStorage : NSObject {

    NSMutableDictionary backgroundImages;
    NSMutableDictionary miniBackgroundImages;
    NSValue titlePositionOffset;
    NSValue miniTitlePositionOffset;
    NSMutableDictionary backgroundVerticalAdjustmentsForBarMetrics;
}
@property (nonatomic, retain, readwrite) NSValue* titlePositionOffset;
@property (nonatomic, retain, readwrite) NSValue* miniTitlePositionOffset;

 - (void) dealloc;
 - (id) anyBackgroundImage;
 - (id) miniTitlePositionOffset;
 - (id) titlePositionOffset;
 - (double) backgroundVerticalAdjustmentForBarMetrics:(long long)a;
 - (void) setBackgroundVerticalAdjustment:(double)aforBarMetrics:(long long)b;
 - (void) setMiniTitlePositionOffset:(id)a;
 - (void) setTitlePositionOffset:(id)a;
 - (void) setBackgroundImage:(id)aforState:(unsigned long long)bisMini:(BOOL)c;
 - (id) backgroundImageForState:(unsigned long long)aisMini:(BOOL)b;


@end
