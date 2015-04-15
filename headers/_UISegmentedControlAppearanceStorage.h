
@interface _UISegmentedControlAppearanceStorage : NSObject {

    UIImage* _optionsBackgroundImage;
    NSMutableDictionary* _backgroundImages;
    NSMutableDictionary* _miniBackgroundImages;
    NSMutableDictionary* _dividerImages;
    NSMutableDictionary* _miniDividerImages;
    NSMutableDictionary* _textAttributesForState;
    NSMutableDictionary* _backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary* _contentPositionOffsets;
    NSMutableDictionary* _miniContentPositionOffsets;
    BOOL _legacyDontHighlight;
    BOOL _legacySuppressOptionsBackground;
    BOOL _isTiled;
    unsigned long long _leftCapWidth;
    unsigned long long _rightCapWidth;
}
@property (nonatomic, retain, readwrite) UIImage* optionsBackgroundImage;

 - (void) dealloc;
 - (id) textAttributesForState:(unsigned long long)a;
 - (void) setTextAttributes:(id)aforState:(unsigned long long)b;
 - (id) contentPositionOffsetForSegment:(long long)ainMiniBar:(BOOL)bnoFallback:(BOOL)c;
 - (id) backgroundImageForState:(unsigned long long)aisMini:(BOOL)bwithFallback:(BOOL)c;
 - (id) anyDividerImageForMini:(BOOL)a;
 - (id) dividerImageForLeftSegmentState:(unsigned long long)arightSegmentState:(unsigned long long)bisMini:(BOOL)cwithFallback:(BOOL)d;
 - (void) setContentPositionOffset:(id)aforSegment:(long long)binMiniBar:(BOOL)c;
 - (void) setBackgroundImage:(id)aforState:(unsigned long long)bisMini:(BOOL)c;
 - (void) setDividerImage:(id)aforLeftSegmentState:(unsigned long long)brightSegmentState:(unsigned long long)cisMini:(BOOL)d;
 - (void) takeTextAttributesFrom:({?=@@@@@{CGSize=dd}})aforState:(unsigned long long)b;
 - (BOOL) wantsTrackingSuppressed;
 - (void) setBackgroundPositionAdjustment:(double)aforBarMetrics:(long long)b;
 - (double) backgroundPositionAdjustmentForBarMetrics:(long long)a;
 - (id) contentPositionOffsetForSegment:(long long)ainMiniBar:(BOOL)b;
 - (id) backgroundImageForState:(unsigned long long)aisMini:(BOOL)b;
 - (id) anyDividerImage;
 - (id) dividerImageForLeftSegmentState:(unsigned long long)arightSegmentState:(unsigned long long)bisMini:(BOOL)c;
 - (BOOL) legacySuppressOptionsBackground;
 - (void) setDetail:(^{?=@dd{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}B})a;
 - (void) setIsTiled:(BOOL)aleftCapWidth:(unsigned long long)brightCapWidth:(unsigned long long)c;
 - (id) optionsBackgroundImage;
 - (void) setOptionsBackgroundImage:(id)a;
 - (id) init;


@end
