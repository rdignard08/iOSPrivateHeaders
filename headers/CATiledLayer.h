
@interface CATiledLayer : CALayer {

}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) shouldDrawOnMainThread;
 + (double) fadeDuration;
 + (unsigned int) prefetchedTiles;

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
 - (unsigned long long) levelsOfDetail;
 - (unsigned long long) levelsOfDetailBias;
 - ({CGSize=dd}) tileSize;
 - (double) maximumTileScale;
 - (void) setLevelsOfDetail:(unsigned long long)a;
 - (void) setLevelsOfDetailBias:(unsigned long long)a;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})alevelOfDetail:(int)boptions:(id)c;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})alevelOfDetail:(int)b;
 - (BOOL) canDrawRect:({CGRect={CGPoint=dd}{CGSize=dd}})alevelOfDetail:(int)b;
 - (void) displayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})alevelOfDetail:(int)boptions:(id)c;
 - (void) setMaximumTileScale:(double)a;
 - (void) setDrawingEnabled:(BOOL)a;
 - (void) setFillColor:(^{CGColor=})a;
 - (void) setTileSize:({CGSize=dd})a;


@end
