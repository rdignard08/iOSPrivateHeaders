
@interface WebNodeHighlightView : WAKView {

    WebNodeHighlight* _webNodeHighlight;
    NSMutableArray* _layers;
}

 - (void) dealloc;
 - (BOOL) isFlipped;
 - (void) layoutSublayers:(id)a ;
 - (id) initWithWebNodeHighlight:(id)a ;
 - (void) detachFromWebNodeHighlight;
 - (void) _removeAllLayers;
 - (void) _attach:(id)a numLayers:(unsigned long long)b ;
 - (void) _layoutForNodeHighlight:(^{Highlight={Color=IB}{Color=IB}{Color=IB}{Color=IB}{Color=IB}i{Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow>=^{FloatQuad}II}B})a parent:(id)b ;
 - (void) _layoutForRectsHighlight:(^{Highlight={Color=IB}{Color=IB}{Color=IB}{Color=IB}{Color=IB}i{Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow>=^{FloatQuad}II}B})a parent:(id)b ;
 - (id) webNodeHighlight;


@end
