
@interface CUICatalog : NSObject {

    unsigned long long _storageRef;
}
 + (id) systemUICatalog;
 + (id) bestMatchUsingImages:(id)ascaleFactor:(double)bdeviceIdiom:(long long)cdeviceSubtype:(unsigned long long)dsizeClassHorizontal:(long long)esizeClassVertical:(long long)f;
 + (id) defaultUICatalog;
 + (id) defaultUICatalogForBundle:(id)a;
 + (id) bestMatchUsingImages:(id)ascaleFactor:(double)bdeviceIdiom:(long long)cdeviceSubtype:(unsigned long long)d;

 - ({?=dddd}) styledInsetsForStylePresetName:(id)astyleConfiguration:(id)bforegroundColor:(^{CGColor=})cscale:(double)d;
 - (id) imageByStylingImage:(^{CGImage=})astylePresetName:(id)bstyleConfiguration:(id)cforegroundColor:(^{CGColor=})dscale:(double)e;
 - (id) initWithName:(id)afromBundle:(id)b;
 - (id) dataWithName:(id)a;
 - (id) debugDescription;
 - (BOOL) drawGlyphs:(r^S)aatPositions:(r^{CGPoint=dd})binContext:(^{CGContext=})cwithFont:(^{__CTFont=})dcount:(unsigned long long)estylePresetName:(id)fstyleConfiguration:(id)gforegroundColor:(^{CGColor=})h;
 - (id) _themeStore;
 - (void) clearCachedImageResources;
 - (id) initWithName:(id)afromBundle:(id)berror:(^@)c;
 - (id) _baseKeyForName:(id)a;
 - (id) allImageNames;
 - (id) imagesWithName:(id)a;
 - (id) imageWithName:(id)ascaleFactor:(double)bdeviceIdiom:(long long)cdeviceSubtype:(unsigned long long)d;
 - (id) imageWithName:(id)ascaleFactor:(double)bdeviceIdiom:(long long)cdeviceSubtype:(unsigned long long)dsizeClassHorizontal:(long long)esizeClassVertical:(long long)f;
 - (id) _resolvedRenditionKeyForName:(id)ascaleFactor:(double)bdeviceIdiom:(long long)cdeviceSubtype:(unsigned long long)dsizeClassHorizontal:(long long)esizeClassVertical:(long long)fmemoryClass:(unsigned long long)ggraphicsClass:(unsigned long long)h;
 - (id) dataWithName:(id)adeviceIdiom:(long long)bdeviceSubtype:(unsigned long long)cmemoryClass:(unsigned long long)dgraphicsClass:(unsigned long long)e;
 - (BOOL) canGetShapeEffectRenditionWithKey:(id)a;
 - (id) renditionKeyForShapeEffectPresetWithStylePresetName:(id)astate:(long long)bpresentationState:(long long)cvalue:(long long)dresolution:(unsigned long long)e;
 - (id) renditionKeyForShapeEffectPresetWithStyleID:(unsigned long long)astate:(long long)bpresentationState:(long long)cvalue:(long long)dresolution:(unsigned long long)e;
 - (id) renditionKeyForShapeEffectPresetForStylePresetName:(id)astyleConfiguration:(id)b;
 - (id) newShapeEffectPresetWithRenditionKey:(id)a;
 - (id) newShapeEffectPresetForStylePresetName:(id)astyleConfiguration:(id)b;
 - (BOOL) requiredDrawOfUnstyledGlyphs:(r^S)aatPositions:(r^{CGPoint=dd})binContext:(^{CGContext=})cwithFont:(^{__CTFont=})dcount:(unsigned long long)e;
 - (id) newTextEffectStackForStylePresetName:(id)astyleConfiguration:(id)bforegroundColor:(^{CGColor=})c;
 - (BOOL) fillStyledPath:(^{CGPath=})ainContext:(^{CGContext=})bstylePresetName:(id)cstyleConfiguration:(id)d;
 - (BOOL) _doStyledQuartzDrawingInContext:(^{CGContext=})ainBounds:({CGRect={CGPoint=dd}{CGSize=dd}})bstylePresetName:(id)cstyleConfiguration:(id)ddrawingHandler:(@?)e;
 - (BOOL) hasStylePresetWithName:(id)astyleConfiguration:(id)b;
 - (id) newShapeEffectStackForStylePresetName:(id)astyleConfiguration:(id)bforegroundColor:(^{CGColor=})c;
 - (id) imageWithName:(id)ascaleFactor:(double)bdeviceIdiom:(long long)c;
 - (^{CGPDFDocument=}) pdfDocumentWithName:(id)a;
 - (unsigned long long) _themeRef;
 - (long long) artVariantIDOrZero;
 - (BOOL) strokeStyledPath:(^{CGPath=})ainContext:(^{CGContext=})bstylePresetName:(id)cstyleConfiguration:(id)d;
 - (BOOL) fillStyledRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainContext:(^{CGContext=})bstylePresetName:(id)cstyleConfiguration:(id)d;
 - (BOOL) hasStylePresetWithName:(id)a;
 - (^{CGColor=}) equivalentForegroundColorForStylePresetWithName:(id)astyleConfiguration:(id)b;
 - (int) blendModeForStylePresetWithName:(id)astyleConfiguration:(id)b;
 - (id) initWithURL:(id)aerror:(^@)b;
 - (id) imageWithName:(id)ascaleFactor:(double)b;


@end
