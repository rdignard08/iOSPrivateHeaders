
@interface CUIPSDLayerMaskRef : NSObject {

    @"CUIPSDLayerRef" _layerRef;
    BOOL _isVectorMask;
}

 - (void) dealloc;
 - (id) initLayerMaskWithLayerRef:(id)a;
 - (id) initVectorMaskWithLayerRef:(id)a;
 - (^{CGPath=}) newBezierPathAtScale:(d)a;
 - (id) layerRef;
 - (BOOL) isLinked;
 - (BOOL) isInvertedWhenBlending;
 - (^{CGPath=}) newBezierPath;
 - (^{CGImage=}) createCGImageMask;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (BOOL) isEnabled;


@end
