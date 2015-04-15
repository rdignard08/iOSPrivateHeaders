
@interface CUITextEffectStack : CUIShapeEffectStack {

    BOOL renderHighQuality;
}

 - (id) initWithEffectPreset:(id)a;
 - (BOOL) useCoreImageRendering;
 - (^{CGContext=}) newGlyphMaskContextForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})afromContext:(^{CGContext=})bwithScale:(d)c;
 - (void) drawProcessedMask:(^{CGContext=})aatBounds:({CGRect={CGPoint=dd}{CGSize=dd}})binContext:(^{CGContext=})cwithScale:(d)d;
 - (^{CGColor=}) newBackgroundPatternColorWithSize:({CGSize=dd})acontentScale:(d)bforContext:(^{CGContext=})c;
 - (void) _drawShadow:({?=ffffffff{CGPoint=dd}})aforGlyphs:(r^S)binContext:(^{CGContext=})cusingFont:(^{__CTFont=})dwithAdvances:(r^{CGSize=dd})ecount:(Q)f;
 - (void) _drawShadow:({?=ffffffff{CGPoint=dd}})aforGlyphs:(r^S)binContext:(^{CGContext=})cusingFont:(^{__CTFont=})datPositions:(r^{CGPoint=dd})ecount:(Q)f;
 - (void) _drawShadow:({?=ffffffff{CGPoint=dd}})ausingQuartz:(@?)binContext:(^{CGContext=})c;
 - (d) effectiveInteriorFillOpacity;
 - (void) drawGlyphs:(r^S)ainContext:(^{CGContext=})busingFont:(^{__CTFont=})cwithAdvances:(r^{CGSize=dd})dcount:(Q)elineHeight:(d)finBounds:({CGRect={CGPoint=dd}{CGSize=dd}})gatScale:(d)h;
 - (void) drawGlyphs:(r^S)ainContext:(^{CGContext=})busingFont:(^{__CTFont=})catPositions:(r^{CGPoint=dd})dcount:(Q)elineHeight:(d)finBounds:({CGRect={CGPoint=dd}{CGSize=dd}})gatScale:(d)h;
 - (void) drawUsingQuartz:(@?)ainContext:(^{CGContext=})binBounds:({CGRect={CGPoint=dd}{CGSize=dd}})catScale:(d)d;


@end
