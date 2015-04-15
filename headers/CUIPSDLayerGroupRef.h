
@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {

    @"_CUIPSDSublayerInfo" _sublayerInfo;
}

 - (void) dealloc;
 - (id) initWithImageRef:(id)alayerIndex:(I)b;
 - (id) layerRefAtIndex:(I)a;
 - (I) numberOfLayers;
 - (id) layerNames;
 - (BOOL) isLayerGroup;
 - (BOOL) isOpen;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;


@end
