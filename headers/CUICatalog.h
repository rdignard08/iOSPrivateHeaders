
@interface CUICatalog : NSObject {

    unsigned long long _storageRef;
}
 + (id) systemUICatalog;
 + (id) bestMatchUsingImages:(id)ascaleFactor:(double)bdeviceIdiom:(long long)cdeviceSubtype:(unsigned long long)dsizeClassHorizontal:(long long)esizeClassVertical:(long long)f;
 + (id) defaultUICatalog;
 + (id) defaultUICatalogForBundle:(id)a;
 + (id) bestMatchUsingImages:(id)ascaleFactor:(double)bdeviceIdiom:(long long)cdeviceSubtype:(unsigned long long)d;

 - ({?=dddd}) styledInsetsForStylePresetName:(id)a styleConfiguration:(id)b foregroundColor:(^{CGColor=})c scale:(double)d ;
 - (id) imageByStylingImage:(^{CGImage=})a stylePresetName:(id)b styleConfiguration:(id)c foregroundColor:(^{CGColor=})d scale:(double)e ;
 - (id) initWithName:(id)a fromBundle:(id)b ;
 - (id) dataWithName:(id)a ;
 - (id) debugDescription;
 - (BOOL) drawGlyphs:(r^S)a atPositions:(r^{CGPoint=dd})b inContext:(^{CGContext=})c withFont:(^{__CTFont=})d count:(unsigned long long)e stylePresetName:(id)f styleConfiguration:(id)g foregroundColor:(^{CGColor=})h ;
 - (id) _themeStore;
 - (void) clearCachedImageResources;
 - (id) initWithName:(id)a fromBundle:(id)b error:(^@)c ;
 - (id) _baseKeyForName:(id)a ;
 - (id) allImageNames;
 - (id) imagesWithName:(id)a ;
 - (id) imageWithName:(id)a scaleFactor:(double)b deviceIdiom:(long long)c deviceSubtype:(unsigned long long)d ;
 - (id) imageWithName:(id)a scaleFactor:(double)b deviceIdiom:(long long)c deviceSubtype:(unsigned long long)d sizeClassHorizontal:(long long)e sizeClassVertical:(long long)f ;
 - (id) _resolvedRenditionKeyForName:(id)a scaleFactor:(double)b deviceIdiom:(long long)c deviceSubtype:(unsigned long long)d sizeClassHorizontal:(long long)e sizeClassVertical:(long long)f memoryClass:(unsigned long long)g graphicsClass:(unsigned long long)h ;
 - (id) dataWithName:(id)a deviceIdiom:(long long)b deviceSubtype:(unsigned long long)c memoryClass:(unsigned long long)d graphicsClass:(unsigned long long)e ;
 - (BOOL) canGetShapeEffectRenditionWithKey:(id)a ;
 - (id) renditionKeyForShapeEffectPresetWithStylePresetName:(id)a state:(long long)b presentationState:(long long)c value:(long long)d resolution:(unsigned long long)e ;
 - (id) renditionKeyForShapeEffectPresetWithStyleID:(unsigned long long)a state:(long long)b presentationState:(long long)c value:(long long)d resolution:(unsigned long long)e ;
 - (id) renditionKeyForShapeEffectPresetForStylePresetName:(id)a styleConfiguration:(id)b ;
 - (id) newShapeEffectPresetWithRenditionKey:(id)a ;
 - (id) newShapeEffectPresetForStylePresetName:(id)a styleConfiguration:(id)b ;
 - (BOOL) requiredDrawOfUnstyledGlyphs:(r^S)a atPositions:(r^{CGPoint=dd})b inContext:(^{CGContext=})c withFont:(^{__CTFont=})d count:(unsigned long long)e ;
 - (id) newTextEffectStackForStylePresetName:(id)a styleConfiguration:(id)b foregroundColor:(^{CGColor=})c ;
 - (BOOL) fillStyledPath:(^{CGPath=})a inContext:(^{CGContext=})b stylePresetName:(id)c styleConfiguration:(id)d ;
 - (BOOL) _doStyledQuartzDrawingInContext:(^{CGContext=})a inBounds:({CGRect={CGPoint=dd}{CGSize=dd}})b stylePresetName:(id)c styleConfiguration:(id)d drawingHandler:(@?)e ;
 - (BOOL) hasStylePresetWithName:(id)a styleConfiguration:(id)b ;
 - (id) newShapeEffectStackForStylePresetName:(id)a styleConfiguration:(id)b foregroundColor:(^{CGColor=})c ;
 - (id) imageWithName:(id)a scaleFactor:(double)b deviceIdiom:(long long)c ;
 - (^{CGPDFDocument=}) pdfDocumentWithName:(id)a ;
 - (unsigned long long) _themeRef;
 - (long long) artVariantIDOrZero;
 - (BOOL) strokeStyledPath:(^{CGPath=})a inContext:(^{CGContext=})b stylePresetName:(id)c styleConfiguration:(id)d ;
 - (BOOL) fillStyledRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inContext:(^{CGContext=})b stylePresetName:(id)c styleConfiguration:(id)d ;
 - (BOOL) hasStylePresetWithName:(id)a ;
 - (^{CGColor=}) equivalentForegroundColorForStylePresetWithName:(id)a styleConfiguration:(id)b ;
 - (int) blendModeForStylePresetWithName:(id)a styleConfiguration:(id)b ;
 - (id) initWithURL:(id)a error:(^@)b ;
 - (id) imageWithName:(id)a scaleFactor:(double)b ;


@end
