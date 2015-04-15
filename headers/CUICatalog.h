
@interface CUICatalog : NSObject {

    Q _storageRef;
}
 + (id) systemUICatalog;
 + (id) bestMatchUsingImages:(id)ascaleFactor:(d)bdeviceIdiom:(q)cdeviceSubtype:(Q)dsizeClassHorizontal:(q)esizeClassVertical:(q)f;
 + (id) defaultUICatalog;
 + (id) defaultUICatalogForBundle:(id)a;
 + (id) bestMatchUsingImages:(id)ascaleFactor:(d)bdeviceIdiom:(q)cdeviceSubtype:(Q)d;

 - ({?=dddd}) styledInsetsForStylePresetName:(id)astyleConfiguration:(id)bforegroundColor:(^{CGColor=})cscale:(d)d;
 - (id) imageByStylingImage:(^{CGImage=})astylePresetName:(id)bstyleConfiguration:(id)cforegroundColor:(^{CGColor=})dscale:(d)e;
 - (id) initWithName:(id)afromBundle:(id)b;
 - (id) dataWithName:(id)a;
 - (id) debugDescription;
 - (BOOL) drawGlyphs:(r^S)aatPositions:(r^{CGPoint=dd})binContext:(^{CGContext=})cwithFont:(^{__CTFont=})dcount:(Q)estylePresetName:(id)fstyleConfiguration:(id)gforegroundColor:(^{CGColor=})h;
 - (id) _themeStore;
 - (void) clearCachedImageResources;
 - (id) initWithName:(id)afromBundle:(id)berror:(^@)c;
 - (id) _baseKeyForName:(id)a;
 - (id) allImageNames;
 - (id) imagesWithName:(id)a;
 - (id) imageWithName:(id)ascaleFactor:(d)bdeviceIdiom:(q)cdeviceSubtype:(Q)d;
 - (id) imageWithName:(id)ascaleFactor:(d)bdeviceIdiom:(q)cdeviceSubtype:(Q)dsizeClassHorizontal:(q)esizeClassVertical:(q)f;
 - (id) _resolvedRenditionKeyForName:(id)ascaleFactor:(d)bdeviceIdiom:(q)cdeviceSubtype:(Q)dsizeClassHorizontal:(q)esizeClassVertical:(q)fmemoryClass:(Q)ggraphicsClass:(Q)h;
 - (id) dataWithName:(id)adeviceIdiom:(q)bdeviceSubtype:(Q)cmemoryClass:(Q)dgraphicsClass:(Q)e;
 - (BOOL) canGetShapeEffectRenditionWithKey:(id)a;
 - (id) renditionKeyForShapeEffectPresetWithStylePresetName:(id)astate:(q)bpresentationState:(q)cvalue:(q)dresolution:(Q)e;
 - (id) renditionKeyForShapeEffectPresetWithStyleID:(Q)astate:(q)bpresentationState:(q)cvalue:(q)dresolution:(Q)e;
 - (id) renditionKeyForShapeEffectPresetForStylePresetName:(id)astyleConfiguration:(id)b;
 - (id) newShapeEffectPresetWithRenditionKey:(id)a;
 - (id) newShapeEffectPresetForStylePresetName:(id)astyleConfiguration:(id)b;
 - (BOOL) requiredDrawOfUnstyledGlyphs:(r^S)aatPositions:(r^{CGPoint=dd})binContext:(^{CGContext=})cwithFont:(^{__CTFont=})dcount:(Q)e;
 - (id) newTextEffectStackForStylePresetName:(id)astyleConfiguration:(id)bforegroundColor:(^{CGColor=})c;
 - (BOOL) fillStyledPath:(^{CGPath=})ainContext:(^{CGContext=})bstylePresetName:(id)cstyleConfiguration:(id)d;
 - (BOOL) _doStyledQuartzDrawingInContext:(^{CGContext=})ainBounds:({CGRect={CGPoint=dd}{CGSize=dd}})bstylePresetName:(id)cstyleConfiguration:(id)ddrawingHandler:(@?)e;
 - (BOOL) hasStylePresetWithName:(id)astyleConfiguration:(id)b;
 - (id) newShapeEffectStackForStylePresetName:(id)astyleConfiguration:(id)bforegroundColor:(^{CGColor=})c;
 - (id) imageWithName:(id)ascaleFactor:(d)bdeviceIdiom:(q)c;
 - (^{CGPDFDocument=}) pdfDocumentWithName:(id)a;
 - (Q) _themeRef;
 - (q) artVariantIDOrZero;
 - (BOOL) strokeStyledPath:(^{CGPath=})ainContext:(^{CGContext=})bstylePresetName:(id)cstyleConfiguration:(id)d;
 - (BOOL) fillStyledRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainContext:(^{CGContext=})bstylePresetName:(id)cstyleConfiguration:(id)d;
 - (BOOL) hasStylePresetWithName:(id)a;
 - (^{CGColor=}) equivalentForegroundColorForStylePresetWithName:(id)astyleConfiguration:(id)b;
 - (i) blendModeForStylePresetWithName:(id)astyleConfiguration:(id)b;
 - (id) initWithURL:(id)aerror:(^@)b;
 - (id) imageWithName:(id)ascaleFactor:(d)b;


@end
