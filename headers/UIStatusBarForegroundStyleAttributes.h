
@interface UIStatusBarForegroundStyleAttributes : NSObject {

    double _height;
    long long _legibilityStyle;
    long long _idiom;
    NSMutableDictionary* _cachedFonts;
    BOOL _isTintColorBlack;
    BOOL _hasBusyBackground;
    UIColor* _tintColor;
}
@property (nonatomic, retain, readonly) UIColor* tintColor;

 - (double) scale;
 - (void) dealloc;
 - (id) imageNamed:(id)a ;
 - (id) tintColor;
 - (id) textColorForStyle:(long long)a ;
 - (long long) legibilityStyle;
 - (id) initWithHeight:(double)a legibilityStyle:(long long)b tintColor:(id)c hasBusyBackground:(BOOL)d idiom:(long long)e ;
 - (BOOL) usesVerticalLayout;
 - (double) edgePadding;
 - (id) textFontForStyle:(long long)a ;
 - (double) standardPadding;
 - (double) shadowPadding;
 - (id) imageWithText:(id)a ofItemType:(int)b forWidth:(double)c lineBreakMode:(long long)d letterSpacing:(double)e textAlignment:(long long)f style:(long long)g withLegibilityStyle:(long long)h legibilityStrength:(double)i ;
 - (id) imageNamed:(id)a withLegibilityStyle:(long long)b legibilityStrength:(double)c ;
 - (id) textForNetworkType:(int)a ;
 - (id) cachedImageWithText:(id)a forWidth:(double)b lineBreakMode:(long long)c letterSpacing:(double)d textAlignment:(long long)e style:(long long)f itemType:(int)g ;
 - (id) batteryImageNameWithCapacity:(double)a ;
 - (id) cachedImageNamed:(id)a inTempGroup:(id)b ;
 - (double) batteryAccessoryMargin;
 - (void) drawBatteryInsidesWithSize:({CGSize=dd})a capacity:(double)b charging:(BOOL)c ;
 - (void) cacheImage:(id)a named:(id)b inTempGroup:(id)c ;
 - (id) bluetoothBatteryImageNameWithCapacity:(double)a ;
 - (void) drawBluetoothBatteryInsidesWithSize:({CGSize=dd})a capacity:(double)b ;
 - (double) bluetoothBatteryExtraPadding;
 - (long long) activityIndicatorStyleWithSyncActivity:(BOOL)a ;
 - (double) sizeForMoonMaskVisible:(BOOL)a ;
 - ({CGPoint=dd}) positionForMoonMaskInBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) untintedImageNamed:(id)a ;
 - ({UIEdgeInsets=dddd}) edgeInsetsForBatteryInsides;
 - (double) _roundDimension:(double)a ;
 - (id) _batteryColorForCapacity:(double)a lowCapacity:(double)b charging:(BOOL)c ;
 - (id) uncachedImageNamed:(id)a ;
 - ({UIEdgeInsets=dddd}) edgeInsetsForBluetoothBatteryInsides;
 - (double) textOffsetForStyle:(long long)a ;
 - (void) _drawText:(id)a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b withFont:(id)c lineBreakMode:(long long)d letterSpacing:(double)e textAlignment:(long long)f ;
 - (void) drawTextInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a withColor:(id)b withBlock:(@?)c ;
 - (id) expandedNameForImageName:(id)a ;
 - (id) _cachedImageNamed:(id)a ;
 - (void) _cacheImage:(id)a named:(id)b ;
 - (id) shadowImageForImage:(id)a withIdentifier:(id)b forStyle:(long long)c withStrength:(double)d ;
 - (id) shadowImageForImage:(id)a withIdentifier:(id)b forStyle:(long long)c withStrength:(double)d inTempGroup:(id)e ;
 - (void) drawText:(id)a forWidth:(double)b lineBreakMode:(long long)c letterSpacing:(double)d textAlignment:(long long)e style:(long long)f textSize:({CGSize=dd})g textHeight:(double)h ;
 - (id) makeTextFontForStyle:(long long)a ;
 - (BOOL) _shouldUseBoldFontForStyle:(long long)a ;
 - (id) proportionalFontForFont:(id)a ;
 - (id) initWithHeight:(double)a legibilityStyle:(long long)b tintColor:(id)c hasBusyBackground:(BOOL)d ;
 - (id) uniqueIdentifier;
 - (long long) idiom;
 - (double) height;


@end
