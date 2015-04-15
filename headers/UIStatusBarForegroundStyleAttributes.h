
@interface UIStatusBarForegroundStyleAttributes : NSObject {

    double _height;
    long long _legibilityStyle;
    long long _idiom;
    @"NSMutableDictionary" _cachedFonts;
    BOOL _isTintColorBlack;
    BOOL _hasBusyBackground;
    @"UIColor" _tintColor;
}
@property (nonatomic, retain, readonly) UIColor* tintColor;

 - (double) scale;
 - (void) dealloc;
 - (id) imageNamed:(id)a;
 - (id) tintColor;
 - (id) textColorForStyle:(long long)a;
 - (long long) legibilityStyle;
 - (id) initWithHeight:(double)alegibilityStyle:(long long)btintColor:(id)chasBusyBackground:(BOOL)didiom:(long long)e;
 - (BOOL) usesVerticalLayout;
 - (double) edgePadding;
 - (id) textFontForStyle:(long long)a;
 - (double) standardPadding;
 - (double) shadowPadding;
 - (id) imageWithText:(id)aofItemType:(int)bforWidth:(double)clineBreakMode:(long long)dletterSpacing:(double)etextAlignment:(long long)fstyle:(long long)gwithLegibilityStyle:(long long)hlegibilityStrength:(double)i;
 - (id) imageNamed:(id)awithLegibilityStyle:(long long)blegibilityStrength:(double)c;
 - (id) textForNetworkType:(int)a;
 - (id) cachedImageWithText:(id)aforWidth:(double)blineBreakMode:(long long)cletterSpacing:(double)dtextAlignment:(long long)estyle:(long long)fitemType:(int)g;
 - (id) batteryImageNameWithCapacity:(double)a;
 - (id) cachedImageNamed:(id)ainTempGroup:(id)b;
 - (double) batteryAccessoryMargin;
 - (void) drawBatteryInsidesWithSize:({CGSize=dd})acapacity:(double)bcharging:(BOOL)c;
 - (void) cacheImage:(id)anamed:(id)binTempGroup:(id)c;
 - (id) bluetoothBatteryImageNameWithCapacity:(double)a;
 - (void) drawBluetoothBatteryInsidesWithSize:({CGSize=dd})acapacity:(double)b;
 - (double) bluetoothBatteryExtraPadding;
 - (long long) activityIndicatorStyleWithSyncActivity:(BOOL)a;
 - (double) sizeForMoonMaskVisible:(BOOL)a;
 - ({CGPoint=dd}) positionForMoonMaskInBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) untintedImageNamed:(id)a;
 - ({UIEdgeInsets=dddd}) edgeInsetsForBatteryInsides;
 - (double) _roundDimension:(double)a;
 - (id) _batteryColorForCapacity:(double)alowCapacity:(double)bcharging:(BOOL)c;
 - (id) uncachedImageNamed:(id)a;
 - ({UIEdgeInsets=dddd}) edgeInsetsForBluetoothBatteryInsides;
 - (double) textOffsetForStyle:(long long)a;
 - (void) _drawText:(id)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})bwithFont:(id)clineBreakMode:(long long)dletterSpacing:(double)etextAlignment:(long long)f;
 - (void) drawTextInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithColor:(id)bwithBlock:(@?)c;
 - (id) expandedNameForImageName:(id)a;
 - (id) _cachedImageNamed:(id)a;
 - (void) _cacheImage:(id)anamed:(id)b;
 - (id) shadowImageForImage:(id)awithIdentifier:(id)bforStyle:(long long)cwithStrength:(double)d;
 - (id) shadowImageForImage:(id)awithIdentifier:(id)bforStyle:(long long)cwithStrength:(double)dinTempGroup:(id)e;
 - (void) drawText:(id)aforWidth:(double)blineBreakMode:(long long)cletterSpacing:(double)dtextAlignment:(long long)estyle:(long long)ftextSize:({CGSize=dd})gtextHeight:(double)h;
 - (id) makeTextFontForStyle:(long long)a;
 - (BOOL) _shouldUseBoldFontForStyle:(long long)a;
 - (id) proportionalFontForFont:(id)a;
 - (id) initWithHeight:(double)alegibilityStyle:(long long)btintColor:(id)chasBusyBackground:(BOOL)d;
 - (id) uniqueIdentifier;
 - (long long) idiom;
 - (double) height;


@end
