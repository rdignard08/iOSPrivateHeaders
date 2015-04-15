
@interface _UIFieldEditorLayoutManager : NSLayoutManager {

    BOOL _needsExtraBulletRendering;
}

 - (BOOL) needsExtraBulletRendering;
 - (void) setNeedsExtraBulletRendering:(BOOL)a;
 - (void) showCGGlyphs:(r^S)apositions:(r^{CGPoint=dd})bcount:(Q)cfont:(id)dmatrix:({CGAffineTransform=dddddd})eattributes:(id)finContext:(^{CGContext=})g;


@end
