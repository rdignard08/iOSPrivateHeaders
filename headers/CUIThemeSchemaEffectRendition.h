
@interface CUIThemeSchemaEffectRendition : CUIThemeRendition {

    NSDictionary* _cuiInfo;
    CUIShapeEffectPreset* _effectPreset;
    CUIImage* _referenceImage;
}

 - (void) dealloc;
 - (id) effectPreset;
 - (id) initWithCoreUIOptions:(id)a forKey:(r^{_renditionkeytoken=SS})b artworkStatus:(long long)c ;
 - (void) _initializeCoreUIOptions:(id)a ;
 - (id) referenceImage;
 - (id) initWithCoreUIOptions:(id)a forKey:(r^{_renditionkeytoken=SS})b ;
 - (id) coreUIOptions;
 - (BOOL) _generateReferenceImage;


@end
