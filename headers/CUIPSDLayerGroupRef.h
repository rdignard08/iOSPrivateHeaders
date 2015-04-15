
@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {

    _CUIPSDSublayerInfo _sublayerInfo;
}

 - (void) dealloc;
 - (id) initWithImageRef:(id)alayerIndex:(unsigned int)b;
 - (id) layerRefAtIndex:(unsigned int)a;
 - (unsigned int) numberOfLayers;
 - (id) layerNames;
 - (BOOL) isLayerGroup;
 - (BOOL) isOpen;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;


@end
