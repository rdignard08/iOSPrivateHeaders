
@interface WebTiledBackingLayer : CALayer {

    m_ptr* _tileController;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (void) invalidate;
 - (id) init;
 - (void) setContentsScale:(double)a ;
 - (void) setBorderColor:(^{CGColor=})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) initWithLayer:(id)a ;
 - (double) contentsScale;
 - (void) setNeedsDisplay;
 - (id) actionForKey:(id)a ;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) isOpaque;
 - (BOOL) acceleratesDrawing;
 - (void) setBorderWidth:(double)a ;
 - (void) setOpaque:(BOOL)a ;
 - (^{TileController=^^?^{PlatformCALayer}{unique_ptr<WebCore::TileCoverageMap, std::__1::default_delete<WebCore::TileCoverageMap> >={__compressed_pair<WebCore::TileCoverageMap *, std::__1::default_delete<WebCore::TileCoverageMap> >=^{TileCoverageMap}}}{unique_ptr<WebCore::TileGrid, std::__1::default_delete<WebCore::TileGrid> >={__compressed_pair<WebCore::TileGrid *, std::__1::default_delete<WebCore::TileGrid> >=^{TileGrid}}}{unique_ptr<WebCore::TileGrid, std::__1::default_delete<WebCore::TileGrid> >={__compressed_pair<WebCore::TileGrid *, std::__1::default_delete<WebCore::TileGrid> >=^{TileGrid}}}{IntSize=ii}{FloatRect={FloatPoint=ff}{FloatSize=ff}}{FloatRect={FloatPoint=ff}{FloatSize=ff}}{IntRect={IntPoint=ii}{IntSize=ii}}{Timer<WebCore::TileController>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}ffIiiiiBBBBBB{Color=IB}fif}) createTileController:(^{PlatformCALayer=^^?IiQ{RetainPtr<CALayer>=^v}^{PlatformCALayerClient}})a ;
 - (void) setAcceleratesDrawing:(BOOL)a ;
 - (^{TiledBacking=^^?}) tiledBacking;


@end
