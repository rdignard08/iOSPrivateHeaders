
@interface CIBarcodeDetector : CIDetector {

    CIContext* context;
    double _width;
    double _height;
    NSMutableDictionary* featureOptions;
}

 - (void) setContext:(id)a ;
 - (id) featuresInImage:(id)a options:(id)b ;
 - (id) initWithContext:(id)a options:(id)b ;
 - (id) featuresInImage:(id)a ;
 - (id) context;


@end
