
@interface UIWebTiledView : UIView {

    WAKWindow* _wakWindow;
    int _inGestureType;
    int _tilingArea;
    BOOL _didFirstTileLayout;
    BOOL _layoutTilesInMainThread;
    BOOL _tilingModeIsLocked;
    BOOL _allowsPaintingAndScriptsWhilePanning;
    BOOL _editingTilingModeEnabled;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) willMoveToWindow:(id)a ;
 - (void) _didScroll;
 - (void) setMaxTileCount:(unsigned int)a ;
 - (void) setTilingEnabled:(BOOL)a ;
 - (void) setLayoutTilesInMainThread:(BOOL)a ;
 - (void) layoutTilesNow;
 - (void) setEditingTilingModeEnabled:(BOOL)a ;
 - (void) removeAllNonVisibleTiles;
 - (void) setTilingArea:(int)a ;
 - (void) setTilesOpaque:(BOOL)a ;
 - (void) removeAllTiles;
 - (void) removeForegroundTiles;
 - (void) setInGesture:(int)a ;
 - (int) tilingArea;
 - (void) _updateForScreen:(id)a ;
 - (void) _screenChanged:(id)a ;
 - (void) layoutTilesNowForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) updateTilingMode;
 - (BOOL) tilesOpaque;
 - (void) setKeepsZoomedOutTiles:(BOOL)a ;
 - (BOOL) keepsZoomedOutTiles;
 - (void) dumpTiles;
 - (void) setWAKWindow:(id)a ;
 - (void) layoutTilesNowOnWebThread;
 - (void) drawImageIntoTiles:(^{CGImage=})a ;
 - (void) lockTilingMode;
 - (void) unlockTilingMode;
 - (BOOL) allowsPaintingAndScriptsWhilePanning;
 - (void) setAllowsPaintingAndScriptsWhilePanning:(BOOL)a ;
 - (void) setDrawsGrid:(BOOL)a ;
 - (BOOL) drawsGrid;
 - (unsigned int) maxTileCount;
 - (unsigned int) adjustedMaxTileCount;
 - (BOOL) isTilingEnabled;
 - (void) setLogsTilingChanges:(BOOL)a ;
 - (BOOL) logsTilingChanges;
 - (void) setTileDrawingEnabled:(BOOL)a ;
 - (BOOL) editingTilingModeEnabled;
 - (BOOL) tileDrawingEnabled;
 - (BOOL) layoutTilesInMainThread;
 - (id) wakWindow;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setTransform:({CGAffineTransform=dddddd})a ;
 - (void) setNeedsLayout;
 - (void) setNeedsDisplay;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGSize=dd}) tileSize;
 - (void) setTileSize:({CGSize=dd})a ;


@end
