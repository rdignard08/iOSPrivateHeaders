
@interface CIRectangleDetector : CIDetector {

    CIContext* context;
    double _width;
    double _height;
    NSMutableDictionary* featureOptions;
    ^{OpaqueVTPixelTransferSession=} pixelTransferSession;
    ^{__CVBuffer=} interimScaleBuffer;
    ^{__CVBuffer=} scaleBuffer;
    ^f perMeshPtr;
    ^v _internalBuffer;
}

 - (void) dealloc;
 - (void) finalize;
 - (void) setContext:(id)a ;
 - (id) featuresInImage:(id)a options:(id)b ;
 - (id) initWithContext:(id)a options:(id)b ;
 - (id) featuresInImage:(id)a ;
 - (id) featuresInImageUsingCCRect:(id)a options:(id)b ;
 - (id) context;


@end
