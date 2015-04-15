
@interface CUITextEffectStack : CUIShapeEffectStack {

    BOOL renderHighQuality;
}

 - (id) initWithEffectPreset:(id)a ;
 - (BOOL) useCoreImageRendering;
 - (^{CGContext=}) newGlyphMaskContextForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a fromContext:(^{CGContext=})b withScale:(double)c ;
 - (void) drawProcessedMask:(^{CGContext=})a atBounds:({CGRect={CGPoint=dd}{CGSize=dd}})b inContext:(^{CGContext=})c withScale:(double)d ;
 - (^{CGColor=}) newBackgroundPatternColorWithSize:({CGSize=dd})a contentScale:(double)b forContext:(^{CGContext=})c ;
 - (void) _drawShadow:({?=ffffffff{CGPoint=dd}})a forGlyphs:(r^S)b inContext:(^{CGContext=})c usingFont:(^{__CTFont=})d withAdvances:(r^{CGSize=dd})e count:(unsigned long long)f ;
 - (void) _drawShadow:({?=ffffffff{CGPoint=dd}})a forGlyphs:(r^S)b inContext:(^{CGContext=})c usingFont:(^{__CTFont=})d atPositions:(r^{CGPoint=dd})e count:(unsigned long long)f ;
 - (void) _drawShadow:({?=ffffffff{CGPoint=dd}})a usingQuartz:(@?)b inContext:(^{CGContext=})c ;
 - (double) effectiveInteriorFillOpacity;
 - (void) drawGlyphs:(r^S)a inContext:(^{CGContext=})b usingFont:(^{__CTFont=})c withAdvances:(r^{CGSize=dd})d count:(unsigned long long)e lineHeight:(double)f inBounds:({CGRect={CGPoint=dd}{CGSize=dd}})g atScale:(double)h ;
 - (void) drawGlyphs:(r^S)a inContext:(^{CGContext=})b usingFont:(^{__CTFont=})c atPositions:(r^{CGPoint=dd})d count:(unsigned long long)e lineHeight:(double)f inBounds:({CGRect={CGPoint=dd}{CGSize=dd}})g atScale:(double)h ;
 - (void) drawUsingQuartz:(@?)a inContext:(^{CGContext=})b inBounds:({CGRect={CGPoint=dd}{CGSize=dd}})c atScale:(double)d ;


@end
