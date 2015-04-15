
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
 - (id) textAttributesForState:(unsigned long long)a ;
 - (void) setTextAttributes:(id)a forState:(unsigned long long)b ;
 - (id) contentPositionOffsetForSegment:(long long)a inMiniBar:(BOOL)b noFallback:(BOOL)c ;
 - (id) backgroundImageForState:(unsigned long long)a isMini:(BOOL)b withFallback:(BOOL)c ;
 - (id) anyDividerImageForMini:(BOOL)a ;
 - (id) dividerImageForLeftSegmentState:(unsigned long long)a rightSegmentState:(unsigned long long)b isMini:(BOOL)c withFallback:(BOOL)d ;
 - (void) setContentPositionOffset:(id)a forSegment:(long long)b inMiniBar:(BOOL)c ;
 - (void) setBackgroundImage:(id)a forState:(unsigned long long)b isMini:(BOOL)c ;
 - (void) setDividerImage:(id)a forLeftSegmentState:(unsigned long long)b rightSegmentState:(unsigned long long)c isMini:(BOOL)d ;
 - (void) takeTextAttributesFrom:({?=@@@@@{CGSize=dd}})a forState:(unsigned long long)b ;
 - (BOOL) wantsTrackingSuppressed;
 - (void) setBackgroundPositionAdjustment:(double)a forBarMetrics:(long long)b ;
 - (double) backgroundPositionAdjustmentForBarMetrics:(long long)a ;
 - (id) contentPositionOffsetForSegment:(long long)a inMiniBar:(BOOL)b ;
 - (id) backgroundImageForState:(unsigned long long)a isMini:(BOOL)b ;
 - (id) anyDividerImage;
 - (id) dividerImageForLeftSegmentState:(unsigned long long)a rightSegmentState:(unsigned long long)b isMini:(BOOL)c ;
 - (BOOL) legacySuppressOptionsBackground;
 - (void) setDetail:(^{?=@dd{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}B})a ;
 - (void) setIsTiled:(BOOL)a leftCapWidth:(unsigned long long)b rightCapWidth:(unsigned long long)c ;
 - (id) optionsBackgroundImage;
 - (void) setOptionsBackgroundImage:(id)a ;
 - (id) init;


@end
