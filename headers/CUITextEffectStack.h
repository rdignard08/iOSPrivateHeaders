
@interface CUITextEffectStack : CUIShapeEffectStack {

    BOOL renderHighQuality;
}

 - (id) initWithEffectPreset:(id)a;
 - (BOOL) useCoreImageRendering;
 - (^{CGContext=}) newGlyphMaskContextForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})afromContext:(^{CGContext=})bwithScale:(double)c;
 - (void) drawProcessedMask:(^{CGContext=})aatBounds:({CGRect={CGPoint=dd}{CGSize=dd}})binContext:(^{CGContext=})cwithScale:(double)d;
 - (^{CGColor=}) newBackgroundPatternColorWithSize:({CGSize=dd})acontentScale:(double)bforContext:(^{CGContext=})c;
 - (void) _drawShadow:({?=ffffffff{CGPoint=dd}})aforGlyphs:(r^S)binContext:(^{CGContext=})cusingFont:(^{__CTFont=})dwithAdvances:(r^{CGSize=dd})ecount:(unsigned long long)f;
 - (void) _drawShadow:({?=ffffffff{CGPoint=dd}})aforGlyphs:(r^S)binContext:(^{CGContext=})cusingFont:(^{__CTFont=})datPositions:(r^{CGPoint=dd})ecount:(unsigned long long)f;
 - (void) _drawShadow:({?=ffffffff{CGPoint=dd}})ausingQuartz:(@?)binContext:(^{CGContext=})c;
 - (double) effectiveInteriorFillOpacity;
 - (void) drawGlyphs:(r^S)ainContext:(^{CGContext=})busingFont:(^{__CTFont=})cwithAdvances:(r^{CGSize=dd})dcount:(unsigned long long)elineHeight:(double)finBounds:({CGRect={CGPoint=dd}{CGSize=dd}})gatScale:(double)h;
 - (void) drawGlyphs:(r^S)ainContext:(^{CGContext=})busingFont:(^{__CTFont=})catPositions:(r^{CGPoint=dd})dcount:(unsigned long long)elineHeight:(double)finBounds:({CGRect={CGPoint=dd}{CGSize=dd}})gatScale:(double)h;
 - (void) drawUsingQuartz:(@?)ainContext:(^{CGContext=})binBounds:({CGRect={CGPoint=dd}{CGSize=dd}})catScale:(double)d;


@end
