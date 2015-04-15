
@interface CIRectangleDetector : CIDetector {

    @"CIContext" context;
    double _width;
    double _height;
    @"NSMutableDictionary" featureOptions;
    ^{OpaqueVTPixelTransferSession=} pixelTransferSession;
    ^{__CVBuffer=} interimScaleBuffer;
    ^{__CVBuffer=} scaleBuffer;
    ^f perMeshPtr;
    ^v _internalBuffer;
}

 - (void) dealloc;
 - (void) finalize;
 - (void) setContext:(id)a;
 - (id) featuresInImage:(id)aoptions:(id)b;
 - (id) initWithContext:(id)aoptions:(id)b;
 - (id) featuresInImage:(id)a;
 - (id) featuresInImageUsingCCRect:(id)aoptions:(id)b;
 - (id) context;


@end
