
@interface _UIFieldEditorLayoutManager : NSLayoutManager {

    BOOL _needsExtraBulletRendering;
}

 - (BOOL) needsExtraBulletRendering;
 - (void) setNeedsExtraBulletRendering:(BOOL)a ;
 - (void) showCGGlyphs:(r^S)a positions:(r^{CGPoint=dd})b count:(unsigned long long)c font:(id)d matrix:({CGAffineTransform=dddddd})e attributes:(id)f inContext:(^{CGContext=})g ;


@end
