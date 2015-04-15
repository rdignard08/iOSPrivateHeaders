
@protocol NSCopying;
@interface UIKBRenderTraits : NSObject <NSCopying> {

    @"NSMutableArray" _renderEffects;
    @"NSMutableArray" _foregroundRenderEffects;
    BOOL _honorControlOpacity;
    BOOL _controlOpacities;
    @"UIKBRenderGeometry" _geometry;
    @"UIKBGradient" _backgroundGradient;
    @"UIKBGradient" _layeredBackgroundGradient;
    @"UIKBGradient" _layeredForegroundGradient;
    @"UIKBTextStyle" _symbolStyle;
    @"UIKBTextStyle" _secondarySymbolStyle;
    @"UIKBTextStyle" _fallbackSymbolStyle;
    @"NSArray" _variantGeometries;
    @"UIKBRenderTraits" _variantTraits;
    @"UIKBRenderTraits" _highlightedVariantTraits;
    d _forceOpacity;
    q _blendForm;
    @"NSString" _hashString;
}
@property (nonatomic, retain, readwrite) UIKBRenderGeometry* geometry;
@property (nonatomic, retain, readwrite) UIKBGradient* backgroundGradient;
@property (nonatomic, retain, readwrite) UIKBGradient* layeredBackgroundGradient;
@property (nonatomic, retain, readwrite) UIKBGradient* layeredForegroundGradient;
@property (nonatomic, retain, readwrite) UIKBTextStyle* symbolStyle;
@property (nonatomic, retain, readwrite) UIKBTextStyle* secondarySymbolStyle;
@property (nonatomic, retain, readwrite) UIKBTextStyle* fallbackSymbolStyle;
@property (nonatomic, assign, readonly) NSArray* renderEffects;
@property (nonatomic, assign, readonly) NSArray* foregroundRenderEffects;
@property (nonatomic, retain, readwrite) NSArray* variantGeometries;
@property (nonatomic, retain, readwrite) UIKBRenderTraits* variantTraits;
@property (nonatomic, retain, readwrite) UIKBRenderTraits* highlightedVariantTraits;
@property (nonatomic, assign, readwrite) NSNumber* controlOpacities;
@property (nonatomic, assign, readwrite) NSNumber* forceOpacity;
@property (nonatomic, assign, readwrite) NSNumber* blendForm;
@property (nonatomic, retain, readwrite) NSString* hashString;
 + (id) emptyTraits;
 + (id) traitsWithGeometry:(id)a;
 + (id) traitsWithSymbolStyle:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) setBackgroundGradient:(id)a;
 - (id) geometry;
 - (void) setSymbolStyle:(id)a;
 - (id) symbolStyle;
 - (void) addRenderEffect:(id)a;
 - (void) setVariantGeometries:(id)a;
 - (void) setVariantTraits:(id)a;
 - (void) setHighlightedVariantTraits:(id)a;
 - (void) setBlendForm:(q)a;
 - (void) setControlOpacities:(BOOL)a;
 - (id) variantTraits;
 - (id) variantGeometries;
 - (void) setLayeredBackgroundGradient:(id)a;
 - (void) removeAllRenderEffects;
 - (void) setGeometry:(id)a;
 - (id) hashString;
 - (q) blendForm;
 - (BOOL) controlOpacities;
 - (void) modifyForMasking;
 - (void) setSecondarySymbolStyle:(id)a;
 - (id) secondarySymbolStyle;
 - (void) setForceOpacity:(d)a;
 - (void) setLayeredForegroundGradient:(id)a;
 - (void) overlayWithTraits:(id)a;
 - (id) backgroundGradient;
 - (d) forceOpacity;
 - (id) layeredBackgroundGradient;
 - (id) layeredForegroundGradient;
 - (id) fallbackSymbolStyle;
 - (id) renderEffects;
 - (id) foregroundRenderEffects;
 - (id) highlightedVariantTraits;
 - (void) setHashString:(id)a;
 - (void) addForegroundRenderEffect:(id)a;
 - (void) setFallbackSymbolStyle:(id)a;


@end
