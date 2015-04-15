
@interface _UISegmentedControlAppearanceStorage : NSObject {

    @"UIImage" _optionsBackgroundImage;
    @"NSMutableDictionary" _backgroundImages;
    @"NSMutableDictionary" _miniBackgroundImages;
    @"NSMutableDictionary" _dividerImages;
    @"NSMutableDictionary" _miniDividerImages;
    @"NSMutableDictionary" _textAttributesForState;
    @"NSMutableDictionary" _backgroundPositionAdjustmentsForBarMetrics;
    @"NSMutableDictionary" _contentPositionOffsets;
    @"NSMutableDictionary" _miniContentPositionOffsets;
    BOOL _legacyDontHighlight;
    BOOL _legacySuppressOptionsBackground;
    BOOL _isTiled;
    Q _leftCapWidth;
    Q _rightCapWidth;
}
@property (nonatomic, retain, readwrite) UIImage* optionsBackgroundImage;

 - (void) dealloc;
 - (id) textAttributesForState:(Q)a;
 - (void) setTextAttributes:(id)aforState:(Q)b;
 - (id) contentPositionOffsetForSegment:(q)ainMiniBar:(BOOL)bnoFallback:(BOOL)c;
 - (id) backgroundImageForState:(Q)aisMini:(BOOL)bwithFallback:(BOOL)c;
 - (id) anyDividerImageForMini:(BOOL)a;
 - (id) dividerImageForLeftSegmentState:(Q)arightSegmentState:(Q)bisMini:(BOOL)cwithFallback:(BOOL)d;
 - (void) setContentPositionOffset:(id)aforSegment:(q)binMiniBar:(BOOL)c;
 - (void) setBackgroundImage:(id)aforState:(Q)bisMini:(BOOL)c;
 - (void) setDividerImage:(id)aforLeftSegmentState:(Q)brightSegmentState:(Q)cisMini:(BOOL)d;
 - (void) takeTextAttributesFrom:({?=@@@@@{CGSize=dd}})aforState:(Q)b;
 - (BOOL) wantsTrackingSuppressed;
 - (void) setBackgroundPositionAdjustment:(d)aforBarMetrics:(q)b;
 - (d) backgroundPositionAdjustmentForBarMetrics:(q)a;
 - (id) contentPositionOffsetForSegment:(q)ainMiniBar:(BOOL)b;
 - (id) backgroundImageForState:(Q)aisMini:(BOOL)b;
 - (id) anyDividerImage;
 - (id) dividerImageForLeftSegmentState:(Q)arightSegmentState:(Q)bisMini:(BOOL)c;
 - (BOOL) legacySuppressOptionsBackground;
 - (void) setDetail:(^{?=@dd{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}B})a;
 - (void) setIsTiled:(BOOL)aleftCapWidth:(Q)brightCapWidth:(Q)c;
 - (id) optionsBackgroundImage;
 - (void) setOptionsBackgroundImage:(id)a;
 - (id) init;


@end
