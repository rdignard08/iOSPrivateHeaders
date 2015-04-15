
@interface UIWebTiledView : UIView {

    @"WAKWindow" _wakWindow;
    i _inGestureType;
    i _tilingArea;
    BOOL _didFirstTileLayout;
    BOOL _layoutTilesInMainThread;
    BOOL _tilingModeIsLocked;
    BOOL _allowsPaintingAndScriptsWhilePanning;
    BOOL _editingTilingModeEnabled;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) willMoveToWindow:(id)a;
 - (void) _didScroll;
 - (void) setMaxTileCount:(I)a;
 - (void) setTilingEnabled:(BOOL)a;
 - (void) setLayoutTilesInMainThread:(BOOL)a;
 - (void) layoutTilesNow;
 - (void) setEditingTilingModeEnabled:(BOOL)a;
 - (void) removeAllNonVisibleTiles;
 - (void) setTilingArea:(i)a;
 - (void) setTilesOpaque:(BOOL)a;
 - (void) removeAllTiles;
 - (void) removeForegroundTiles;
 - (void) setInGesture:(i)a;
 - (i) tilingArea;
 - (void) _updateForScreen:(id)a;
 - (void) _screenChanged:(id)a;
 - (void) layoutTilesNowForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) updateTilingMode;
 - (BOOL) tilesOpaque;
 - (void) setKeepsZoomedOutTiles:(BOOL)a;
 - (BOOL) keepsZoomedOutTiles;
 - (void) dumpTiles;
 - (void) setWAKWindow:(id)a;
 - (void) layoutTilesNowOnWebThread;
 - (void) drawImageIntoTiles:(^{CGImage=})a;
 - (void) lockTilingMode;
 - (void) unlockTilingMode;
 - (BOOL) allowsPaintingAndScriptsWhilePanning;
 - (void) setAllowsPaintingAndScriptsWhilePanning:(BOOL)a;
 - (void) setDrawsGrid:(BOOL)a;
 - (BOOL) drawsGrid;
 - (I) maxTileCount;
 - (I) adjustedMaxTileCount;
 - (BOOL) isTilingEnabled;
 - (void) setLogsTilingChanges:(BOOL)a;
 - (BOOL) logsTilingChanges;
 - (void) setTileDrawingEnabled:(BOOL)a;
 - (BOOL) editingTilingModeEnabled;
 - (BOOL) tileDrawingEnabled;
 - (BOOL) layoutTilesInMainThread;
 - (id) wakWindow;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setTransform:({CGAffineTransform=dddddd})a;
 - (void) setNeedsLayout;
 - (void) setNeedsDisplay;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGSize=dd}) tileSize;
 - (void) setTileSize:({CGSize=dd})a;


@end
