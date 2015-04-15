
@interface _UITextTiledLayer : CALayer {

    NSMutableArray* _reusableTiles;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _gridBounds;
    {?="disableTiling"b1"ditchAllTiles"b1"suspendLayout"b4} _tcTiledLayerFlags;
    {CGSize="width"d"height"d} _tileSize;
}

 - (void) dealloc;
 - (id) init;
 - (void) drawDirtyLayer:(id)aintoContext:(^{CGContext=})b;
 - (void) _buildTilesForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _cullAndAddLayers:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _hideAndShowTiles:({CGRect={CGPoint=dd}{CGSize=dd}})avisibleBounds:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (BOOL) usesTiledLayers;
 - (void) setUsesTiledLayers:(BOOL)a;
 - (void) _validateTiles;
 - (void) suspendTiling;
 - (void) resumeTiling;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) renderInContext:(^{CGContext=})a;
 - (void) layoutSublayers;
 - ({CGSize=dd}) tileSize;
 - (void) setTileSize:({CGSize=dd})a;


@end
