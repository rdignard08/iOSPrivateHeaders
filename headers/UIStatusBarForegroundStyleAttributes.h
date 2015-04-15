
@interface UIStatusBarForegroundStyleAttributes : NSObject {

    d _height;
    q _legibilityStyle;
    q _idiom;
    @"NSMutableDictionary" _cachedFonts;
    BOOL _isTintColorBlack;
    BOOL _hasBusyBackground;
    @"UIColor" _tintColor;
}
@property (nonatomic, retain, readonly) UIColor* tintColor;

 - (d) scale;
 - (void) dealloc;
 - (id) imageNamed:(id)a;
 - (id) tintColor;
 - (id) textColorForStyle:(q)a;
 - (q) legibilityStyle;
 - (id) initWithHeight:(d)alegibilityStyle:(q)btintColor:(id)chasBusyBackground:(BOOL)didiom:(q)e;
 - (BOOL) usesVerticalLayout;
 - (d) edgePadding;
 - (id) textFontForStyle:(q)a;
 - (d) standardPadding;
 - (d) shadowPadding;
 - (id) imageWithText:(id)aofItemType:(i)bforWidth:(d)clineBreakMode:(q)dletterSpacing:(d)etextAlignment:(q)fstyle:(q)gwithLegibilityStyle:(q)hlegibilityStrength:(d)i;
 - (id) imageNamed:(id)awithLegibilityStyle:(q)blegibilityStrength:(d)c;
 - (id) textForNetworkType:(i)a;
 - (id) cachedImageWithText:(id)aforWidth:(d)blineBreakMode:(q)cletterSpacing:(d)dtextAlignment:(q)estyle:(q)fitemType:(i)g;
 - (id) batteryImageNameWithCapacity:(d)a;
 - (id) cachedImageNamed:(id)ainTempGroup:(id)b;
 - (d) batteryAccessoryMargin;
 - (void) drawBatteryInsidesWithSize:({CGSize=dd})acapacity:(d)bcharging:(BOOL)c;
 - (void) cacheImage:(id)anamed:(id)binTempGroup:(id)c;
 - (id) bluetoothBatteryImageNameWithCapacity:(d)a;
 - (void) drawBluetoothBatteryInsidesWithSize:({CGSize=dd})acapacity:(d)b;
 - (d) bluetoothBatteryExtraPadding;
 - (q) activityIndicatorStyleWithSyncActivity:(BOOL)a;
 - (d) sizeForMoonMaskVisible:(BOOL)a;
 - ({CGPoint=dd}) positionForMoonMaskInBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) untintedImageNamed:(id)a;
 - ({UIEdgeInsets=dddd}) edgeInsetsForBatteryInsides;
 - (d) _roundDimension:(d)a;
 - (id) _batteryColorForCapacity:(d)alowCapacity:(d)bcharging:(BOOL)c;
 - (id) uncachedImageNamed:(id)a;
 - ({UIEdgeInsets=dddd}) edgeInsetsForBluetoothBatteryInsides;
 - (d) textOffsetForStyle:(q)a;
 - (void) _drawText:(id)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})bwithFont:(id)clineBreakMode:(q)dletterSpacing:(d)etextAlignment:(q)f;
 - (void) drawTextInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithColor:(id)bwithBlock:(@?)c;
 - (id) expandedNameForImageName:(id)a;
 - (id) _cachedImageNamed:(id)a;
 - (void) _cacheImage:(id)anamed:(id)b;
 - (id) shadowImageForImage:(id)awithIdentifier:(id)bforStyle:(q)cwithStrength:(d)d;
 - (id) shadowImageForImage:(id)awithIdentifier:(id)bforStyle:(q)cwithStrength:(d)dinTempGroup:(id)e;
 - (void) drawText:(id)aforWidth:(d)blineBreakMode:(q)cletterSpacing:(d)dtextAlignment:(q)estyle:(q)ftextSize:({CGSize=dd})gtextHeight:(d)h;
 - (id) makeTextFontForStyle:(q)a;
 - (BOOL) _shouldUseBoldFontForStyle:(q)a;
 - (id) proportionalFontForFont:(id)a;
 - (id) initWithHeight:(d)alegibilityStyle:(q)btintColor:(id)chasBusyBackground:(BOOL)d;
 - (id) uniqueIdentifier;
 - (q) idiom;
 - (d) height;


@end
