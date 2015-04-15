
@interface CATiledLayer : CALayer {

}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) shouldDrawOnMainThread;
 + (d) fadeDuration;
 + (I) prefetchedTiles;

 - (void) dealloc;
 - (void) didChangeValueForKey:(id)a;
 - (void) invalidateContents;
 - (BOOL) shouldArchiveValueForKey:(id)a;
 - (void) setContents:(id)a;
 - (void) _dealloc;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _display;
 - (BOOL) _canDisplayConcurrently;
 - (^{CGColor=}) fillColor;
 - (BOOL) isDrawingEnabled;
 - (Q) levelsOfDetail;
 - (Q) levelsOfDetailBias;
 - ({CGSize=dd}) tileSize;
 - (d) maximumTileScale;
 - (void) setLevelsOfDetail:(Q)a;
 - (void) setLevelsOfDetailBias:(Q)a;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})alevelOfDetail:(i)boptions:(id)c;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})alevelOfDetail:(i)b;
 - (BOOL) canDrawRect:({CGRect={CGPoint=dd}{CGSize=dd}})alevelOfDetail:(i)b;
 - (void) displayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})alevelOfDetail:(i)boptions:(id)c;
 - (void) setMaximumTileScale:(d)a;
 - (void) setDrawingEnabled:(BOOL)a;
 - (void) setFillColor:(^{CGColor=})a;
 - (void) setTileSize:({CGSize=dd})a;


@end
